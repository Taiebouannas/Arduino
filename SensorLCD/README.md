# sensorLCD

Un projet Arduino simple qui mesure la distance avec un capteur ultrason et l'affiche sur un écran LCD.

## Matériel

- Carte Arduino (Uno, Nano, etc.)  
- Capteur ultrason (ex : HC-SR04)  
- Écran LCD I2C (16x2)  
- Fils de connexion (jumpers)  

## Description

Le projet lit la distance depuis le capteur ultrason et affiche la valeur en centimètres sur l'écran LCD. La distance est également affichée dans le Moniteur Série. L'écran LCD se met à jour toutes les 500 millisecondes pour afficher la dernière mesure.

## Connexions

- Capteur ultrason Trigger/Echo → Broche D7  
- LCD SDA → Broche A4  
- LCD SCL → Broche A5  
- LCD VCC → 5V  
- LCD GND → GND  

## Usage

1. Téléversez le fichier `sensorLCD.ino` sur votre Arduino.  
2. Ouvrez le Moniteur Série pour voir les mesures en cm.  
3. L'écran LCD affichera la distance mesurée en temps réel.  

## Remarques

- Vous pouvez ajuster le délai dans le code (`delay(500)`) pour mettre à jour l'affichage plus ou moins fréquemment.  
- Assurez-vous que l'adresse I2C de votre écran LCD correspond à celle définie dans le code (`0x27` par défaut).  
