/*06) Imprima "Ola Mundo!!" em um display LCD.*/

#include <LiquidCrystal_I2C.h> // Inclui a biblioteca para controlar o LCD I2C

// Inicializa o objeto LiquidCrystal_I2C com o endereço I2C 0x27, 16 colunas e 2 linhas
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
    lcd.init(); // Inicializa o LCD
    lcd.backlight(); // Liga a luz de fundo do LCD
    lcd.setCursor(0, 0); // Define o cursor para a primeira coluna e primeira linha
    lcd.print("Ola Mundo!!"); // Exibe a mensagem no LCD
}

void loop() {
    // Nada no loop, a mensagem é exibida apenas uma vez no setup
}