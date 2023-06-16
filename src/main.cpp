#include <Arduino.h>

#define POTENTIOMETER A0

void setup() {
    Serial.begin(9600);
    pinMode(POTENTIOMETER, INPUT);
}

void loop() {

    int potency = analogRead(POTENTIOMETER);
    double tension = potency * 5.0 / 1024.0;

    Serial.print("Potency:");
    Serial.print(potency);
    Serial.print(" ");
    Serial.print("Tension:");
    Serial.print(tension);
    Serial.println();

    delay(100);

}