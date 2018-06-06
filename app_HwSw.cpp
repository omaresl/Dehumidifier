/*
 * app_HwSw.c
 *
 *  Created on: 30/05/2018
 *      Author: uidj2522
 */

#include <Arduino.h>
#include "app_HwSw.h"

/*************************************************
 * Name: app_HwSw_PinInit
 * Description: Function that init the pins
 * Parameters: None
 * Return: None
 *************************************************/
void app_HwSw_PinInit(void)
{
	//Set Built In Led
	pinMode(MACRO_HSSW_PIN_CONTACTOR,OUTPUT);
	digitalWrite(MACRO_HSSW_PIN_CONTACTOR,LOW);
}
