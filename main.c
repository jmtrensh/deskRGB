/*
 * Project: Desk LED
 * Description: A MSP432 project that controls LEDs for my desk.
 * Author: Joe Trenshaw <jmtrenshaw@gmail.com>
 *
 * Date Created: 04-04-2020
 *
 * Last Modified: 04-04-2020
 * Changes:
 */

#include "msp.h"


/**
 * main.c
 */
void main(void)
{
	WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;		// stop watchdog timer
}



void ledInit(void)
{

}
