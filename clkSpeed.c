/*
 * clkSpeed.c
 *
 *  Created on: Oct 25, 2013
 *      Author: C15Jason.Mossing
 */
#include <msp430.h>
#include "clkSpeed.h"

void setspeed_1MHz(){
	DCOCTL = 0;
    BCSCTL1 = CALBC1_1MHZ;
    DCOCTL = CALDCO_1MHZ;
}

void setspeed_8MHz(){
	DCOCTL = 0;
    BCSCTL1 = CALBC1_8MHZ;
    DCOCTL = CALDCO_8MHZ;
}


void setspeed_12MHz(){
	DCOCTL = 0;
    BCSCTL1 = CALBC1_12MHZ;
    DCOCTL = CALDCO_12MHZ;
}


void setspeed_16MHz(){
	DCOCTL = 0;
    BCSCTL1 = CALBC1_16MHZ;
    DCOCTL = CALDCO_16MHZ;
}



