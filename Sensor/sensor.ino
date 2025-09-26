const int sensor = 2;
long duration;
float distance;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Sensor trigger
  pinMode(sensor, OUTPUT);
  digitalWrite(sensor, LOW);
  delayMicroseconds(2);
  digitalWrite(sensor, HIGH);
  delayMicroseconds(10);
  digitalWrite(sensor, LOW);

  // Sensor read
  pinMode(sensor, INPUT);
  duration = pulseIn(sensor, HIGH);
  distance = duration * 0.034 / 2;

  // Print distance
Serial.println("Distance: " + String(distance) + " cm");


  delay(500);
}
