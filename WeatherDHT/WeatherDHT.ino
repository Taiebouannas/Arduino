#include "DHT.h"
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define DHTPIN 2
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600);
  dht.begin();
  lcd.init();
  lcd.backlight();
}

void loop() {
  float temp = dht.readTemperature();
  float humidity = dht.readHumidity();

  if (isnan(temp) || isnan(humidity)) {
    Serial.println("Erreur lecture DHT22 !");
    lcd.setCursor(0,0);
    lcd.print("Erreur capteur ");
    lcd.setCursor(0,1);
    lcd.print("Retry...        ");
    delay(2000);
    return;
  }
  


  lcd.setCursor(0,0);
  lcd.print("Temp: "); lcd.print(temp,1); lcd.print("C  ");
  lcd.setCursor(0,1);
  lcd.print("Hum: "); lcd.print(humidity,1); lcd.print("%  ");

  delay(2000);
}
