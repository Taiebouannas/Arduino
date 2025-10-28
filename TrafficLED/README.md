# Projet Feu de Circulation Arduino

## Description
Ce projet Arduino simule un feu de circulation (rouge, jaune, vert) à l’aide de LEDs.  
Chaque LED s’allume pendant une durée spécifique, reproduisant le fonctionnement d’un vrai feu de signalisation.

## Matériel requis
- Arduino Uno (ou compatible)
- 1 LED rouge
- 1 LED jaune
- 1 LED verte
- 3 résistances (~220 Ω)
- Fils de connexion
- Breadboard

| Composant | Pin Arduino |
|-----------|------------|
| LED Rouge | 2          |
| LED Jaune | 3          |
| LED Verte | 4          |

> **Remarque :** utilisez des résistances pour protéger les LEDs.

## Fichier
- `trafficLED.ino` – Code principal qui contrôle le feu de circulation

## Fonctionnement
1. La LED rouge s’allume pendant 5 secondes
2. La LED jaune s’allume pendant 2 secondes
3. La LED verte s’allume pendant 5 secondes
4. La LED jaune s’allume à nouveau pendant 2 secondes avant de revenir au rouge  
5. Le cycle se répète indéfiniment

## Auteur
Ouannas Taieb

## Licence
Licence MIT
