/*
    ChibiOS/RT - Copyright (C) 2012
                 Joel Bodenmann aka Tectu <joel@unormal.org>

    This file is part of ChibiOS-LCD-Driver.

    ChibiOS-LCD-Driver is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    ChibiOS-LCD-Driver is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/**
 * @file    gdispTestStub/gdisp_lld.c
 * @brief   GDISP Graphics Driver subsystem low level driver source (stub).
 *
 * @addtogroup GDISP
 * @{
 */

#include "ch.h"
#include "hal.h"
#include "touchpad.h"

#if HAL_USE_TOUCHPAD || defined(__DOXYGEN__)

/*===========================================================================*/
/* Driver local definitions.                                                 */
/*===========================================================================*/

#ifdef UNUSED
#elif defined(__GNUC__)
# define UNUSED(x) UNUSED_ ## x __attribute__((unused))
#elif defined(__LCLINT__)
# define UNUSED(x) /*@unused@*/ x
#else
# define UNUSED(x) x
#endif

/*===========================================================================*/
/* Driver exported variables.                                                */
/*===========================================================================*/

#if !defined(__DOXYGEN__)
	TOUCHPADDriver TOUCHPAD;
#endif

/*===========================================================================*/
/* Driver local variables.                                                   */
/*===========================================================================*/

/*===========================================================================*/
/* Driver local functions.                                                   */
/*===========================================================================*/

/*===========================================================================*/
/* Driver interrupt handlers.                                                */
/*===========================================================================*/

/*===========================================================================*/
/* Driver exported functions.                                                */
/*===========================================================================*/

/* ---- Required Routines ---- */

/**
 * @brief   Low level GDISP driver initialization.
 *
 * @notapi
 */
void touchpad_lld_init(void) {
	/* Initialise the TOUCHPAD structure */
}

/**
 * @brief   Reads out the X direction.
 *
 * @notapi
 */
uint16_t touchpad_lld_read_x(void) {
	/* ToDo */
	return 0;
}

/*
 * @brief	Reads out the X direction.
 *
 * @notapi
 */
uint16_t touchpad_lld_read_y(void) {
	/* ToDo */
	return 0;
}

/* ---- Optional Routines ---- */
#if TOUCHPAD_PRESSURE || defined(__DOXYGEN__)
	/*
	 * @brief	Reads out the Z direction / pressure.
	 *
	 * @notapi
	 */
	uint16_t toucpad_lld_read_y(void) {
		/* ToDo */
		return 0;
	}
#endif

#endif /* HAL_USE_TOUCHPAD */
/** @} */
