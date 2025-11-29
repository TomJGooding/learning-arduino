#define BTN_PIN 2
#define LED_PIN 9

#define BTN_UP HIGH
#define BTN_DOWN LOW

int last_btn_state = BTN_UP;
int btn_state;

int led_state = LOW;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BTN_PIN, INPUT);
}

void loop() {
  btn_state = digitalRead(BTN_PIN);

  // Toggle the LED only when the button is released
  if (last_btn_state == BTN_DOWN && btn_state == BTN_UP) {
    led_state = !led_state;
    digitalWrite(LED_PIN, led_state);
  }

  last_btn_state = btn_state;

  // Short delay to avoid button bouncing
  delay(50);
}
