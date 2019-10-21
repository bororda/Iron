#include <TinyWireM.h>
#include <TinyLiquidCrystal.h>

#define pin_pwm 6
#define pin_ponent 2
#define pin_sensor 3
//#define pin_sda 5
//#define pin_scl 7
#define oled_addr 0x3C

unsigned long lastTimeCheckedTemp = 0;
byte pwm_lvl = 0;
byte delta = 0;

TinyLiquidCrystal lcd(oled_addr,16,2); 

void setup() {
  pinMode(pin_pwm, OUTPUT);
  //pinMode(pin_ponent, INPUT_PULLUP) //not needed
  pinMode(pin_sensor, INPUT);
}

void loop()
{
  byte t_real = analogRead(pin_sensor);
  byte t_target = analogRead(pin_ponent);
  if ((millis() - lastTimeCheckedTemp) >= 2000)
  {
    if (t_target > t_real)
    {
      delta = t_target - t_real;
      if (delta<16 & delta >= 8)
        pwm_lvl = 220;
      else if (delta<8 & delta >= 4)
        pwm_lvl = 170;
      else if (delta < 4)
        pwm_lvl = 120;
      else
        pwm_lvl = 255;
    }
    else
    {
      pwm_lvl = 0;
    }
    analogWrite(pin_pwm, pwm_lvl);
    lastTimeCheckedTemp = millis();
  }
}
