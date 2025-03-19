/*10) Desenvolva um código onde é lido uma informação de uma entrada analógica 
através de um potênciometro e estipule um limiar para acender ou apagar um led.*/

const int potPin = 34;    // Pino onde o potenciômetro está conectado (GPIO 34)
const int ledPin = 2;     // Pino onde o LED está conectado (GPIO 2)
const int limiar = 1000;  // Limiar para acender o LED (valor entre 0 e 4095)

void setup() {
    Serial.begin(115200); // Inicializa a comunicação serial
    pinMode(potPin, INPUT); // Configura o pino do potenciômetro como entrada (opcional)
    pinMode(ledPin, OUTPUT); // Configura o pino do LED como saída
}

void loop() {
    int valor = analogRead(potPin); // Lê o valor analógico do potenciômetro

    // Exibe o valor lido no Serial Monitor
    Serial.print("Valor do potenciômetro: ");
    Serial.println(valor);

    // Verifica se o valor lido é maior que o limiar
    if (valor > limiar) {
        digitalWrite(ledPin, HIGH); // Acende o LED
        Serial.println("LED ligado!");
    } else {
        digitalWrite(ledPin, LOW);  // Apaga o LED
        Serial.println("LED desligado.");
    }

    delay(500); // Aguarda 500ms antes de fazer a próxima leitura
}
