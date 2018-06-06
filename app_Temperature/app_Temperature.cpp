/*
 * app_Temperature.cpp
 *
 *  Created on: 30/05/2018
 *      Author: uidj2522
 */

/* Interfaces */
#include <Arduino.h>
#include "stdtypedef.h"
#include "DHT.h"
#include "app_Temperature.h"

//Instance of DHT
DHT myDHT(DHT_PIN,DHT11);

T_UWORD ruw_TemperatureMeasure;
T_UWORD ruw_HumidityMeasure;

/*************************************************
 * Name: app_TemperatureInit
 * Description: Temperature Init
 * Parameters: None
 * Return: None
 *************************************************/
void app_TemperatureInit(void)
{
	//Clean Variables
	ruw_TemperatureMeasure = 0;
	ruw_HumidityMeasure = 0;

	// Start up the library
	 myDHT.begin();
}

/*************************************************
 * Name: app_TemperatureMngr
 * Description: Temperature Manager
 * Parameters: None
 * Return: None
 *************************************************/
void app_TemperatureMngr(void)
{
	ruw_TemperatureMeasure = myDHT.readTemperature(); //Read temperature in Celsius
	ruw_HumidityMeasure = myDHT.readHumidity(); //Read humidity relative
}

/*************************************************
 * Name: app_TemperatureRead
 * Description: Temperature Read
 * Parameters: None
 * Return: None
 *************************************************/
T_UWORD app_TemperatureRead(void)
{
	return ruw_TemperatureMeasure;
}

/*************************************************
 * Name: app_HumidityRead
 * Description: Humidity Read
 * Parameters: None
 * Return: None
 *************************************************/
T_UWORD app_HumidityRead(void)
{
	return ruw_HumidityMeasure;
}
