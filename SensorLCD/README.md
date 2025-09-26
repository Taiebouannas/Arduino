# Capteur de Distance avec Alarme et LCD I2C

Ce projet Arduino mesure la distance à l'aide d'un capteur à ultrasons et affiche les résultats sur un écran LCD I2C. Si un objet s'approche trop près (distance inférieure à une valeur de danger définie), une alarme sonore est déclenchée et un avertissement s'affiche sur l'écran.

## Matériel nécessaire

- Arduino Uno (ou compatible)
- Capteur à ultrasons (HC-SR04 ou similaire)
- Écran LCD I2C 16x2
- Buzzer ou alarme sonore
- Résistances et câbles de connexion
- Breadboard

## Schéma de câblage

| Composant        | Pin Arduino      |
|-----------------|----------------|
| Capteur Trigger | Pin 7           |
| Capteur Echo    | Pin 7           |
| Buzzer / Alarme | Pin 8           |
| LCD SDA         | A4 (Arduino Uno)|
| LCD SCL         | A5 (Arduino Uno)|

> **Remarque :** L’adresse I2C de l’écran est configurée sur `0x27`. Vérifiez l’adresse de votre module avec un scanner I2C si nécessaire.

## Librairies utilisées

- [Wire.h](https://www.arduino.cc/en/Reference/Wire) — pour la communication I2C  
- [LiquidCrystal_I2C.h](https://github.com/johnrickman/LiquidCrystal_I2C) — pour contrôler l’écran LCD I2C

Ces librairies doivent être installées via le gestionnaire de bibliothèques Arduino.

## Fonctionnement du code

1. Initialise la communication série et l’écran LCD.
2. Configure les pins du capteur et de l’alarme.
3. Dans la boucle principale :
   - Mesure la distance avec le capteur à ultrasons.
   - Affiche la distance sur l’écran LCD.
   - Si la distance est inférieure au seuil de danger (`danger = 100 cm`) :
     - Affiche `Warning` sur l’écran.
     - Active le buzzer.
   - Sinon, l’écran et le buzzer sont désactivés.
4. Mise à jour toutes les 500 ms.

## Exemple de sortie série

[Voir le schéma PDF](sensorLCD.png)
