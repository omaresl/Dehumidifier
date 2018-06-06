/* Includes and Interfaces */
#include "Arduino.h"
#include <Arduino_FreeRTOS.h>
#include "app_HwSw.h"
#include "Periodic_Tasks/app_PeriodicTasks.h"
#include "app_Display/app_Display.h"
#include "app_Temperature/app_Temperature.h"

/* Constants */

/* Variables */

//The setup function is called once at startup of the sketch
void setup()
{
	// Add your initialization code here
	/* Pin initialize */
	app_HwSw_PinInit();

	/* Temperature and Humidity */
	app_TemperatureInit();

	/* Display Init */
	app_DisplayInit();

	/* FreeRTOS init - Task Creation*/
	//10 ms Task Creation
	xTaskCreate(
			app_PeriodicTasks_10ms				//Function
			,(const portCHAR *)"10 ms Task"		//ID
			,128u								//Stack
			,NULL								//pvParameters
			,0									//Priority
			,NULL);								//pxCreatedTask

	//100 ms Task Creation
	xTaskCreate(
			app_PeriodicTasks_100ms				//Function
			,(const portCHAR *)"100 ms Task"	//ID
			,128u								//Stack
			,NULL								//pvParameters
			,0									//Priority
			,NULL);								//pxCreatedTask
	//5 s Task Creation
	xTaskCreate(
			app_PeriodicTasks_5s				//Function
			,(const portCHAR *)"5s Task"		//ID
			,128u								//Stack
			,NULL								//pvParameters
			,0									//Priority
			,NULL);								//pxCreatedTask
}

// The loop function is called in an endless loop
void loop()
{
	//Add your repeated code here
}
