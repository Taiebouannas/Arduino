# Projet LED et Bouton Arduino

## Description
Ce projet permet de contrôler une LED à l’aide d’un bouton poussoir.  
Lorsque le bouton est pressé, la LED s’allume ; lorsqu’il est relâché, la LED s’éteint.

## Matériel requis
- Arduino Uno (ou compatible)
- 1 LED
- 1 bouton poussoir
- 1 résistance (~220 Ω pour la LED, optionnelle pour le bouton si INPUT_PULLUP n’est pas utilisé)
- Fils de connexion
- Breadboard

## Schéma de montage
- Connecter la LED à la broche **2** via une résistance, cathode au **GND**
- Connecter le bouton à la broche **8**
- La broche du bouton utilise le mode `INPUT_PULLUP`, donc aucun autre composant n’est nécessaire pour le pull-up

## Fichier
- `button.ino` – Code principal qui lit l’état du bouton et contrôle la LED

## Fonctionnement
1. La LED reste éteinte tant que le bouton n’est pas pressé
2. Lorsqu’on appuie sur le bouton, la LED s’allume
3. Lorsque le bouton est relâché, la LED s’éteint
4. Le cycle se répète indéfiniment

## Auteur
Ouannas Taieb

## Licence
Licence MIT
