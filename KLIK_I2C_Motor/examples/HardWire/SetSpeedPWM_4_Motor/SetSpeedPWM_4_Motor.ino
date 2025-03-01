// ДАННЫЙ ПРИМЕР ЗАПУСКАЕТ МОТОР С УКАЗАНИЕМ ШИМ: // * Строки со звёздочкой являются необязательными.
                                                  //
                                               //
#include <Wire.h>                                 //   Подключаем библиотеку для работы с аппаратной шиной I2C, до подключения библиотеки KLIK_I2C_Motor.
#include <KLIK_I2C_Motor.h>                   //   Подключаем библиотеку для работы с мотором I2C-flash.
KLIK_I2C_Motor mot1(0x0A);                     //   Объявляем объект mot для работы с функциями и методами библиотеки KLIK_I2C_Motor, указывая адрес модуля на шине I2C.
KLIK_I2C_Motor mot2(0x09); 
KLIK_I2C_Motor mot3(0x10); 
KLIK_I2C_Motor mot4(0x08);                                                   

void setup(){
Serial.begin(9600); 
    while(!Serial){;}                           	//
    delay(500);                                   // * Ждём завершение переходных процессов связанных с подачей питания.
    mot1.begin(&Wire); // &Wire1, &Wire2 ...       //   Инициируем работу с мотором, указав ссылку на объект для работы с шиной I2C на которой находится мотор (по умолчанию &Wire).
   delay(100);
    mot2.begin(&Wire);
    delay(100);
    mot3.begin(&Wire);
    delay(100);
    mot4.begin(&Wire);

}                                                 //
                                                  //
void loop(){
    Serial.println("По часовой стрелке");	//
    mot1.setSpeed(  50.0, MOT_PWM);                //   Запускаем мотор установив ШИМ =   50% (ШИМ указывается в % 0 до ±100.0).
    mot2.setSpeed(  75.0, MOT_PWM);
    mot3.setSpeed(  100.0, MOT_PWM);
    mot4.setSpeed(  40.0, MOT_PWM);    
    delay(5000);
	 Serial.println("Против часовой стрелки");
    mot1.setSpeed(  -50.0, MOT_PWM);                //   Запускаем мотор установив ШИМ =   50% (ШИМ указывается в % 0 до ±100.0).
    mot2.setSpeed(  -75.0, MOT_PWM);
    mot3.setSpeed(  -100.0, MOT_PWM);
    mot4.setSpeed(  -40.0, MOT_PWM); 
    delay(5000); 
}                                                 //
