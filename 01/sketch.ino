/* 01) Escreva um programa em C que utilize as capacidades da ESP32 para imprimir 
uma contagem de 1 a 10 no console serial, com um intervalo de 1 segundo entre c
ada número. */

#include <Arduino.h>

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

