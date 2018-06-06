/*
 * app_Display.cpp
 *
 *  Created on: 30/05/2018
 *      Author: uidj2522
 */
#include <Arduino.h>
#include "app_Display.h"

#include <UTFT.h>
#include <URTouch.h>
#include <UTFT_Buttons.h>

#include "app_HwSw.h"
#include "../app_Temperature/app_Temperature.h"

// Declare which fonts we will be using
extern uint8_t SmallFont[];
extern uint8_t BigFont[];
extern uint8_t Dingbats1_XL[];

// Set up UTFT...
// Set the pins to the correct ones for your development board
// -----------------------------------------------------------
// Standard Arduino 2009/Uno/Leonardo shield   : <display model>,19,18,17,16
// Standard Arduino Mega/Due shield            : <display model>,38,39,40,41
// CTE TFT LCD/SD Shield for Arduino Due       : <display model>,25,26,27,28
// Standard chipKit Uno32/uC32                 : <display model>,34,35,36,37
// Standard chipKit Max32                      : <display model>,82,83,84,85
// AquaLEDSource All in One Super Screw Shield : <display model>,82,83,84,85
// CC3200 LaunchPad (pins used in the examples): <display model>,15,18,11,32
//
// Remember to change the model parameter to suit your display module!
UTFT          myGLCD(CTE50,38,39,40,41);

// Set up URTouch...
// Set the pins to the correct ones for your development board
// -----------------------------------------------------------
// Standard Arduino 2009/Uno/Leonardo shield   : 15,10,14,9,8
// Standard Arduino Mega/Due shield            : 6,5,4,3,2
// CTE TFT LCD/SD Shield for Arduino Due       : 6,5,4,3,2
// Standard chipKit Uno32/uC32                 : 20,21,22,23,24
// Standard chipKit Max32                      : 62,63,64,65,66
// AquaLEDSource All in One Super Screw Shield : 62,63,64,65,66
// CC3200 LaunchPad (pins used in the examples): 31,13,19,28,17
//
URTouch        myTouch(6,5,4,3,2);

// Finally we set up UTFT_Buttons :)
UTFT_Buttons  myButtons(&myGLCD, &myTouch);

int ButtonON, ButtonOFF, pressed_button;

/*************************************************
 * Name: app_DisplayInit
 * Description: Init display
 * Parameters: None
 * Return: None
 *************************************************/
void app_DisplayInit(void)
{
	myGLCD.InitLCD();
	myGLCD.clrScr();
	myGLCD.setFont(BigFont);
	myGLCD.print("OFF", 110, 300);

	myTouch.InitTouch();
	myTouch.setPrecision(PREC_MEDIUM);

	myButtons.setTextFont(BigFont);
	myButtons.setSymbolFont(Dingbats1_XL);

	ButtonON = myButtons.addButton( 10,  20, 300,  60, "ON");
	ButtonOFF = myButtons.addButton( 10,  100, 300,  60, "OFF");
	myButtons.drawButtons();
}

/*************************************************
 * Name: app_DisplayButtonMngr
 * Description: Check buttons
 * Parameters: None
 * Return: None
 *************************************************/
void app_DisplayButtonMngr(void)
{
	if (myTouch.dataAvailable() == true)
	{
		pressed_button = myButtons.checkButtons();

		//Check if Button On was pressed
		if (pressed_button==ButtonON)
		{
			//Button ON Actions
			digitalWrite(MACRO_HSSW_PIN_CONTACTOR,HIGH);//ON
			myGLCD.print("ON ", 110, 300);
		}
		else
		{
			//Do Nothing
		}

		//Check if Button Off was pressed
		if (pressed_button==ButtonOFF)
		{
			//Button OFF Actions
			digitalWrite(MACRO_HSSW_PIN_CONTACTOR,LOW);//OFF
			myGLCD.print("OFF", 110, 300);
		}
		else
		{
			//Do Nothing
		}
	}
	else
	{
		//Do Nothing
	}
}

/*************************************************
 * Name: app_DisplayDataMngr
 * Description: Display Data
 * Parameters: None
 * Return: None
 *************************************************/
void app_DisplayDataMngr(void)
{
	//Show Temperature
	myGLCD.print("Temperature: ",500,50);
	myGLCD.printNumI(ruw_TemperatureMeasure,200,50);

	//Show Humidity
	myGLCD.print("Humidity: ",500,150);
	myGLCD.printNumI(ruw_TemperatureMeasure,200,150);
}
