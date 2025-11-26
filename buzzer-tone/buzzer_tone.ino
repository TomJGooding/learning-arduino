/*
 * WARNING: Try experimenting with these values at your own risk!
 * The buzzer sound is annoying enough as it is, so probably wise to
 * avoid upsetting your partner/pets/neighbors with a piercing *BLEEP*!
 */
const float MIN_TONE_US = 2000.0;
const float MAX_TONE_US = 4000.0;

#define BUZZ_PIN 6
#define POT_PIN A3

void setup() {
  pinMode(BUZZ_PIN, OUTPUT);
}

void loop() {
  int pot_val = analogRead(POT_PIN);

  // m = (y2 - y1) / (x2 - x1)
  float m = (MAX_TONE_US - MIN_TONE_US) / 0x3FF;
  // y - y1 = m(x - x1)
  // y = m(x - x1) + y1
  int tone_val = m * pot_val + MIN_TONE_US;

  // Avoid all this math and just use the `map()` function!
  // tone_val = map(pot_val, 0, 0x3FF, MIN_TONE_US, MAX_TONE_US);

  digitalWrite(BUZZ_PIN, HIGH);
  delayMicroseconds(tone_val);
  digitalWrite(BUZZ_PIN, LOW);
  delayMicroseconds(tone_val);
}
