#include <Arduino.h>

int a;

void setup() {
  Serial.begin(9600);

  Serial.println("Inserisci un numero:");

  while (Serial.available() == 0) {
  }

  a = Serial.parseInt();

  if (a % 2 == 0) {
    Serial.println( a + " is is even");
  } else {
    Serial.println( a + " is odd");
  }
}

void loop() {
}