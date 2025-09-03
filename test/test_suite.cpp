// #include <gtest/gtest.h>
#include "somecodes.h"
#include <Arduino.h>
#include "unity.h"


void test_function_should_doBlahAndBlah(void) {
  // test stuff
  Serial.println("whatever you like");
}

void test_function_should_doAlsoDoBlah(void) {
  // more test stuff
  TEST_ASSERT_EQUAL_INT32(3, add(1,2));

  // uncomment to trigger test failure
  //TEST_FAIL_MESSAGE("kaboom!");
}



int runUnityTests(void) {
  UNITY_BEGIN();
  RUN_TEST(test_function_should_doBlahAndBlah);
  RUN_TEST(test_function_should_doAlsoDoBlah);
  return UNITY_END();
}

void setup() {
    delay(2000);
    Serial.begin(9600);
    runUnityTests();
}

void loop() {
}
