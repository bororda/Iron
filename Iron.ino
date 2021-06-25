#include <Wire.h>
#define pin_pwm 1
#define pin_ponent A3
#define pin_sensor A2

unsigned long lastTimeCheckedTemp = 0;
int pwm_lvl = 0;
int t_sens = 0;
int t_real = 0;
int t_potent = 0;
int t_target = 0;

float kp = 5;
float ki = 1.6;
float kd = 0.2;

float P = 0;
float prevErr = 0;
float I = 0;
float D = 0;

void setup() {
  Wire.begin();
  oledInit();
  oledClear();
  pinMode(pin_pwm, OUTPUT);
  pinMode(pin_sensor, INPUT);
  t_target = analogRead(pin_ponent);
}

void loop()
{
  if ((millis() - lastTimeCheckedTemp) >= 100)
  {
    t_sens = analogRead(pin_sensor);
    t_real = t_sens * 0.2 + t_real * 0.8; //apply running average filter
    t_potent = analogRead(pin_ponent);
    t_target = t_potent * 0.2 + t_target * 0.8; //apply running average filter

    P = t_target - t_real;
    I += P * 0.1;
    D = (P - prevErr) / 0.1;
    prevErr = P;
    pwm_lvl = P * kp + constrain(I * ki, 0, 1023) + D * kd;

    analogWrite(pin_pwm, pwm_lvl);

    text();
    digit(t_potent, 0); digit(t_real, 1);
    digit(pwm_lvl, 2); digit(pwm_lvl, 3);

    lastTimeCheckedTemp = millis();
  }
}
