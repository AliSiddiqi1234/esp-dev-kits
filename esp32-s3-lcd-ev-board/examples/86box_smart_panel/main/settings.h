/*
 * SPDX-FileCopyrightText: 2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Unlicense OR CC0-1.0
 */

#pragma once

#include "app_sr.h"


#define EXAMPLE_ESP_WIFI_SSID      "esp-office-2.4G"
#define EXAMPLE_ESP_WIFI_PASS      "1qazxsw2"

typedef struct {
    bool need_hint;
    sr_language_t sr_lang;
    uint8_t volume;         /**< 0-100.*/
    uint8_t standby_time;   /**< 0-3.*/
    uint8_t brightness;     /**< 0-100.*/
    uint8_t light_onoff;    /**< true or false.*/
    uint8_t light_colour;   /**< 0-3.*/
    uint8_t light_pwm;      /**< 0-100.*/

    char ssid[32];      /**< SSID of target AP. */
    char password[64];  /**< Password of target AP. */
    uint8_t ssid_len;      /**< SSID of target AP. */
    uint8_t password_len;  /**< Password of target AP. */
} sys_param_t;

esp_err_t settings_read_parameter_from_nvs(void);
esp_err_t settings_write_parameter_to_nvs(void);
sys_param_t *settings_get_parameter(void);