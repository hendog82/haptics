#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "esp_event.h"

#include "gpio_if.h"


static const char *TAG = "GPIO";

void motor_init(){
	gpio_config_t io_conf;
	//disable interrupt
	io_conf.intr_type = GPIO_INTR_DISABLE;
	//set as output mode
	io_conf.mode = GPIO_MODE_OUTPUT;
	//bit mask both GPIO's
	io_conf.pin_bit_mask = BOTH_LEGS;
	//Enable pull-down mode
	io_conf.pull_down_en =1;
	//disable pull-up mode
	io_conf.pull_up_en = 0;
	//configure GPIO with the given settings
	gpio_config(&io_conf);

	gpio_set_level(RIGHT_LEG, 0);
	gpio_set_level(LEFT_LEG, 0);


}

void Left_Motor_On(){
	//turn on selected GPIO
	gpio_set_level(LEFT_LEG, 1);

    ESP_LOGE(TAG, "Left motor ON!");
	return;
}

void Right_Motor_On(){
	//turn on selected GPIO
	gpio_set_level(RIGHT_LEG, 1);

    ESP_LOGE(TAG, "Right  motor ON!");
	return;
}

void Left_Motor_Off(){
	//turn off selected motor
	gpio_set_level(LEFT_LEG, 0);
    ESP_LOGE(TAG, "Left motor OFF!");
	return;
}

void Right_Motor_Off(){
	//turn off selected motor
	gpio_set_level(RIGHT_LEG, 0);
    ESP_LOGE(TAG, "Right motor OFF!");
	return;
}
