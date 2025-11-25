const float V_REF = 5.0;
const float READ_BITS = 10.0;
const float ADC_STEPS = (1 << int(READ_BITS)) - 1;

#define POT_PIN A1
#define LED_PIN 6

void setup() {
  pinMode(LED_PIN, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // analogRead values are 10 bits (0 to 1023)
  int input_val = analogRead(POT_PIN);

  float voltage = (input_val / ADC_STEPS) * V_REF;
  Serial.print("Input value: ");
  Serial.print(voltage);
  Serial.print(" V");

  // analogWrite values are 8 bits (0 to 255)
  int output_val = input_val >> 2;
  // Alternatively use the `map()` function:
  // output_val = map(input_val, 0, 1023, 0, 255);
  Serial.print("; Output value: ");
  Serial.println(output_val);

  analogWrite(LED_PIN, output_val);
}
