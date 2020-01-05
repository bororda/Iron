#include <Wire.h>

#define pin_pwm 1
#define pin_ponent 3
#define pin_sensor 4

unsigned long lastTimeCheckedTemp = 0;
byte pwm_lvl = 0;
byte delta = 0;

void setup() {
  delay(500); //LCD doesn't start properly w/o these delays
  Wire.begin();
  delay(500); //LCD doesn't start properly w/o these delays
  oledInit();
  oledClear();
  pinMode(pin_pwm, OUTPUT);
  pinMode(pin_sensor, INPUT);
  text();
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
      if (delta<16 & delta >= 8) pwm_lvl = 220;
      else if (delta<8 & delta >= 4) pwm_lvl = 170;
      else if (delta < 4) pwm_lvl = 120;
      else pwm_lvl = 255;
    }
    else pwm_lvl = 0;

    analogWrite(pin_pwm, pwm_lvl);

    digit(t_real, 0); digit(t_real, 1);
    digit(pwm_lvl, 2); digit(pwm_lvl, 3);

    lastTimeCheckedTemp = millis();
  }
}
