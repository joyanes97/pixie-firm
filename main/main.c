
#include <stdio.h>
#include <string.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "firefly-demos.h"
#include "firefly-hollows.h"

#include "utils.h"

#include "panel-menu.h"
#include "panel-space.h"

#include "panel-info.h"

// This is populated with a signature after signing
//__attribute__((used)) const char code_signature[] =
//  "<FFX-SIGNATURE>xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx</FFX-SIGNATURE>";


// This is added from the CMakeLists.txt
#ifndef GIT_COMMIT
#define GIT_COMMIT ("unknown")
#endif


static int initPanel(void *arg) {
    return pushPanelMenu();
}

void app_main() {
    vTaskSetApplicationTaskTag( NULL, (void*)NULL);

    FFX_LOG("GIT Commit: %s", GIT_COMMIT);

    ffx_init(ffx_demo_backgroundPixies, initPanel, NULL);

    while (1) {
        ffx_dumpStats();
        delay(60000);
    }
}





