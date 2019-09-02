#include <Arduino.h>

#define Analog_Pin A0
#define LED 4

void setup() {
Serial.begin(9600);
pinMode(LED, OUTPUT);
}

void loop() {
 int Value_Pot = analogRead( Analog_Pin);
 analogWrite(LED, Value_Pot / 4);
 Serial.println("Valor del potenciometro: " + String(Value_Pot));
}