// ПРИМЕР ВЫВОДИТ РАССТОЯНИЕ ДО ОСТАНОВКИ:        // * Строки со звёздочкой являются необязательными.
                                                  //
#include <Wire.h>                                 // * Подключаем библиотеку для работы с аппаратной шиной I2C.
#include <KLIK_I2C_Motor.h>                   //   Подключаем библиотеку для работы с мотором I2C-flash.

#define USE_MATH_DEFINES

KLIK_I2C_Motor mot_L(0x09);                     //   Объявляем объект mot для работы с функциями и методами библиотеки KLIK_I2C_Motor, указывая адрес модуля на шине I2C.
                                                //   Если объявить объект без указания адреса (KLIK_I2C_Motor mot;), то адрес будет найден автоматически.
KLIK_I2C_Motor mot_R(0x0A);                                                

float R = 85;   // расстояние от центра между ведущими колёсами к третьему колесу в мм. Часто это длина робота.
float r = 24.5;  // радиус колеса
float L = 0.0; // переменная Длина дуги поворота

float angle =90.0; //угол поворота
//float pi = 3.14;  // постоянная пи


void setup(){                                     //
    delay(500);                                   // * Ждём завершение переходных процессов связанных с подачей питания.
    Serial.begin(9600);                           //
    while(!Serial){;}                             // * Ждём завершения инициализации шины UART.
    mot_L.begin();                                  //   Инициируем работу с мотором.
    mot_L.radius = r;                         //Указываем радиус колеса в мм.
     mot_R.begin();                                  //   Инициируем работу с мотором.
    mot_R.radius = r;                      //   Указываем радиус колеса в мм.
  mot_R.setDirection(false);
                          
  L = (angle/180)*M_PI*R;              // Длина дуги в мм
  L = L/1000;                         // Длина дуги в метрах
  Serial.println(L);
  }                                                
                                                  
void loop(){                                      //
    mot_L.setSpeed(-100, MOT_RPM, L, MOT_MET);     //   Запускаем мотор на скорости 100 об/мин с остановкой мотора через L метра.
    mot_R.setSpeed(-100, MOT_RPM, L, MOT_MET);
    
    delay(2000);                                 //   Приостанавливаем выполнение скетча на 2 секунду.
   
}                                                
