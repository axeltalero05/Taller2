#include <Arduino.h>

#define Button 5
#define LED 4

bool Last_Button_Value = 0;
bool Button_Value;
bool Led_State = 0;

void setup() {
Serial.begin(9600);
pinMode(Button, INPUT);
pinMode(LED, OUTPUT);
digitalWrite(LED,LOW);

}

void loop() {
 bool Button_Value = digitalRead(Button);
 Serial.println("Estado del pulsador: " + String(Button_Value));
 if (Last_Button_Value == 0 && Button_Value == 1) {
    Led_State = !Led_State;
    digitalWrite(LED, Led_State);
 }
 Last_Button_Value = Button_Value ;
}