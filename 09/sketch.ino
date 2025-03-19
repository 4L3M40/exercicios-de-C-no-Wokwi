/*09) Faça um código onde lê os dados analógicos capturados em um potenciômetro 
e apresente na saída serial. */

const int potPin = 34; // Pino onde o potenciômetro está conectado (GPIO 34)

void setup() {
    Serial.begin(115200); // Inicializa a comunicação serial
}

void loop() {
    int valor = analogRead(potPin); // Lê o valor analógico do potenciômetro
    Serial.print("Valor do potenciômetro: "); // Exibe uma mensagem descritiva
    Serial.println(valor); // Exibe o valor lido
    delay(500); // Aguarda 500ms antes de fazer a próxima leitura
}