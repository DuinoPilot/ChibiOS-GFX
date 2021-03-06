/*
    ChibiOS/GFX - Copyright (C) 2012
                 Joel Bodenmann aka Tectu <joel@unormal.org>

    This file is part of ChibiOS/GFX.

    ChibiOS/GFX is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    ChibiOS/GFX is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/**
 *	Make sure you have the following stuff enabled in your halconf.h:
 *
 *				#define GFX_USE_GDISP		TRUE
 *				#define GDISP_NEED_SCROLL	TRUE
 *				#define GDISP_NEED_CLIP		TRUE	(optional but recommended)
 */


#include "ch.h"
#include "hal.h"
#include "gdisp.h"
#include "gwin.h"

/* The handles for our two Windows */
GHandle GW1, GW2;

int main(void) {
    halInit();
    chSysInit();

    /* Initialize and clear the display */
    gdispInit();
    gdispClear(Lime);

    /* Create two windows */
    GW1 = gwinCreateWindow(NULL, 20, 10, 200, 150);
    GW2 = gwinCreateWindow(NULL, 50, 190, 150, 100);

    /* Set fore- and background colors for both windows */
    gwinSetColor(GW1, Black);
    gwinSetBgColor(GW1, White);
    gwinSetColor(GW2, White);
    gwinSetBgColor(GW2, Blue);

    /* Clear both windows - to set background color */
    gwinClear(GW1);
    gwinClear(GW2);

    /*  
     * Draw two filled circles at the same coordinate
     * of each window to demonstrate the relative coordinates
     * of windows
     */
    gwinFillCircle(GW1, 20, 20, 15);
    gwinFillCircle(GW2, 20, 20, 15);

    while(TRUE) {
        chThdSleepMilliseconds(500);
    }   
}

