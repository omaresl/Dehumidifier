/*
 * app_Temperature.h
 *
 *  Created on: 30/05/2018
 *      Author: uidj2522
 */

#ifndef APP_TEMPERATURE_H_
#define APP_TEMPERATURE_H_

#include "stdtypedef.h"

//DHT Data pin
#define DHT_PIN 	7

extern T_UWORD ruw_TemperatureMeasure;

extern void app_TemperatureInit(void);
extern void app_TemperatureMngr(void);
extern T_UWORD app_TemperatureRead(void);
extern T_UWORD app_HumidityRead(void);

#endif /* APP_TEMPERATURE_H_ */
