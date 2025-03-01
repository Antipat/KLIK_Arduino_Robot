<img src="https://komarev.com/ghpvc/?username=your-github-username&style=flat-square&color=blue" alt=""/>

## KLIK_Arduino_Robot
# KLIK_Arduino_Robot - проект, разработанный для наборов КЛИК, КЛИК2 и НикиРобот.

Библиотека :fire: **KLIK_I2C_Motor.h** используется для управления моторами с энкодерами по I2C.
Данные моторы входят в ресурсный набор.

***Скачайте и импортируйте*** zip архив библиотеки. 
***Два способа скачать*** :

***1 Способ*** - выберите zip файл KLIK_I2C_Motor и скачайте его.
![Image alt](https://github.com/Antipat/KLIK_Arduino_Robot/blob/main/Im/Clip2net_250301181742.png)

***2 Способ*** - скачайте zipархив по ссылке https://disk.yandex.ru/d/3h56aqckiyxLCQ 

#
#
#
#
#
#
#
#
#
Мотор с энкодером I2C
![Image alt](https://github.com/Antipat/KLIK_Arduino_Robot/blob/main/Im/7.png)


По умолчанию, каждый мотор имеет адрес 0x09.

По адресу **KLIK_I2C_Motor/examples/HardWire** Вы найдёте список примеров по работе с библиотекой KLIK_I2C_Motor.

***1.*** Программа **GetAddress** отобразит адрес, подключенного мотора.

***2.*** Программа **NewAddress** поможет назначить новый адрес мотору.
Назначаемый модулю адрес (0x07 < адрес < 0x7F). 

ВАЖНО!!!  Назначать можно одновременно только одному подключённому мотору. Поочерёдно подключайте моторы, чтобы назначить им адреса.

***3.*** Программа **GetInfo** выводит номинальное напряжение, передаточное отношение, количество магнитов, направление мотора

***4.*** Программа **FindMagnet** выводит количество полюсов одной полярности

***5.*** Программа **FindReducer** выводит передаточное отношение мотора

***6.*** Программа **GetError** анализирует наличие ошибки определения скорости

***7.*** Программа **GetSpeedM_S** выводит скорость мотора в м/c при заданном значении ШИМ и радиусе колеса

***8.*** Программа **GetSpeedPWM** выводит скорость мотора в значениях ШИМ от -100 до 100.

***9.*** Программа **GetSpeedRPM** выводит скорость мотора в об/мин при заданном значении ШИМ

***10.*** Программа **GetSum** выводит время работы мотора, пройденное расстояние, количество совершённых оборотов, при заданной скорости в ШИМ и радиусе колеса.

***11.*** Программа **SetDirection** программа для демонстрации альтернативного варианта изменения направления вращения оси мотора.

***12.*** Программа **SetSpeedPWM** программа для демонстрации назначения разных скоростей и направлений для мотора по ШИМ.

***13.*** Программа **Stop_MET** программа для демонстрации остановки мотора по достижению заданного расстояния.


