const int RED = 2;
const int YELLOW = 3;
const int GREEN = 4;

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop() {
  // Red
  digitalWrite(RED, HIGH);
  delay(5000);
  digitalWrite(RED, LOW);

  // Yellow
  digitalWrite(YELLOW, HIGH);
  delay(2000);
  digitalWrite(YELLOW, LOW);

  // Green
  digitalWrite(GREEN, HIGH);
  delay(5000);
  digitalWrite(GREEN, LOW);

  // Yellow before Red again
  digitalWrite(YELLOW, HIGH);
  delay(2000);
  digitalWrite(YELLOW, LOW);
}
