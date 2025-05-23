#include <Arduino.h>
#include <SPI.h>
#include <LoRa.h>
#include "processpacket.h"
const int PIN_CS   = 18;
const int PIN_RST  = 14;
const int PIN_DIO0 = 26;
#ifdef ROLE_RECEIVER
void setup() {
  Serial.begin(115200);
  LoRa.setPins(PIN_CS, PIN_RST, PIN_DIO0);

  if (!LoRa.begin(868E6)) {
    Serial.println("LoRa init failed"); while (true);
  }
  Serial.println("LoRa Receiver ready");
}
void loop() {
  int packetSize = LoRa.parsePacket();

  if (packetSize) {

    String s = "";
    while (LoRa.available()) s += (char)LoRa.read();
    float raw = s.toFloat();   
    String processed = processPacket(s);
    Serial.printf("RAW=%.2f | FLT=%s\n", raw, processed.c_str());
  }
}
#endif
