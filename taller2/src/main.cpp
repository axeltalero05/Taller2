#include <Arduino.h>

#define Analog_Pin A0


void setup() {
Serial.begin(9600);

}

void loop() {
 int Value_Pot = analogRead( Analog_Pin);
 Serial.println("Valor del potenciometro: " + String(Value_Pot));
}