#include <Arduino.h>

// Deklarasi pin untuk LED
int merah = 26;
int kuning = 27;
int hijau = 33;

void setup() {
    Serial.begin(115200); // Mulai komunikasi Serial
    
    // Atur semua pin LED sebagai OUTPUT
    pinMode(merah, OUTPUT);
    pinMode(kuning, OUTPUT);
    pinMode(hijau, OUTPUT);
}

void loop() {
    // 1. Nyalakan LED Merah (Stop)
    digitalWrite(merah, HIGH);
    digitalWrite(kuning, LOW);
    digitalWrite(hijau, LOW);
    Serial.println("Lampu Merah ON");
    delay(3000); // Tunggu 3 detik

    // 2. Nyalakan LED Kuning (Siap-Siap)
    digitalWrite(merah, LOW);
    digitalWrite(kuning, HIGH);
    digitalWrite(hijau, LOW);
    Serial.println("Lampu Kuning ON");
    delay(1000); // Tunggu 1 detik

    // 3. Nyalakan LED Hijau (Jalan)
    digitalWrite(merah, LOW);
    digitalWrite(kuning, LOW);
    digitalWrite(hijau, HIGH);
    Serial.println("Lampu Hijau ON");
    delay(3000); // Tunggu 3 detik
}