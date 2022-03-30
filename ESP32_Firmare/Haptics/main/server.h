
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_log.h"
#include "nvs_flash.h"

#include "lwip/err.h"
#include "lwip/sys.h"

#include "esp_err.h"
#include <sys/param.h>
#include "nvs_flash.h"
#include "esp_netif.h"
#include <esp_http_server.h>




/* WiFi configuration     */
#define EXAMPLE_ESP_WIFI_SSID      "ESP32_Wifi"
#define EXAMPLE_ESP_WIFI_PASS      "Password"
#define EXAMPLE_ESP_WIFI_CHANNEL   CONFIG_ESP_WIFI_CHANNEL
#define EXAMPLE_MAX_STA_CONN       CONFIG_ESP_MAX_STA_CONN
/*
#define EXAMPLE_ESP_WIFI_SSID      CONFIG_ESP_WIFI_SSID
#define EXAMPLE_ESP_WIFI_PASS      CONFIG_ESP_WIFI_PASSWORD
#define EXAMPLE_ESP_WIFI_CHANNEL   CONFIG_ESP_WIFI_CHANNEL
#define EXAMPLE_MAX_STA_CONN       CONFIG_ESP_MAX_STA_CONN
*/

extern const httpd_uri_t leftoff;
extern const httpd_uri_t lefton;
extern const httpd_uri_t rightoff;
extern const httpd_uri_t righton;
extern const httpd_uri_t root;

/******************  WEBSEVER CODE BEGINS ***********************/

esp_err_t rightOFF_handler(httpd_req_t *req);

esp_err_t rightON_handler(httpd_req_t *req);

esp_err_t leftOFF_handler(httpd_req_t *req);

esp_err_t leftON_handler(httpd_req_t *req);

esp_err_t Root_Handler(httpd_req_t *req);


esp_err_t http_404_error_handler(httpd_req_t *req, httpd_err_code_t err);

httpd_handle_t start_webserver(void);

void stop_webserver(httpd_handle_t server);

void disconnect_handler(void* arg, esp_event_base_t event_base,
                               int32_t event_id, void* event_data);

void connect_handler(void* arg, esp_event_base_t event_base,
                            int32_t event_id, void* event_data);


void wifi_event_handler(void* arg, esp_event_base_t event_base,
                                    int32_t event_id, void* event_data);

void wifi_init_softap(void);


