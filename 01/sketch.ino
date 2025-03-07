#include <Arduino.h>

// Exercicio 01: Contagem de 1 a 10
void setup() {
    Serial.begin(115200);
}

void loop() {
    for (int i = 1; i <= 10; i++) {
        Serial.println(i);
        delay(1000);
    }
    while (true);
}