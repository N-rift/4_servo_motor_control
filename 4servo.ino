#include <Servo.h>

Servo servo;

void setup() {
  servo.attach(0);
}

void loop() {

  unsigned long startTime = millis();

  while (millis() - startTime < 2000) {

    for (int pos = 0; pos <= 180; pos += 10) {
      servo.write(pos);
      delay(20);
    }

    for (int pos = 180; pos >= 0; pos -= 10) {
      servo.write(pos);
      delay(20);
    }
  }

  servo.write(90);

  while (true) {
  }
}