#define LED1 2
#define LED2 3
#define LED3 4
#define LED4 5

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (uint8_t i = 0; i < 16; i++) {
    digitalWrite(LED1, (i & 0b1000) ? HIGH : LOW);
    digitalWrite(LED2, (i & 0b0100) ? HIGH : LOW);
    digitalWrite(LED3, (i & 0b0010) ? HIGH : LOW);
    digitalWrite(LED4, (i & 0b0001) ? HIGH : LOW);

    delay(1000);
  }
}
