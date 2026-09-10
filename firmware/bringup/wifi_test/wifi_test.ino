// JARVIS ESP32-S3 Wi-Fi Bring-Up Test
// Milestone: Verify the ESP32-S3 can connect to Wi-Fi and report its IP address.
// IMPORTANT: Replace the placeholders below only on your local computer.
// Do not commit real Wi-Fi credentials to GitHub.

#include <WiFi.h>

const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println("JARVIS Wi-Fi test starting...");
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("JARVIS CONNECTED TO WI-FI");
  Serial.print("ESP32 IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
}
