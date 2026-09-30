void seg7display(const uint8_t pattern[7]) {
  for (int i = 0; i < NUM_SEG7; i++) {
    digitalWrite(SEG7_PINS[i], pattern[i]);
  }
}