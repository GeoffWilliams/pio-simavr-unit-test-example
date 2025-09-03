#include <Arduino.h>
#include "somecodes.h"

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(add(1, 2));
  delay(100);
}

