# Feu Tricolore ESP32 avec FreeRTOS

Ce projet implémente un **feu tricolore** utilisant un ESP32 et FreeRTOS. Trois LEDs représentent le feu : rouge, jaune et vert. Chaque LED s'allume selon une séquence classique de feu de circulation.

## Matériel requis

- ESP32
- 3 LEDs (rouge, jaune, vert)
- 3 résistances (~220Ω)
- Breadboard et câbles de connexion

## Connexions

| LED     | GPIO ESP32 |
|---------|------------|
| Rouge   | 26         |
| Jaune   | 27         |
| Vert    | 14         |

> Assurez-vous d'utiliser des résistances pour limiter le courant aux LEDs.

## Compilation et flash

1. Installer [ESP-IDF](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/) si ce n'est pas déjà fait.
2. Cloner le projet :

```bash
git clone https://github.com/votre-utilisateur/feu-tricolore-esp32.git
cd feu-tricolore-esp32
