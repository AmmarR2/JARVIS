// JARVIS ESP32-S3 Hardware Bring-Up Test
// Milestone: Verify firmware upload and USB serial communication.

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("JARVIS ONLINE");
}

void loop() {
  Serial.println("JARVIS running...");
  delay(1000);
}
