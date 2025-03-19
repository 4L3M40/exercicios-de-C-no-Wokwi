/*05) Desenvolva um programa onde o usuário digita um número de entrada e o 
dispositivo pisca o led na quantidade de vezes que foi informado.*/

const int ledPin = 14; // Define o pino do LED (GPIO 2 é comum em muitas placas ESP32)

void setup() {
    Serial.begin(115200); // Inicializa a comunicação serial
    pinMode(ledPin, OUTPUT); // Configura o pino do LED como saída
    Serial.println("Quantas vezes o LED deve piscar?");
}

void loop() {
    if (Serial.available() > 0) { // Verifica se há dados disponíveis na serial
        int vezes = Serial.parseInt(); // Lê o número de vezes que o LED deve piscar
        Serial.print("O LED piscará ");
        Serial.print(vezes);
        Serial.println(" vezes.");

        for (int i = 0; i < vezes; i++) {
            digitalWrite(ledPin, HIGH); // Liga o LED
            delay(500); // Aguarda 500ms
            digitalWrite(ledPin, LOW); // Desliga o LED
            delay(500); // Aguarda 500ms
        }

        Serial.println("Piscagem concluída. Digite um novo número para piscar novamente.");
    }
}