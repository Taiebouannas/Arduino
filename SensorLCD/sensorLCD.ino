#include <Wire.h>
#include <LiquidCrystal_I2C.h>

const int sensor = 7;
const int alarm = 8;
long duration;
float distance;
const float danger = 100;

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
    Serial.begin(9600);
  
  	pinMode(alarm, OUTPUT);

    lcd.init();
    lcd.clear();
    lcd.backlight();
}

float detDistance(){
  
      // Sensor trigger
    pinMode(sensor, OUTPUT);
    digitalWrite(sensor, LOW);
    delayMicroseconds(2);
    digitalWrite(sensor, HIGH);
    delayMicroseconds(10);
    digitalWrite(sensor, LOW);
  
    pinMode(sensor, INPUT);
    duration = pulseIn(sensor, HIGH);
    distance = duration * 0.034 / 2;
  
  	return distance;
}

void loop() {

	distance = detDistance();
    // Sensor read

    // Print distance to Serial
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    // Display distance on LCD
    lcd.setCursor(0, 0);
    lcd.print("Distance:");
    lcd.setCursor(10, 0);
    lcd.print(distance);
  
  	lcd.setCursor(0, 1);
  if (distance < danger){
    lcd.print("Warning");
  	digitalWrite(alarm, HIGH);
  }
  else {lcd.print("                ");
       digitalWrite(alarm, LOW);
       }

    delay(500);
}
