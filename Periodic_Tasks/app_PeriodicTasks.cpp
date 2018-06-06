 /*
 * app_PeriodicTasks.c
 *
 *  Created on: 30/05/2018
 *      Author: uidj2522
 */

/* Interfaces */
#include <Arduino.h>
#include <Arduino_FreeRTOS.h>
#include "../stdtypedef.h"
#include "app_PeriodicTasks.h"
#include "../app_HwSw.h"
#include "app_Display/app_Display.h"
#include "app_Temperature/app_Temperature.h"

/* Constants */

/* Variables */

/*************************************************
 * Name: app_PeriodicTasks_100ms
 * Description: Function called every 100ms
 * Parameters: None
 * Return: None
 *************************************************/
void app_PeriodicTasks_100ms(void *pvParameters)
{
	(void) pvParameters;

	for(;;)// A Task shall never return or exit.
	{
		vTaskDelay( 50 / portTICK_PERIOD_MS ); // wait for 100ms

		app_DisplayDataMngr();
	}
}

/*************************************************
 * Name: app_PeriodicTasks_10ms
 * Description: Function called every 10ms
 * Parameters: None
 * Return: None
 *************************************************/
void app_PeriodicTasks_10ms(void *pvParameters)
{
	(void) pvParameters;

	for(;;)// A Task shall never return or exit.
	{
		vTaskDelay( 100 / portTICK_PERIOD_MS ); // wait for 10ms

		app_TemperatureMngr();
	}
}
