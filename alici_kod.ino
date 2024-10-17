#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#include <Servo.h>  
#include <Wire.h>
#include <MPU6050.h>
MPU6050 mpu;
Servo servoX;  // X eksenine bağlı servo motor
Servo servoY;  // Y eksenine bağlı servo motor

const uint64_t pipeIn = 0xE8E8F0F0E1LL;     
RF24 radio(9, 10);  //CSN and CE pins


struct Received_data {
  byte ch1;
  byte ch2;
  byte ch3; 
  byte ch4;
  };

Received_data received_data;

Servo channel_1;
Servo channel_2;
Servo channel_3;
Servo channel_4;

int ch1_value = 0;
int ch2_value = 0;
int ch3_value = 0;
int ch4_value = 0;

void reset_the_Data() 
{
  
  received_data.ch1 = 0;      
  received_data.ch2 = 127;
  received_data.ch3 = 127;
  received_data.ch4 = 0;
 }



/**************************************************/

void setup()
{
Wire.begin();
  Serial.begin(9600);

  // MPU6050'yi başlat
  mpu.initialize();
  if (mpu.testConnection()) {
    Serial.println("MPU6050 bağlantısı başarılı");
  } else {
    Serial.println("MPU6050 bağlantısı başarısız");
    while (1);
  }

  //Attach the servo signal on pins from D2 to D8
  channel_1.attach(2);
  channel_2.attach(3);
  channel_3.attach(4);
  
  //We reset the received values
  reset_the_Data();

  //Once again, begin and radio configuration
  radio.begin();
  radio.setAutoAck(false);
  radio.setDataRate(RF24_250KBPS);  
  radio.openReadingPipe(1,pipeIn);
  
  //We start the radio comunication
  radio.startListening();

}

/**************************************************/

unsigned long lastRecvTime = 0;

//We create the function that will read the data each certain time
void receive_the_data()
{
  while ( radio.available() ) {
  radio.read(&received_data, sizeof(Received_data));
  lastRecvTime = millis(); //Here we receive the data
}
}

/**************************************************/

void loop()
{
  //Receive the radio data
  receive_the_data();


  unsigned long now = millis();
  if ( now - lastRecvTime > 1000 ) {
    // signal lost?
    reset_the_Data();
    
  } 

  
  ch1_value = map(received_data.ch1,0,255,1000,2000);
  ch2_value = map(received_data.ch2,0,255,1000,2000);
  ch3_value = map(received_data.ch3,0,255,1000,2000);
  ch4_value = map(received_data.ch4,0,1,0,1);
 
 if(ch4_value==0){
  channel_2.writeMicroseconds(ch2_value);  
  channel_3.writeMicroseconds(ch3_value); 
 }
 else if(ch4_value==1){
  int16_t ax, ay, az;
  int16_t gx, gy, gz;

  // MPU6050 verilerini oku
  mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);

  // X eksenindeki ivme değerini kullanarak servo açısını hesapla
  int angleX = map(ax, -17000, 17000, 0, 180);

  // Y eksenindeki ivme değerini kullanarak servo açısını hesapla
  int angleY = map(ay, -17000, 17000, 0, 180);

  // Servo motorlarının pozisyonunu ayarla
  channel_2.write(angleX);
  channel_3.write(angleY);

  // Seri monitöre verileri yazdır
  Serial.print("AX: "); Serial.print(ax);
  Serial.print(" AngleX: "); Serial.print(angleX);
  Serial.print(" AY: "); Serial.print(ay);
  Serial.print(" AngleY: "); Serial.println(angleY);

  // Kısa bir süre bekle
  delay(10);
 }
  //Creathe the PWM signals
  channel_1.writeMicroseconds(ch1_value);  
   
  }