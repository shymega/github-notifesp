#include <stdio.h>
#include "Logging.hpp"

#define TAG "app_main"

// Enabling C++ compile
extern "C"
{
    void app_main();
}

void app_main(void)
{
    ESP_LOGI(TAG, "Booting up and initializing application...");
}
