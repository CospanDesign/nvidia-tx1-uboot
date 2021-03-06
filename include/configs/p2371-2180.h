/*
 * (C) Copyright 2013-2016
 * NVIDIA Corporation <www.nvidia.com>
 *
 * SPDX-License-Identifier:     GPL-2.0+
 */

#ifndef _P2371_2180_H
#define _P2371_2180_H

#include <linux/sizes.h>

#include "tegra210-common.h"

/* Parse the board ID EEPROM and update DT */
#define CONFIG_NV_BOARD_ID_EEPROM
#define CONFIG_OF_ADD_CHOSEN_MAC_ADDRS
#define CONFIG_OF_ADD_PLUGIN_MANAGER_IDS
#define EEPROM_I2C_BUS		3
#define EEPROM_I2C_ADDRESS	0x50

#define CONFIG_OF_ADD_CAM_BOARD_ID
#define CAM_EEPROM_I2C_BUS	5
#define CAM_EEPROM_I2C_ADDR	0x54

/* High-level configuration options */
#define CONFIG_SYS_PROMPT		"Tegra210 (P2371-2180) # "
#define CONFIG_TEGRA_BOARD_STRING	"NVIDIA P2371-2180"

/* Board-specific serial config */
#define CONFIG_TEGRA_ENABLE_UARTA

/* I2C */
#define CONFIG_SYS_I2C_TEGRA
#define CONFIG_CMD_I2C
#define CONFIG_SYS_VI_I2C_TEGRA

/* SD/MMC */
#define CONFIG_MMC
#define CONFIG_GENERIC_MMC
#define CONFIG_TEGRA_MMC
#define CONFIG_CMD_MMC

/* Environment in eMMC, at the end of 2nd "boot sector" */
#define CONFIG_ENV_IS_IN_MMC
#define CONFIG_SYS_MMC_ENV_DEV		0
#define CONFIG_SYS_MMC_ENV_PART		2
#define CONFIG_ENV_OFFSET		(-CONFIG_ENV_SIZE)

/* SPI */
#define CONFIG_TEGRA114_SPI		/* Compatible w/ Tegra114 SPI */
#define CONFIG_TEGRA114_SPI_CTRLS	6
#define CONFIG_SPI_FLASH_WINBOND
#define CONFIG_SF_DEFAULT_MODE		SPI_MODE_0
#define CONFIG_SF_DEFAULT_SPEED		24000000
#define CONFIG_CMD_SPI
#define CONFIG_CMD_SF
#define CONFIG_SPI_FLASH_SIZE		(4 << 20)

/* USB2.0 Host support */
#define CONFIG_USB_EHCI
#define CONFIG_USB_EHCI_TEGRA
#define CONFIG_USB_MAX_CONTROLLER_COUNT	1
#define CONFIG_USB_STORAGE
#define CONFIG_CMD_USB

/* USB networking support */
#define CONFIG_USB_HOST_ETHER
#define CONFIG_USB_ETHER_ASIX

/* PCI host support */
#define CONFIG_PCI
#define CONFIG_PCI_TEGRA
#define CONFIG_PCI_PNP
#define CONFIG_CMD_PCI
#define CONFIG_CMD_PCI_ENUM

/* PCI networking support */
#define CONFIG_RTL8169

/* General networking support */
#define CONFIG_CMD_DHCP

#include "tegra-common-usb-gadget.h"
#include "tegra-common-post.h"

#define COUNTER_FREQUENCY	38400000

#endif /* _P2371_2180_H */
