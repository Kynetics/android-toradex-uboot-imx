/*
 * Copyright 2020 NXP
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef IMX8QXP_COLIBRI_ANDROID_H
#define IMX8QXP_COLIBRI_ANDROID_H

#define CONFIG_USB_GADGET_VBUS_DRAW	2

#define CONFIG_ANDROID_AB_SUPPORT
#ifdef CONFIG_ANDROID_AB_SUPPORT
#define CONFIG_SYSTEM_RAMDISK_SUPPORT
#endif
#define FSL_FASTBOOT_FB_DEV "mmc"


#define CONFIG_FASTBOOT_USB_DEV 0

#undef CONFIG_EXTRA_ENV_SETTINGS
#undef CONFIG_BOOTCOMMAND

#define CONFIG_EXTRA_ENV_SETTINGS		\
	"splashpos=m,m\0"	  		\
	"splashimage=0x9e000000\0" 		\
	"fdt_high=0xffffffffffffffff\0"	  	\
	"initrd_high=0xffffffffffffffff\0" 	\
	"board_device_tree=imx8qxp-colibri-iris-v2.dtb\0"			\

#ifdef CONFIG_IMX_TRUSTY_OS
#define AVB_RPMB
#define NS_ARCH_ARM64 1
#define KEYSLOT_HWPARTITION_ID   2
#define KEYSLOT_BLKS             0x3FFF

#ifdef CONFIG_SPL_BUILD
#undef CONFIG_BLK
#define CONFIG_FSL_CAAM_KB
#define CONFIG_SPL_CRYPTO_SUPPORT
#define CONFIG_SYS_FSL_SEC_LE
#endif

#endif

#define AVB_AB_I_UNDERSTAND_LIBAVB_AB_IS_DEPRECATED

#define CONFIG_ENABLE_LOCKSTATUS_SUPPORT

#endif /* IMX8QXP_COLIBRI_ANDROID_H */
