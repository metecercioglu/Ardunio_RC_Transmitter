# Arduino RC Kumanda Ve Alıcı
## nrf24l01 modülü kullanarak rc araçlar için kumanda ve alıcı sistemi geliştirildi.
![kumanda](https://github.com/metecercioglu/Ardunio_RC_Transmitter/blob/main/Resimler/kumanda.jpeg)
</br>
## Kumandadaki joystickler ile alıcıdaki fırçasız motor ve servo motorlar kontrol edilir. Ayrıca kumandadan aktif edilme durumuna göre servo motorlar, alıcıdaki eğim sensörünün eğimi ile de kontrol edilebilir. Joysticklerin yakınındaki butonlar ile servo motorların trim ayarları yapılır.
![alıcı](https://github.com/metecercioglu/Ardunio_RC_Transmitter/blob/main/Resimler/al%C4%B1c%C4%B1.jpeg)
## Kumanda menüsünden reverse bölümüne girdiğimizde seçtiğimiz kanaldaki servo motorların çalışma yönü değişiyor. 5. kanalın yönü değiştiği taktirde servo motorların kontrolünün joystick veya eğim sensörüne geçeceğine karar veriliyor.
![reverse](https://github.com/metecercioglu/Ardunio_RC_Transmitter/blob/main/Resimler/reverse.jpeg)
![logo](https://github.com/metecercioglu/Ardunio_RC_Transmitter/blob/main/Resimler/logo.jpeg)
## UYARI 
### Sistemde düzeltilmesi gereken sorunlar var.</br> Servo motorların sağlıklı çalışması için kumandanın menüde![menü](https://github.com/metecercioglu/Ardunio_RC_Transmitter/blob/main/Resimler/men%C3%BC.jpeg) olması gerekir. </br> Servo motorları kontrol ederken aşırı hızlı davrandığımızda alıcı donuyor. Reset işlemi eklenecektir.  
![buton](https://github.com/metecercioglu/Ardunio_RC_Transmitter/blob/main/Resimler/butonlar.jpeg)
## Tüm butonlar arduinoda tek bir pin ile çalışacak şekilde tasarlandı.
![kumanda2](https://github.com/metecercioglu/Ardunio_RC_Transmitter/blob/main/Resimler/kumanda2.jpeg)
![nrf modül ve haberleşme](https://github.com/metecercioglu/Ardunio_RC_Transmitter/blob/main/Resimler/nrf%20mod%C3%BCl%20ve%20haberle%C5%9Fme.jpeg)
