/**
 ******************************************************************************
 *
 * @file       pios_board_io.h
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2017.
 * @brief      PIOS_BOARD_HW_DEFS functions
 *             --
 * @see        The GNU Public License (GPL) Version 3
 *
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */
#ifndef PIOS_BOARD_HW_H
#define PIOS_BOARD_HW_H

#ifdef PIOS_INCLUDE_LED
const struct pios_gpio_cfg *PIOS_BOARD_HW_DEFS_GetLedCfg(uint32_t board_revision);
#endif
#ifdef PIOS_INCLUDE_USB
const struct pios_usb_cfg *PIOS_BOARD_HW_DEFS_GetUsbCfg(uint32_t board_revision);
#endif
#ifdef PIOS_INCLUDE_RFM22B
const struct pios_rfm22b_cfg *PIOS_BOARD_HW_DEFS_GetRfm22Cfg(uint32_t board_revision);
#endif
#ifdef PIOS_INCLUDE_OPENLRS
const struct pios_openlrs_cfg *PIOS_BOARD_HW_DEFS_GetOpenLRSCfg(uint32_t board_revision);
#endif
# ifdef PIOS_INCLUDE_HMC5X83_INTERNAL
const struct pios_hmc5x83_cfg *PIOS_BOARD_HW_DEFS_GetInternalHMC5x83Cfg(uint32_t board_revision);
# endif
#ifdef PIOS_INCLUDE_HMC5X83
const struct pios_hmc5x83_cfg *PIOS_BOARD_HW_DEFS_GetExternalHMC5x83Cfg(uint32_t board_revision);
#endif
#ifdef PIOS_INCLUDE_MS5611
const struct pios_ms5611_cfg *PIOS_BOARD_HW_DEFS_GetMS5611Cfg(uint32_t board_revision);
#endif
#ifdef PIOS_INCLUDE_BMP280
const struct pios_bmp280_cfg *PIOS_BOARD_HW_DEFS_GetBMP280Cfg(uint32_t board_revision);
#endif
#ifdef PIOS_INCLUDE_ADC
const struct pios_adc_cfg *PIOS_BOARD_HW_DEFS_GetAdcCfg(uint32_t board_revision);
#endif
#endif /* PIOS_BOARD_HW_H */
