
void setup() {
  // put your setup code here, to run once:
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

