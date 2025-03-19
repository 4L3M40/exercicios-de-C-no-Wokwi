/*02) Faça um LED piscar a cada segundo na ESP32 usando a linguagem C.*/

void setup() {
   Serial.begin(115200);
   Serial.println("Hello, ESP32!");

pinMode(14, OUTPUT);

}

void loop() {
  digitalWrite(14, HIGH);
  delay(500); 
  digitalWrite(14, LOW);
  delay(1000);
}

