#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

#define RED_LED     26
#define YELLOW_LED  27
#define GREEN_LED   14

void app_main(void){

    gpio_reset_pin(RED_LED);
    gpio_reset_pin(YELLOW_LED);
    gpio_reset_pin(GREEN_LED);

    gpio_set_direction(RED_LED, GPIO_MODE_OUTPUT);
    gpio_set_direction(YELLOW_LED, GPIO_MODE_OUTPUT);
    gpio_set_direction(GREEN_LED, GPIO_MODE_OUTPUT);

    while(1){

        gpio_set_level(RED_LED, 1);
        gpio_set_level(YELLOW_LED, 0);
        gpio_set_level(GREEN_LED, 0);
        vTaskDelay(pdMS_TO_TICKS(5000));

      
        gpio_set_level(RED_LED, 0);
        gpio_set_level(YELLOW_LED, 0);
        gpio_set_level(GREEN_LED, 1);
        vTaskDelay(pdMS_TO_TICKS(5000));

      
        gpio_set_level(RED_LED, 0);
        gpio_set_level(YELLOW_LED, 1);
        gpio_set_level(GREEN_LED, 0);
        vTaskDelay(pdMS_TO_TICKS(2000));
    }

}
