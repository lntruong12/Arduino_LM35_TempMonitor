// Khai báo chân kết nối cảm biến LM35
const int LM35_PIN = A0;

void setup() {
  // Khởi tạo giao tiếp Serial ở tốc độ 9600 baud
  Serial.begin(9600);
}

void loop() {
  // Đọc giá trị ADC từ chân A0 (giá trị từ 0 đến 1023)
  int adcValue = analogRead(LM35_PIN);
  
  // Chuyển đổi giá trị ADC sang nhiệt độ Celsius
  // Công thức: (ADC * 5V / 1023) * 100 (vì 10mV = 1 độ C)
  float temperature = (adcValue * 500) / 1023.0;
  
  // Gửi giá trị nhiệt độ lên Serial Monitor
  Serial.print("Nhiet do hien tai: ");
  Serial.print(temperature);
  Serial.println(" C");
  
  // Đợi 1 giây trước khi đọc lần tiếp theo
  delay(1000);
}