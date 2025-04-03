extern "C" uint8_t temprature_sens_read();

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.println("Temperature: " + String((temprature_sens_read() - 32) / 1.8) + " C");
  delay(5000);
}


