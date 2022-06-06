void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);  //pin 12 connected to switch
}
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn on LED, arduino is on
  digitalWrite(12, HIGH);
  delay(3000);
  digitalWrite(12, LOW);
  delay(3000);
}
