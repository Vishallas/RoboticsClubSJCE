#include <SoftwareSerial.h>

SoftwareSerial Bluetooth(7,8);

void setup() {
  Serial.begin(9600);
  Bluetooth.begin(38400);
}

void loop() {
  while (Serial.available()) {
      delay(1);
      Bluetooth.write(Serial.read());
  }
  while (Bluetooth.available()) {
       Serial.write(Bluetooth.read());
  }
}
