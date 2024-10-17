# Arduino RC Kumanda Ve Alıcı
## nrf24l01 modülü kullanarak rc araçlar için kumanda ve alıcı sistemi geliştirildi.
![kumanda](https://github.com/OmerYigit35/Arduino_RC_Transmitter/blob/main/transmitter.jpg)
</br>
## Kumandadaki joystickler ile alıcıdaki fırçasız motor ve servo motorlar kontrol edilir. Ayrıca kumandadan aktif edilme durumuna göre servo motorlar, alıcıdaki eğim sensörünün eğimi ile de kontrol edilebilir. Joysticklerin yakınındaki butonlar ile servo motorların trim ayarları yapılır.
![alıcı](https://github.com/OmerYigit35/Arduino_RC_Transmitter/blob/main/receiver.jpg)
## kumanda menüsünden reverse bölümüne girdiğimizde seçtiğimiz kanaldaki servo motorların çalışma yönü değişiyor. 5. kanalın yönü değiştiği taktirde servo motorların kontrolünün joystik veya eğim sensörüne geçeceğine karar veriliyor.
![reverse](https://github.com/OmerYigit35/Arduino_RC_Transmitter/blob/main/ekran_reverse.jpg)
![logo](https://github.com/OmerYigit35/Arduino_RC_Transmitter/blob/main/ekran_logo.jpg)
## UYARI 
### Sistemde düzeltilmesi gereken sorunlar var.</br> Servo motorların sağlıklı çalışması için kumandanın menüde(ekran_menu.jpg) olması gerekir. </br> Servo motorları kontrol ederken aşırı hızlı davrandığımızda alıcı donuyor. Reset işlemi eklenecektir.  
![buton](https://github.com/OmerYigit35/Arduino_RC_Transmitter/blob/main/buton.jpg)
## Tüm butonlar arduinoda tek bir pin ile çalışacak şekilde tasarlandı.
![](https://github.com/OmerYigit35/Arduino_RC_Transmitter/blob/main/devre.jpg)
![](https://github.com/OmerYigit35/Arduino_RC_Transmitter/blob/main/devre2.jpg)
