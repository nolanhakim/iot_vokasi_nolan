#include <Arduino.h>
#include "DHT.h"

#define DHTPIN 27     
#define DHTTYPE DHT22   

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  Serial.println("DHT22 Sensor Test");
  dht.begin();
}

void loop() {
  delay(2000); // Delay 2 detik

  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {
    Serial.println("Gagal membaca sensor DHT!");
    return;
  }

  Serial.print("Kelembaban: ");
  Serial.print(h);
  Serial.print("%  Suhu: ");
  Serial.print(t);
  Serial.println("°C");
}
