#include <user_interface.h>

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(16, INPUT);
}

void loop() {
float sensorValue = 0;
/*
  for (int i = 0; i < 500; i++) 
  {
  sensorValue = sensorValue + analogRead(A0);  
  }
  sensorValue = sensorValue/500;
*/
sensorValue = analogRead(A0);
Serial.println(sensorValue);
  delay(1000);
}
