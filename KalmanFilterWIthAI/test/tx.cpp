#include <Arduino.h>
#include <SPI.h>
#include <LoRa.h>
#include "processpacket.h"


const int PIN_CS   = 18;
const int PIN_RST  = 14;
const int PIN_DIO0 = 26;

uint32_t counter = 0;

void setup() {
  Serial.begin(115200);
  LoRa.setPins(PIN_CS, PIN_RST, PIN_DIO0);

  if (!LoRa.begin(868E6)) {
    Serial.println("LoRa init failed"); while (true);
  }
  Serial.println("LoRa Sender ready");
}

void loop() {
  float temperature = 0.5;
  float noisevalue = temperature + 0.1 * (float)random(-100, 100) / 100.0;

  LoRa.beginPacket();
  LoRa.print(noisevalue, 2);
  LoRa.endPacket();

  Serial.printf("sent raw: %f\n", noisevalue);
  delay(500);
}
