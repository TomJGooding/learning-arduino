#define RED_LED 9
#define GREEN_LED 10
#define BLUE_LED 11

String color;

void setup() {
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  Serial.print("Enter a color for the LED: ");

  while (Serial.available() == 0) {
    // waiting for input...
  }
  color = Serial.readString();

  Serial.println(color);

  if (color == "red") {
    analogWrite(RED_LED, 255);
    analogWrite(GREEN_LED, 0);
    analogWrite(BLUE_LED, 0);
  } else if (color == "green") {
    analogWrite(RED_LED, 0);
    analogWrite(GREEN_LED, 255);
    analogWrite(BLUE_LED, 0);
  } else if (color == "blue") {
    analogWrite(RED_LED, 0);
    analogWrite(GREEN_LED, 0);
    analogWrite(BLUE_LED, 255);
    
  } else if (color == "yellow") {
    analogWrite(RED_LED, 255);
    analogWrite(GREEN_LED, 255);
    analogWrite(BLUE_LED, 0);
  } else if (color == "cyan") {
    analogWrite(RED_LED, 0);
    analogWrite(GREEN_LED, 255);
    analogWrite(BLUE_LED, 255);
  } else if (color == "magenta") {
    analogWrite(RED_LED, 255);
    analogWrite(GREEN_LED, 0);
    analogWrite(BLUE_LED, 255);
  } else if (color == "white") {
    analogWrite(RED_LED, 255);
    analogWrite(GREEN_LED, 255);
    analogWrite(BLUE_LED, 255);

  } else if (color == "orange") {
    analogWrite(RED_LED, 255);
    analogWrite(GREEN_LED, 128);
    analogWrite(BLUE_LED, 0);
  } else if (color == "chartreuse") {
    analogWrite(RED_LED, 128);
    analogWrite(GREEN_LED, 255);
    analogWrite(BLUE_LED, 0);
  } else if (color == "springgreen") {
    analogWrite(RED_LED, 0);
    analogWrite(GREEN_LED, 255);
    analogWrite(BLUE_LED, 128);
  } else if (color == "azure") {
    analogWrite(RED_LED, 0);
    analogWrite(GREEN_LED, 128);
    analogWrite(BLUE_LED, 255);
  } else if (color == "violet") {
    analogWrite(RED_LED, 128);
    analogWrite(GREEN_LED, 0);
    analogWrite(BLUE_LED, 255);
  } else if (color == "rose") {
    analogWrite(RED_LED, 255);
    analogWrite(GREEN_LED, 0);
    analogWrite(BLUE_LED, 128);

  } else {
    Serial.println("Sorry, unknown color!");
    analogWrite(RED_LED, 0);
    analogWrite(GREEN_LED, 0);
    analogWrite(BLUE_LED, 0);
  }
}
