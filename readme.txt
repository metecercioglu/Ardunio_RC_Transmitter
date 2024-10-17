# Arduino RC Kumanda ve Alıcı
## nrf24l01 modülü kullanarak rc araçlar için kumanda ve alıcı sistemi geliştirildi.
![kumanda](https://raw.githubusercontent.com/metecercioglu/Ardunio_RC_Transmitter/main/WhatsApp%20Image%202024-10-17%20at%2014.26.58%20(7).jpeg)
</br>
## Kumandadaki joystickler ile alıcıdaki fırçasız motor ve servo motorlar kontrol edilir. Ayrıca kumandadan aktif edilme durumuna göre servo motorlar, alıcıdaki eğim sensörünün eğimi ile de kontrol edilebilir. Joysticklerin yakınındaki butonlar ile servo motorların trim ayarları yapılır.
![alıcı](https://raw.githubusercontent.com/metecercioglu/Ardunio_RC_Transmitter/main/WhatsApp%20Image%202024-10-17%20at%2014.26.58%20(3).jpeg)
## Kumanda menüsünden reverse bölümüne girdiğimizde seçtiğimiz kanaldaki servo motorların çalışma yönü değişiyor. 5. kanalın yönü değiştiği taktirde servo motorların kontrolünün joystick veya eğim sensörüne geçeceğine karar veriliyor.
![reverse](https://raw.githubusercontent.com/metecercioglu/Ardunio_RC_Transmitter/main/WhatsApp%20Image%202024-10-17%20at%2014.26.58%20(6).jpeg)
![logo](https://raw.githubusercontent.com/metecercioglu/Ardunio_RC_Transmitter/main/WhatsApp%20Image%202024-10-17%20at%2014.26.58%20(1).jpeg)
## UYARI
### Sistemde düzeltilmesi gereken sorunlar var.</br> Servo motorların sağlıklı çalışması için kumandanın menüde![buton](https://raw.githubusercontent.com/metecercioglu/Ardunio_RC_Transmitter/main/WhatsApp%20Image%202024-10-17%20at%2014.19.59.jpeg) olması gerekir. </br> Servo motorları kontrol ederken aşırı hızlı davrandığımızda alıcı donuyor. Reset işlemi eklenecektir.  
![buton](https://raw.githubusercontent.com/metecercioglu/Ardunio_RC_Transmitter/main/WhatsApp%20Image%202024-10-17%20at%2014.26.58%20(5).jpeg)
## Tüm butonlar arduinoda tek bir pin ile çalışacak şekilde tasarlandı.
![butonlar](https://raw.githubusercontent.com/metecercioglu/Ardunio_RC_Transmitter/main/WhatsApp%20Image%202024-10-17%20at%2014.26.58%20(2).jpeg)
![butonlar](https://raw.githubusercontent.com/metecercioglu/Ardunio_RC_Transmitter/main/WhatsApp%20Image%202024-10-17%20at%2014.26.58%20(4).jpeg)
