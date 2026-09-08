#ifndef __APP_CONTROLLER_H
#define __APP_CONTROLLER_H

#include "headfile.h"

// System Initialization and Main Loop Functions
void App_Display_Update(void);
void App_Key_Scan(void);
void App_Light_Control(int led_id, int state);

#endif 
