# 📘 Exercícios ESP32 - Wokwi / Arduino IDE  
Este repositório contém uma coleção de **10 exercícios básicos e intermediários em C/C++ para ESP32**, desenvolvidos utilizando o simulador **Wokwi** e a **Arduino IDE**.  
O objetivo é praticar entrada/saída digital, leitura analógica, controle via serial e integração com periféricos como LCD e Wi-Fi

## 🧠 Índice

1. 🌐 [Contagem de 1 a 10 via Serial](#1-contagem-de-1-a-10-via-serial)  
2. 💡 [Piscar LED a cada segundo](#2-piscar-led-a-cada-segundo)  
3. 🌐 [Ping HTTP para testar conexão com a internet](#3-ping-http-para-testar-conexão-com-a-internet)  
4. 👋 [Entrada de nome via Serial e saudação](#4-entrada-de-nome-via-serial-e-saudação)  
5. 💡 [Piscar LED com base em número inserido](#5-piscar-led-com-base-em-número-inserido)  
6. 🖥️ [Imprimir "Olá Mundo" em LCD 16x2](#6-imprimir-olá-mundo-em-lcd-16x2)  
7. *[Reservado]*  
8. *[Reservado]*  
9. 🎛️ [Leitura de potenciômetro via entrada analógica](#9-leitura-de-potenciômetro-via-entrada-analógica)  
10. 💡 [Acender LED com base no valor do potenciômetro](#10-acender-led-com-base-no-valor-do-potenciômetro)

---

### 1. 🌐 Contagem de 1 a 10 via Serial  
Este programa realiza uma contagem de 1 a 10 e imprime os números no console serial com intervalos de 1 segundo entre eles.

🔧 **Requisitos**
- ESP32
- Arduino IDE ou Wokwi (emulador online)
- Baud Rate de 115200 configurado no monitor serial

▶️ **Como usar**
1. Abra o código na Arduino IDE ou no Wokwi.
2. Conecte sua ESP32 (ou use a simulação no Wokwi).
3. Compile e envie o código para a placa.
4. Abra o Monitor Serial com baud rate de 115200.
5. Veja a contagem de 1 a 10 sendo exibida com intervalos de 1 segundo.

---

### 2. 💡 Piscar LED a cada segundo  
Programa que faz um LED piscar a cada segundo no pino 14 da ESP32, criando um efeito de "heartbeat".

🔧 **Requisitos**
- ESP32
- LED conectado ao pino 14
- Arduino IDE ou Wokwi

▶️ **Como usar**
1. Abra o código na Arduino IDE ou no Wokwi.
2. Conecte sua ESP32 (ou use a simulação no Wokwi).
3. Compile e envie o código para a placa.
4. Veja o LED piscando a cada segundo.

---

### 3. 🌐 Ping HTTP para testar conexão com a internet  
Este programa conecta a ESP32 a uma rede Wi-Fi e realiza uma requisição HTTP para testar a conectividade com a internet, imprimindo o resultado no Serial Monitor.

🔧 **Requisitos**
- ESP32
- Rede Wi-Fi para conexão
- Biblioteca HTTPClient
- Arduino IDE ou Wokwi

▶️ **Como usar**
1. Abra o código na Arduino IDE ou no Wokwi.
2. Insira suas credenciais de Wi-Fi no código.
3. Compile e envie o código para a placa.
4. Abra o Monitor Serial e veja a resposta da requisição HTTP.

---

### 4. 👋 Entrada de nome via Serial e saudação  
Este programa solicita que o usuário digite seu nome via Serial e responde com uma saudação personalizada.

🔧 **Requisitos**
- ESP32
- Arduino IDE ou Wokwi

▶️ **Como usar**
1. Abra o código na Arduino IDE ou no Wokwi.
2. Conecte sua ESP32 (ou use a simulação no Wokwi).
3. Compile e envie o código para a placa.
4. Abra o Monitor Serial, insira seu nome e veja a saudação personalizada.

---

### 5. 💡 Piscar LED com base em número inserido  
O programa lê um número digitado pelo usuário via Serial e faz o LED piscar a quantidade de vezes indicada.

🔧 **Requisitos**
- ESP32
- LED conectado ao pino 14
- Arduino IDE ou Wokwi

▶️ **Como usar**
1. Abra o código na Arduino IDE ou no Wokwi.
2. Conecte sua ESP32 (ou use a simulação no Wokwi).
3. Compile e envie o código para a placa.
4. Abra o Monitor Serial e digite um número para determinar quantas vezes o LED vai piscar.

---

### 6. 🖥️ Imprimir "Olá Mundo" em LCD 16x2  
Este programa utiliza um display LCD 16x2 com interface I2C para exibir a mensagem “Olá Mundo!!”.

🔧 **Requisitos**
- ESP32
- Display LCD 16x2 com I2C
- Arduino IDE ou Wokwi

▶️ **Como usar**
1. Abra o código na Arduino IDE ou no Wokwi.
2. Conecte sua ESP32 e o display LCD (ou use a simulação no Wokwi).
3. Compile e envie o código para a placa.
4. Veja a mensagem “Olá Mundo!!” sendo exibida no display LCD.

---

### 9. 🎛️ Leitura de potenciômetro via entrada analógica  
Este programa lê o valor de um potenciômetro (0 a 4095) e imprime o valor no Serial Monitor a cada 500ms.

🔧 **Requisitos**
- ESP32
- Potenciômetro conectado ao pino GPIO 34
- Arduino IDE ou Wokwi

▶️ **Como usar**
1. Abra o código na Arduino IDE ou no Wokwi.
2. Conecte o potenciômetro à ESP32 (ou use a simulação no Wokwi).
3. Compile e envie o código para a placa.
4. Abra o Monitor Serial e veja o valor do potenciômetro sendo impresso a cada 500ms.

---

### 10. 💡 Acender LED com base no valor do potenciômetro  
Este programa acende ou apaga um LED dependendo do valor lido no potenciômetro e o compara com um limiar predefinido.

🔧 **Requisitos**
- ESP32
- LED conectado ao pino GPIO 2
- Potenciômetro conectado ao pino GPIO 34
- Arduino IDE ou Wokwi

▶️ **Como usar**
1. Abra o código na Arduino IDE ou no Wokwi.
2. Conecte o potenciômetro e o LED à ESP32 (ou use a simulação no Wokwi).
3. Compile e envie o código para a placa.
4. Abra o Monitor Serial e veja o LED acendendo ou apagando conforme o valor do potenciômetro.

---

## 🛠️ Ferramentas utilizadas

- [ESP32 DevKit v1](https://www.espressif.com/en/products/devkits/esp32-devkitc/overview)  
- [Arduino IDE](https://www.arduino.cc/en/software)  
- [Wokwi Simulator](https://wokwi.com)  
- Componentes: LED, potenciômetro, display LCD I2C

---

## 📂 Organização dos arquivos

Cada exercício está separado em seu próprio arquivo `.ino`, nomeado conforme a numeração e descrição.

---

## 🚀 Como testar no Wokwi

1. Acesse [Wokwi](https://wokwi.com).
2. Crie um novo projeto e escolha "ESP32".
3. Copie e cole o código correspondente ao exercício.
4. Simule o circuito (use LED virtual, LCD, etc.).
5. Observe os resultados na simulação.

---

## 💡 Autor

Feito por **Evandro**, com foco em aprender, praticar e dominar o desenvolvimento com ESP32.  
Quer bater papo sobre carros, código ou projetos DIY? Tamo junto! 🚗💻🍖
