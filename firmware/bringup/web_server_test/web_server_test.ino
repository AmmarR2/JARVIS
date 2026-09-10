#include <WiFi.h>
#include <WebServer.h>

// Fill these in locally in Arduino IDE. Do not commit real credentials.
const char* ssid = "";
const char* password = "";

WebServer server(80);

void handleRoot() {
  server.send(200, "text/plain", "JARVIS ONLINE");
}

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println();
  Serial.println("=== JARVIS Network Test ===");
  Serial.print("Connecting to Wi-Fi: ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("JARVIS CONNECTED TO WI-FI");
  Serial.print("ESP32 IP address: ");
  Serial.println(WiFi.localIP());

  server.on("/", handleRoot);
  server.begin();

  Serial.println("JARVIS web server started");
}

void loop() {
  server.handleClient();
}
