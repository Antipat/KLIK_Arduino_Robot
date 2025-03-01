// ПРИМЕР ВЫВОДИТ РАССТОЯНИЕ ДО ОСТАНОВКИ:        // * Строки со звёздочкой являются необязательными.
                                                  //
#include <Wire.h>                                 // * Подключаем библиотеку для работы с аппаратной шиной I2C.
#include <KLIK_I2C_Motor.h>                   //   Подключаем библиотеку для работы с мотором I2C-flash.
KLIK_I2C_Motor mot_L(0x09);                     //   Объявляем объект mot для работы с функциями и методами библиотеки iarduino_I2C_Motor, указывая адрес модуля на шине I2C.
                                                //   Если объявить объект без указания адреса (iarduino_I2C_Motor mot;), то адрес будет найден автоматически.
KLIK_I2C_Motor mot_R(0x0A);                                                

float m =0.0;
float n = 0.0;
float velL = 60; // об/мин мотора левого
float velR = 60; // об/мин мотора правого
float v = 1;
float k =0.0;
void setup(){                                     //
    delay(500);                                   // * Ждём завершение переходных процессов связанных с подачей питания.
    Serial.begin(9600);                           //
    while(!Serial){;}                             // * Ждём завершения инициализации шины UART.
    mot_L.begin();                                  //   Инициируем работу с мотором.
    mot_L.radius = 33;
     mot_R.begin();                                  //   Инициируем работу с мотором.
    mot_R.radius = 33; //   Указываем радиус колеса в мм.
mot_R.setDirection(false);


}                                                 
                                                  
void loop(){  
  mot_R.setSpeed(-velR, MOT_RPM);      // назначаем скорость правому мотору                             
  mot_L.setSpeed(velL,MOT_RPM);      // назначаем скорость левому мотору
   
      delay(1);                              //   Приостанавливаем выполнение скетча на 0.001 секунду. 
    m = mot_L.getSum(MOT_REV); // считываем скорость с левого мотора
    n = mot_R.getSum(MOT_REV); // считываем скорость с правого мотора
    float i = mot_L.getSpeed( MOT_RPM );
    float j = mot_R.getSpeed( MOT_RPM );
    Serial.print("m = ");
    Serial.println(i);
     Serial.print("n = ");
    Serial.println(j);

    //  сравниваем скорости и корректируем
    if (abs(i)>abs(j))
    {
      velR+=1;
      velL-=1;
      }

      if (abs(j)>abs(i))
    {
      velR-=1;
      velL+=1;
      }
      //delay(10); 
     mot_L.delSum();
     mot_R.delSum();
} 
                                          
