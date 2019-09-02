#include <Arduino.h>

#define Button 5
#define LED 4

void setup() {
Serial.begin(9600);
pinMode(Button, INPUT);
pinMode(LED, OUTPUT);
digitalWrite(LED,LOW);

}

void loop() {
 bool Button_Value = digitalRead(Button);
 Serial.println("Estado del pulsador: " + String(Button_Value));
 if (Button_Value == 1) digitalWrite(LED,HIGH);
    else digitalWrite (LED,LOW);
}