// Khai báo chân kết nối cảm biến LM35
const int LM35_PIN = A0;
void setup() {
  Serial.begin(9600);
}
void loop() {
  int v0 = analogRead(A0);
  int v1 = analogRead(A1);
  float t0 = v0 * (5.0 / 1023.0) * 100.0;
  float t1 = v1 * (5.0 / 1023.0) * 100.0;
  Serial.print(t0);
  Serial.print(",");
  Serial.println(t1);
  delay(1000);
}
