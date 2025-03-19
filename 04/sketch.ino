/*04) Elabore um programa em que o dispositivo solicita ao usuário que insira seu 
nome. Após a entrada do nome pelo usuário, o programa deve exibir uma 
mensagem de boas-vindas, incluindo o nome fornecido, através da saída serial. */

char nome[50]; // Array para armazenar o nome do usuário

void setup() {
    Serial.begin(115200); // Inicializa a comunicação serial
    Serial.println("Digite seu nome e pressione ENTER:"); // Solicita o nome do usuário
}

void loop() {
    if (Serial.available() > 0) { // Verifica se há dados disponíveis na serial
        int i = 0;
        while (Serial.available()) { // Lê os dados da serial
            nome[i++] = Serial.read(); // Armazena cada caractere no array
            delay(10); // Pequeno delay para garantir que todos os caracteres sejam lidos
        }
        nome[i] = '\0'; // Adiciona o caractere nulo para finalizar a string
        Serial.print("Bem-vindo, ");
        Serial.println(nome); // Exibe a mensagem de boas-vindas com o nome
        Serial.println("Digite outro nome ou reinicie o programa para começar novamente.");
    }
}