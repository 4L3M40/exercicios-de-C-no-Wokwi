/*03) Faça o microcontrolador esp32 dar um ping em "http://google.com.br" e imprima 
o resultado na serial.*/

#include <WiFi.h>
#include <HTTPClient.h>

const char* ssid = "Wokwi-GUEST"; // Nome da rede Wi-Fi no Wokwi
const char* password = "";        // Senha (deixe em branco)

void setup() {
    Serial.begin(115200);

    // Conecta à rede Wi-Fi
    WiFi.begin(ssid, password);
    Serial.print("Conectando à rede Wi-Fi");
    while (WiFi.status() != WL_CONNECTED) {
        delay(1000);
        Serial.print(".");
    }
    Serial.println("\nConectado!");

    // Faz uma requisição HTTP (sem SSL)
    HTTPClient http;
    http.begin("http://example.com"); // URL HTTP simples para teste

    int httpCode = http.GET(); // Faz a requisição GET

    if (httpCode > 0) {
        if (httpCode == HTTP_CODE_OK) {
            Serial.println("Conexão com a internet funcionando!");
            String payload = http.getString(); // Pega o conteúdo da resposta
            Serial.println(payload); // Mostra o conteúdo no Serial
        } else {
            Serial.printf("Erro na requisição! Código HTTP: %d\n", httpCode);
        }
    } else {
        Serial.println("Falha ao conectar ao servidor!");
    }

    http.end(); // Libera os recursos
}

void loop() {
    // Nada no loop, a requisição é feita apenas uma vez no setup
}