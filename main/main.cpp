#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <esp_log.h>
#include "example_lib.h"

static const char* TAG = "main";

static void example_task(void*) {
    ExampleLib lib;
    while (true) {
        int result = lib.add(3, 4);
        ESP_LOGI(TAG, "3 + 4 = %d", result);
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}

extern "C" void app_main() {
    ESP_LOGI(TAG, "ESP32-S3 starting");
    xTaskCreate(example_task, "example_task", 4096, nullptr, 5, nullptr);
}
