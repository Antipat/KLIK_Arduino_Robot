<img src="https://komarev.com/ghpvc/?username=your-github-username&style=flat-square&color=blue" alt=""/>

## KLIK_Arduino_Robot
# KLIK_Arduino_Robot - проект, разработанный для наборов КЛИК, КЛИК2 и НикиРобот.

Библиотека :fire: **KLIK_I2C_Motor.h** используется для управления моторами с энкодерами по I2C.
Данные моторы входят в ресурсный набор.

Мотор с энкодером I2C
![Image alt](https://github.com/Antipat/NiKi_Arduino_Robot/blob/main/Im/%D0%98%D0%B7%D0%BE%D0%B1%D1%80%D0%B0%D0%B6%D0%B5%D0%BD%D0%B8%D0%B5%20WhatsApp%202024-08-08%20%D0%B2%2011.48.59_10330e08.jpg)


По умолчанию, каждый мотор имеет адрес 0x09.

По адресу **KLIK_I2C_Motor/examples/HardWire** Вы найдёте список примеров по работе с библиотекой NikiR_I2C_Motor.

Программа **GetAddress** отобразит адрес, подключенного мотора.

Программа **NewAddress** поможет назначить новый адрес мотору.
Назначаемый модулю адрес (0x07 < адрес < 0x7F). 

ВАЖНО!!!  Назначать можно одновременно только одному подключённому мотору. Поочерёдно подключайте моторы, чтобы назначить им адреса.
