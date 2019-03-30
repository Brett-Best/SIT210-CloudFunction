/*
 * Project SIT210-CloudFunction
 * Author: Brett T Best
 * Date: March 2019
 */

#include <Particle.h>

void setup() {
  pinMode(D7, OUTPUT);

  Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", myHandler, ALL_DEVICES);
}


void loop() {

}

void myHandler(const char *event, const char *data)
{
  if (0 == strcmp(data, "wave"))
  {
    digitalWrite(D7, HIGH);
    delay(2000); 
    digitalWrite(D7, LOW);
  }
  else if (0 == strcmp(data, "pat"))
  {
    digitalWrite(D7, HIGH);
    delay(500);
    digitalWrite(D7, LOW);
    delay(500);
    digitalWrite(D7, HIGH);
    delay(500);
    digitalWrite(D7, LOW);
    delay(500);
    digitalWrite(D7, HIGH);
    delay(500);
    digitalWrite(D7, LOW);
    delay(500);
    digitalWrite(D7, HIGH);
    delay(500);
    digitalWrite(D7, LOW);
    delay(500);
  }
}
