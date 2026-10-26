#include <Arduino.h>
void blink();
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
  blink();
}
void blink() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(2000);
}
