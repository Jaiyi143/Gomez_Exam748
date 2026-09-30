/*
========================================================
Exam 748
========================================================

Engineer: 
  Sergie D. Gomez

Date: 
  30 September 2026

*/
//num
const uint8_t SEG7_PINS[] = {32, 33, 25, 26, 27, 14, 12};
const uint8_t NUM_SEG7 = sizeof(SEG7_PINS) / sizeof(SEG7_PINS[0]);
const uint8_t EN = 19;
//variable
const uint8_t NUM_4[7] = {0,1,1,0,0,1,1};
const uint8_t NUM_8[7] = {1,1,1,1,1,1,1};
const uint8_t NUM_7[7] = {1,1,1,0,0,0,0};
const uint8_t NUM_G[7] = {0,0,0,0,0,0,1};

#include "seg7display.h"

void setup() {
  for (int i = 0; i < NUM_SEG7; i++) {
    pinMode(EN, INPUT);
    pinMode(SEG7_PINS[i], OUTPUT);
    digitalWrite(SEG7_PINS[i], 0);
    
  }
}


void loop() {
  bool ENA = (digitalRead(EN) == LOW);

  if (ENA) {
    seg7display(NUM_7);
    delay(1000);
    seg7display(NUM_4);
    delay(1000);
    seg7display(NUM_8);
    delay(1000);
  } else {
    seg7display(NUM_G);
    delay(1000);
  }
}


