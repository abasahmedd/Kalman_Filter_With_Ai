SimpleKalman kf(0.0005, 0.002, 1, 0.5);  // Q, R, P0, X0 

void loop() {
  int packetSize = LoRa.parsePacket();

  if (packetSize) {

    String incoming = "";

    while (LoRa.available()) incoming += (char)LoRa.read();
    

    float rawVal     = incoming.toFloat();        
    float kalmanVal  = kf.update(rawVal);        
    int   rssi       = LoRa.packetRssi();

    Serial.printf("RAW=%.2f | KAL=%.2f | RSSI:%d dBm\n",
                  rawVal, kalmanVal, rssi);
