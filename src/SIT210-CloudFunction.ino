/*
 * Project SIT210-CloudFunction
 * Author: Brett T Best
 * Date: March 2019
 */

#include <Particle.h>

int toggleLED(String led);

void setup()
{
  Particle.function("toggleLED", toggleLED);

  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
}

void loop()
{

}

void togglePin(int pin)
{
  digitalWrite(pin, !digitalRead(pin));
}

int toggleLED(String led)
{
  if (led == "blue")
  {
    togglePin(D0);
  }
  else if (led == "green")
  {
    togglePin(D1);
  }
  else if (led == "red")
  {
    togglePin(D2);
  }

  return 1;
}