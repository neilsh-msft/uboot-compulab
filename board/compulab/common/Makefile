#
# (C) Copyright 2011 - 2013 CompuLab, Ltd. <www.compulab.co.il>
#
# Author: Igor Grinberg <grinberg@compulab.co.il>
#
# SPDX-License-Identifier:	GPL-2.0+
#

obj-y				+= common.o
obj-y				+= mmc.o
obj-$(CONFIG_SYS_I2C)		+= eeprom.o
obj-$(CONFIG_LCD)		+= omap3_display.o
obj-$(CONFIG_SMC911X)		+= omap3_smc911x.o

obj-$(CONFIG_POWER_PFUZE100)	+= pfuze.o
obj-$(CONFIG_$(SPL_)DM_PMIC_PFUZE100)	+= pfuze_dm.o
