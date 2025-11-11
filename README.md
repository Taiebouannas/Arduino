# Projet Personnel : Expérimentations Arduino & ESP32

Bienvenue dans mon dépôt GitHub dédié à mes expérimentations et projets personnels autour des microcontrôleurs **Arduino** et **ESP32**.  
Ce dépôt a pour objectif de centraliser mes tests, prototypes et réalisations électroniques afin d’explorer différentes fonctionnalités matérielles et logicielles.

---

## Structure du dépôt

Le dépôt est organisé en plusieurs branches et dossiers thématiques :

- [**Arduino**](./Arduino/) – Contient l’ensemble de mes projets et expérimentations réalisés avec les cartes Arduino.  
  Chaque projet possède son propre dossier et un fichier `README.md` détaillant le montage et le code associé.  

- [**ESP32**](./ESP32/) – Regroupe les projets développés sur microcontrôleur ESP32, notamment ceux liés à la connectivité Wi-Fi, Bluetooth, ou à l’Internet des objets (IoT).  

- [**Programs-C**](./Programs-C/) – Contient des programmes simples en langage C, destinés à l’apprentissage des bases de la programmation procédurale et des structures de données.


---

## Objectifs du projet

- Apprentissage et approfondissement de la programmation embarquée.  
- Découverte de différents capteurs et modules électroniques.  
- Conception de petits systèmes automatisés et connectés.  
- Documentation et partage des expériences pour réutilisation future.

---

## Exemple de projets

### Dans la branche Arduino :
- **TrafficLED** – Simulation d’un feu de circulation avec trois LEDs (Rouge, Jaune, Vert).  
- **SensorLCD** – Mesure de distance avec capteur **HC-SR04** et affichage sur écran **LCD I2C**.  
- **WeatherDHT** – Mesure de température et d’humidité avec capteur **DHT22**.

### Dans la branche ESP32 :
- **TrafficLED** – Simulation d’un feu de circulation avec trois LEDs (Rouge, Jaune, Vert) en utilisant FreeRTOS pour gérer les temporisations et le contrôle des sorties.

---

## Comment utiliser ce dépôt

1. Clonez ou téléchargez le dépôt sur votre machine.  
2. Naviguez vers la branche ou le dossier correspondant à la plateforme qui vous intéresse (`Arduino` ou `ESP32`).  
3. Consultez le fichier `README.md` du projet choisi pour obtenir les instructions de montage et d’utilisation.  
4. Ouvrez le fichier `.ino` (ou `.cpp` pour ESP32) dans l’IDE approprié et téléversez-le (Upload) sur la carte.
