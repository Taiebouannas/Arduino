# Station Météo Mini

## Description
Ce projet Arduino mesure la **température et l’humidité** à l’aide d’un capteur **DHT22** et affiche les valeurs sur un **écran LCD I2C 16x2**.  
Le projet est conçu pour être simple et fonctionnel, idéal pour débuter en systèmes embarqués et capteurs.

## Matériel requis
- Arduino Uno (ou compatible)  
- Capteur DHT22  
- Écran LCD I2C 16x2  
- Fils de connexion  
- Breadboard  

## Schéma de câblage
| Composant | Broches Arduino Uno |
|-----------|------------------|
| DHT22 VCC | 5 V             |
| DHT22 GND | GND             |
| DHT22 DATA| Pin 2           |
| LCD VCC   | 5 V             |
| LCD GND   | GND             |
| LCD SDA   | A4              |
| LCD SCL   | A5              |

> **Remarque :** Ajouter une résistance de pull-up (~4.7 kΩ) entre DATA et VCC du DHT22 si nécessaire.

## Fichier
- `weatherDHT.ino` – Code principal qui lit le DHT22 et affiche les valeurs sur le LCD  

## Fonctionnement
1. Le DHT22 mesure la **température et l’humidité** toutes les 2 secondes  
2. Les valeurs sont affichées sur le **LCD 16x2**  
3. Les valeurs sont également envoyées au **moniteur série** pour vérification  
4. Si le capteur renvoie une erreur, un message d’erreur s’affiche sur le LCD  

## Auteur
Ouannas Taieb

## Licence
Licence MIT

