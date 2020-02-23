#define ZUMMER_PIN 6

void setup() {
  Serial.begin(9600);
  Serial.println("Hello world!");
  pinMode(ZUMMER_PIN, OUTPUT);
}
void loop() {
  digitalWrite(ZUMMER_PIN, HIGH);
  Serial.println("On...");
  delay(1000);
  digitalWrite(ZUMMER_PIN, LOW);
  Serial.println("Off...");
  delay(1000);
}
