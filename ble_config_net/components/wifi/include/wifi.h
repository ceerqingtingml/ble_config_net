#ifndef _WIFI_H
#define _WIFI_H
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_system.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_log.h"
#include "lwip/err.h"
#include "lwip/sys.h"
#ifdef __cplusplus
extern "C" {
#endif
void wifi_init_sta(const char * ssid, const char * password);
#ifdef __cplusplus
}
#endif

#endif