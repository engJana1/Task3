#define PIR_PIN 16      
#define LED_PIN 17      

void setup() {
  Serial.begin(115200);      // بدء الاتصال التسلسلي
  pinMode(PIR_PIN, INPUT);   
  pinMode(LED_PIN, OUTPUT);  
}

void loop() {
  int motion = digitalRead(PIR_PIN); // قراءة حالة حساس PIR

  if (motion == HIGH) {
    digitalWrite(LED_PIN, HIGH);  // تشغيل الـ LED عند الكشف عن حركة
    Serial.println("حركة مكتشفة!");
  } else {
    digitalWrite(LED_PIN, LOW);   // إيقاف الـ LED إذا لم يتم الكشف عن حركة
    Serial.println("لا حركة.");
  }
  
  delay(500); // تأخير قبل القراءة التالية
}
