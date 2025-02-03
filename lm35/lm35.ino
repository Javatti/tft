int sensorPin = A0; // پین آنالوگ متصل به سنسور LM35
float temperature;

void setup() {
  Serial.begin(9600); // راه اندازی ارتباط سریال
}

void loop() {
  int sensorValue = analogRead(sensorPin); // خواندن مقدار آنالوگ از سنسور
  temperature = (sensorValue * 5.0 / 1024.0) * 100.0; // تبدیل مقدار آنالوگ به دما در سانتی‌گراد
  Serial.print("Temperature: "); 
  Serial.print(temperature); 
  Serial.println(" °C"); 
  delay(1000); // تاخیر یک ثانیه‌ای بین خواندن‌ها
}
