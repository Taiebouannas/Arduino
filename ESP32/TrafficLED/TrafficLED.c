#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

// Définition des pins des LEDs
#define RED_LED     26
#define YELLOW_LED  27
#define GREEN_LED   14

// Durées en millisecondes
#define RED_DURATION     5000
#define GREEN_DURATION   5000
#define YELLOW_DURATION  2000

void setup_led(gpio_num_t pin) {
    gpio_reset_pin(pin);                 // Réinitialise le pin
    gpio_set_direction(pin, GPIO_MODE_OUTPUT); // Configure comme sortie
}

void set_leds(int red, int yellow, int green) {
    gpio_set_level(RED_LED, red);
    gpio_set_level(YELLOW_LED, yellow);
    gpio_set_level(GREEN_LED, green);
}

void app_main(void) {
    // Initialisation des LEDs
    setup_led(RED_LED);
    setup_led(YELLOW_LED);
    setup_led(GREEN_LED);

    while (1) {
        // Rouge
        set_leds(1, 0, 0);
        vTaskDelay(pdMS_TO_TICKS(RED_DURATION));

        // Vert
        set_leds(0, 0, 1);
        vTaskDelay(pdMS_TO_TICKS(GREEN_DURATION));

        // Jaune
        set_leds(0, 1, 0);
        vTaskDelay(pdMS_TO_TICKS(YELLOW_DURATION));
    }
}
