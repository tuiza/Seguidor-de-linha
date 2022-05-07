#include <Arduino.h>

#define sensorDir A0
#define sensorEsq A1
#define ledDir 7
#define ledEsq 13
int valorDir = 0;
int valorEsq = 0;
int valorLedDir = 0;
int valorLedEsq = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(sensorDir, INPUT);
  pinMode(ledDir, INPUT);
}

void loop()
{
  valorDir = analogRead(sensorDir);
  valorEsq = analogRead(sensorEsq);
  valorLedDir = digitalRead(ledDir);
  valorLedEsq = digitalRead(ledEsq);
  Serial.println(valorEsq);
  delay(1000);
}