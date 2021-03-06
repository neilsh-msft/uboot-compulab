/*
 * Copyright 2017 NXP
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __DDR_H__
#define __DDR_H__

enum fw_type {
	FW_1D_IMAGE,
	FW_2D_IMAGE,
};

void ddr_init(void);
void ddr_load_train_code(enum fw_type type);
int get_ddrphy_training_result(void);

static inline void reg32_write(unsigned long addr, u32 val)
{
	writel(val, addr);
}

static inline uint32_t reg32_read(unsigned long addr)
{
	return readl(addr);
}

static void inline dwc_ddrphy_apb_wr(unsigned long addr, u32 val)
{
    writel(val, addr);
}

static inline void reg32setbit(unsigned long addr, u32 bit)
{
	setbits_le32(addr, (1 << bit));
}

#endif
