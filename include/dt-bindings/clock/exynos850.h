/* SPDX-License-Identifier: (GPL-2.0-only OR BSD-2-Clause) */
/*
 * Copyright (C) 2021 Linaro Ltd.
 * Author: Sam Protsenko <semen.protsenko@linaro.org>
 *
 * Device Tree binding constants for Exynos850 clock controller.
 */

#ifndef _DT_BINDINGS_CLOCK_EXYNOS_850_H
#define _DT_BINDINGS_CLOCK_EXYNOS_850_H

/* CMU_TOP */
#define CLK_FOUT_SHARED0_PLL		1
#define CLK_FOUT_SHARED1_PLL		2
#define CLK_FOUT_MMC_PLL		3
#define CLK_MOUT_SHARED0_PLL		4
#define CLK_MOUT_SHARED1_PLL		5
#define CLK_MOUT_MMC_PLL		6
#define CLK_MOUT_CORE_BUS		7
#define CLK_MOUT_CORE_CCI		8
#define CLK_MOUT_CORE_MMC_EMBD		9
#define CLK_MOUT_CORE_SSS		10
#define CLK_MOUT_DPU			11
#define CLK_MOUT_HSI_BUS		12
#define CLK_MOUT_HSI_MMC_CARD		13
#define CLK_MOUT_HSI_USB20DRD		14
#define CLK_MOUT_PERI_BUS		15
#define CLK_MOUT_PERI_UART		16
#define CLK_MOUT_PERI_IP		17
#define CLK_DOUT_SHARED0_DIV3		18
#define CLK_DOUT_SHARED0_DIV2		19
#define CLK_DOUT_SHARED1_DIV3		20
#define CLK_DOUT_SHARED1_DIV2		21
#define CLK_DOUT_SHARED0_DIV4		22
#define CLK_DOUT_SHARED1_DIV4		23
#define CLK_DOUT_CORE_BUS		24
#define CLK_DOUT_CORE_CCI		25
#define CLK_DOUT_CORE_MMC_EMBD		26
#define CLK_DOUT_CORE_SSS		27
#define CLK_DOUT_DPU			28
#define CLK_DOUT_HSI_BUS		29
#define CLK_DOUT_HSI_MMC_CARD		30
#define CLK_DOUT_HSI_USB20DRD		31
#define CLK_DOUT_PERI_BUS		32
#define CLK_DOUT_PERI_UART		33
#define CLK_DOUT_PERI_IP		34
#define CLK_GOUT_CORE_BUS		35
#define CLK_GOUT_CORE_CCI		36
#define CLK_GOUT_CORE_MMC_EMBD		37
#define CLK_GOUT_CORE_SSS		38
#define CLK_GOUT_DPU			39
#define CLK_GOUT_HSI_BUS		40
#define CLK_GOUT_HSI_MMC_CARD		41
#define CLK_GOUT_HSI_USB20DRD		42
#define CLK_GOUT_PERI_BUS		43
#define CLK_GOUT_PERI_UART		44
#define CLK_GOUT_PERI_IP		45
#define CLK_MOUT_CLKCMU_APM_BUS		46
#define CLK_DOUT_CLKCMU_APM_BUS		47
#define CLK_GOUT_CLKCMU_APM_BUS		48
#define CLK_MOUT_AUD			49
#define CLK_GOUT_AUD			50
#define CLK_DOUT_AUD			51
#define CLK_MOUT_IS_BUS			52
#define CLK_MOUT_IS_ITP			53
#define CLK_MOUT_IS_VRA			54
#define CLK_MOUT_IS_GDC			55
#define CLK_GOUT_IS_BUS			56
#define CLK_GOUT_IS_ITP			57
#define CLK_GOUT_IS_VRA			58
#define CLK_GOUT_IS_GDC			59
#define CLK_DOUT_IS_BUS			60
#define CLK_DOUT_IS_ITP			61
#define CLK_DOUT_IS_VRA			62
#define CLK_DOUT_IS_GDC			63
#define CLK_MOUT_MFCMSCL_MFC		64
#define CLK_MOUT_MFCMSCL_M2M		65
#define CLK_MOUT_MFCMSCL_MCSC		66
#define CLK_MOUT_MFCMSCL_JPEG		67
#define CLK_GOUT_MFCMSCL_MFC		68
#define CLK_GOUT_MFCMSCL_M2M		69
#define CLK_GOUT_MFCMSCL_MCSC		70
#define CLK_GOUT_MFCMSCL_JPEG		71
#define CLK_DOUT_MFCMSCL_MFC		72
#define CLK_DOUT_MFCMSCL_M2M		73
#define CLK_DOUT_MFCMSCL_MCSC		74
#define CLK_DOUT_MFCMSCL_JPEG		75
#define CLK_MOUT_G3D_SWITCH		76
#define CLK_GOUT_G3D_SWITCH		77
#define CLK_DOUT_G3D_SWITCH		78
#define TOP_NR_CLK			79

/* CMU_APM */
#define CLK_RCO_I3C_PMIC		1
#define OSCCLK_RCO_APM			2
#define CLK_RCO_APM__ALV		3
#define CLK_DLL_DCO			4
#define CLK_MOUT_APM_BUS_USER		5
#define CLK_MOUT_RCO_APM_I3C_USER	6
#define CLK_MOUT_RCO_APM_USER		7
#define CLK_MOUT_DLL_USER		8
#define CLK_MOUT_CLKCMU_CHUB_BUS	9
#define CLK_MOUT_APM_BUS		10
#define CLK_MOUT_APM_I3C		11
#define CLK_DOUT_CLKCMU_CHUB_BUS	12
#define CLK_DOUT_APM_BUS		13
#define CLK_DOUT_APM_I3C		14
#define CLK_GOUT_CLKCMU_CMGP_BUS	15
#define CLK_GOUT_CLKCMU_CHUB_BUS	16
#define CLK_GOUT_RTC_PCLK		17
#define CLK_GOUT_TOP_RTC_PCLK		18
#define CLK_GOUT_I3C_PCLK		19
#define CLK_GOUT_I3C_SCLK		20
#define CLK_GOUT_SPEEDY_PCLK		21
#define CLK_GOUT_GPIO_ALIVE_PCLK	22
#define CLK_GOUT_PMU_ALIVE_PCLK		23
#define CLK_GOUT_SYSREG_APM_PCLK	24
#define APM_NR_CLK			25

/* CMU_AUD */
#define CLK_DOUT_AUD_AUDIF		1
#define CLK_DOUT_AUD_BUSD		2
#define CLK_DOUT_AUD_BUSP		3
#define CLK_DOUT_AUD_CNT		4
#define CLK_DOUT_AUD_CPU		5
#define CLK_DOUT_AUD_CPU_ACLK		6
#define CLK_DOUT_AUD_CPU_PCLKDBG	7
#define CLK_DOUT_AUD_FM			8
#define CLK_DOUT_AUD_FM_SPDY		9
#define CLK_DOUT_AUD_MCLK		10
#define CLK_DOUT_AUD_UAIF0		11
#define CLK_DOUT_AUD_UAIF1		12
#define CLK_DOUT_AUD_UAIF2		13
#define CLK_DOUT_AUD_UAIF3		14
#define CLK_DOUT_AUD_UAIF4		15
#define CLK_DOUT_AUD_UAIF5		16
#define CLK_DOUT_AUD_UAIF6		17
#define CLK_FOUT_AUD_PLL		18
#define CLK_GOUT_AUD_ABOX_ACLK		19
#define CLK_GOUT_AUD_ASB_CCLK		20
#define CLK_GOUT_AUD_CA32_CCLK		21
#define CLK_GOUT_AUD_CNT_BCLK		22
#define CLK_GOUT_AUD_CODEC_MCLK		23
#define CLK_GOUT_AUD_DAP_CCLK		24
#define CLK_GOUT_AUD_GPIO_PCLK		25
#define CLK_GOUT_AUD_PPMU_ACLK		26
#define CLK_GOUT_AUD_PPMU_PCLK		27
#define CLK_GOUT_AUD_SPDY_BCLK		28
#define CLK_GOUT_AUD_SYSMMU_CLK		29
#define CLK_GOUT_AUD_SYSREG_PCLK	30
#define CLK_GOUT_AUD_TZPC_PCLK		31
#define CLK_GOUT_AUD_UAIF0_BCLK		32
#define CLK_GOUT_AUD_UAIF1_BCLK		33
#define CLK_GOUT_AUD_UAIF2_BCLK		34
#define CLK_GOUT_AUD_UAIF3_BCLK		35
#define CLK_GOUT_AUD_UAIF4_BCLK		36
#define CLK_GOUT_AUD_UAIF5_BCLK		37
#define CLK_GOUT_AUD_UAIF6_BCLK		38
#define CLK_GOUT_AUD_WDT_PCLK		39
#define CLK_MOUT_AUD_CPU		40
#define CLK_MOUT_AUD_CPU_HCH		41
#define CLK_MOUT_AUD_CPU_USER		42
#define CLK_MOUT_AUD_FM			43
#define CLK_MOUT_AUD_PLL		44
#define CLK_MOUT_AUD_TICK_USB_USER	45
#define CLK_MOUT_AUD_UAIF0		46
#define CLK_MOUT_AUD_UAIF1		47
#define CLK_MOUT_AUD_UAIF2		48
#define CLK_MOUT_AUD_UAIF3		49
#define CLK_MOUT_AUD_UAIF4		50
#define CLK_MOUT_AUD_UAIF5		51
#define CLK_MOUT_AUD_UAIF6		52
#define IOCLK_AUDIOCDCLK0		53
#define IOCLK_AUDIOCDCLK1		54
#define IOCLK_AUDIOCDCLK2		55
#define IOCLK_AUDIOCDCLK3		56
#define IOCLK_AUDIOCDCLK4		57
#define IOCLK_AUDIOCDCLK5		58
#define IOCLK_AUDIOCDCLK6		59
#define TICK_USB			60
#define CLK_GOUT_AUD_CMU_AUD_PCLK	61
#define AUD_NR_CLK			62

/* CMU_CMGP */
#define CLK_RCO_CMGP			1
#define CLK_MOUT_CMGP_ADC		2
#define CLK_MOUT_CMGP_USI0		3
#define CLK_MOUT_CMGP_USI1		4
#define CLK_DOUT_CMGP_ADC		5
#define CLK_DOUT_CMGP_USI0		6
#define CLK_DOUT_CMGP_USI1		7
#define CLK_GOUT_CMGP_ADC_S0_PCLK	8
#define CLK_GOUT_CMGP_ADC_S1_PCLK	9
#define CLK_GOUT_CMGP_GPIO_PCLK		10
#define CLK_GOUT_CMGP_USI0_IPCLK	11
#define CLK_GOUT_CMGP_USI0_PCLK		12
#define CLK_GOUT_CMGP_USI1_IPCLK	13
#define CLK_GOUT_CMGP_USI1_PCLK		14
#define CLK_GOUT_SYSREG_CMGP_PCLK	15
#define CMGP_NR_CLK			16

/* CMU_G3D */
#define CLK_FOUT_G3D_PLL		1
#define CLK_MOUT_G3D_PLL		2
#define CLK_MOUT_G3D_SWITCH_USER	3
#define CLK_MOUT_G3D_BUSD		4
#define CLK_DOUT_G3D_BUSP		5
#define CLK_GOUT_G3D_CMU_G3D_PCLK	6
#define CLK_GOUT_G3D_GPU_CLK		7
#define CLK_GOUT_G3D_TZPC_PCLK		8
#define CLK_GOUT_G3D_GRAY2BIN_CLK	9
#define CLK_GOUT_G3D_BUSD_CLK		10
#define CLK_GOUT_G3D_BUSP_CLK		11
#define CLK_GOUT_G3D_SYSREG_PCLK	12
#define G3D_NR_CLK			13

/* CMU_HSI */
#define CLK_MOUT_HSI_BUS_USER		1
#define CLK_MOUT_HSI_MMC_CARD_USER	2
#define CLK_MOUT_HSI_USB20DRD_USER	3
#define CLK_MOUT_HSI_RTC		4
#define CLK_GOUT_USB_RTC_CLK		5
#define CLK_GOUT_USB_REF_CLK		6
#define CLK_GOUT_USB_PHY_REF_CLK	7
#define CLK_GOUT_USB_PHY_ACLK		8
#define CLK_GOUT_USB_BUS_EARLY_CLK	9
#define CLK_GOUT_GPIO_HSI_PCLK		10
#define CLK_GOUT_MMC_CARD_ACLK		11
#define CLK_GOUT_MMC_CARD_SDCLKIN	12
#define CLK_GOUT_SYSREG_HSI_PCLK	13
#define CLK_GOUT_HSI_PPMU_ACLK		14
#define CLK_GOUT_HSI_PPMU_PCLK		15
#define CLK_GOUT_HSI_CMU_HSI_PCLK	16
#define HSI_NR_CLK			17

/* CMU_IS */
#define CLK_MOUT_IS_BUS_USER		1
#define CLK_MOUT_IS_ITP_USER		2
#define CLK_MOUT_IS_VRA_USER		3
#define CLK_MOUT_IS_GDC_USER		4
#define CLK_DOUT_IS_BUSP		5
#define CLK_GOUT_IS_CMU_IS_PCLK		6
#define CLK_GOUT_IS_CSIS0_ACLK		7
#define CLK_GOUT_IS_CSIS1_ACLK		8
#define CLK_GOUT_IS_CSIS2_ACLK		9
#define CLK_GOUT_IS_TZPC_PCLK		10
#define CLK_GOUT_IS_CSIS_DMA_CLK	11
#define CLK_GOUT_IS_GDC_CLK		12
#define CLK_GOUT_IS_IPP_CLK		13
#define CLK_GOUT_IS_ITP_CLK		14
#define CLK_GOUT_IS_MCSC_CLK		15
#define CLK_GOUT_IS_VRA_CLK		16
#define CLK_GOUT_IS_PPMU_IS0_ACLK	17
#define CLK_GOUT_IS_PPMU_IS0_PCLK	18
#define CLK_GOUT_IS_PPMU_IS1_ACLK	19
#define CLK_GOUT_IS_PPMU_IS1_PCLK	20
#define CLK_GOUT_IS_SYSMMU_IS0_CLK	21
#define CLK_GOUT_IS_SYSMMU_IS1_CLK	22
#define CLK_GOUT_IS_SYSREG_PCLK		23
#define IS_NR_CLK			24

/* CMU_MFCMSCL */
#define CLK_MOUT_MFCMSCL_MFC_USER		1
#define CLK_MOUT_MFCMSCL_M2M_USER		2
#define CLK_MOUT_MFCMSCL_MCSC_USER		3
#define CLK_MOUT_MFCMSCL_JPEG_USER		4
#define CLK_DOUT_MFCMSCL_BUSP			5
#define CLK_GOUT_MFCMSCL_CMU_MFCMSCL_PCLK	6
#define CLK_GOUT_MFCMSCL_TZPC_PCLK		7
#define CLK_GOUT_MFCMSCL_JPEG_ACLK		8
#define CLK_GOUT_MFCMSCL_M2M_ACLK		9
#define CLK_GOUT_MFCMSCL_MCSC_CLK		10
#define CLK_GOUT_MFCMSCL_MFC_ACLK		11
#define CLK_GOUT_MFCMSCL_PPMU_ACLK		12
#define CLK_GOUT_MFCMSCL_PPMU_PCLK		13
#define CLK_GOUT_MFCMSCL_SYSMMU_CLK		14
#define CLK_GOUT_MFCMSCL_SYSREG_PCLK		15
#define MFCMSCL_NR_CLK				16

/* CMU_PERI */
#define CLK_MOUT_PERI_BUS_USER		1
#define CLK_MOUT_PERI_UART_USER		2
#define CLK_MOUT_PERI_HSI2C_USER	3
#define CLK_MOUT_PERI_SPI_USER		4
#define CLK_DOUT_PERI_HSI2C0		5
#define CLK_DOUT_PERI_HSI2C1		6
#define CLK_DOUT_PERI_HSI2C2		7
#define CLK_DOUT_PERI_SPI0		8
#define CLK_GOUT_PERI_HSI2C0		9
#define CLK_GOUT_PERI_HSI2C1		10
#define CLK_GOUT_PERI_HSI2C2		11
#define CLK_GOUT_GPIO_PERI_PCLK		12
#define CLK_GOUT_HSI2C0_IPCLK		13
#define CLK_GOUT_HSI2C0_PCLK		14
#define CLK_GOUT_HSI2C1_IPCLK		15
#define CLK_GOUT_HSI2C1_PCLK		16
#define CLK_GOUT_HSI2C2_IPCLK		17
#define CLK_GOUT_HSI2C2_PCLK		18
#define CLK_GOUT_I2C0_PCLK		19
#define CLK_GOUT_I2C1_PCLK		20
#define CLK_GOUT_I2C2_PCLK		21
#define CLK_GOUT_I2C3_PCLK		22
#define CLK_GOUT_I2C4_PCLK		23
#define CLK_GOUT_I2C5_PCLK		24
#define CLK_GOUT_I2C6_PCLK		25
#define CLK_GOUT_MCT_PCLK		26
#define CLK_GOUT_PWM_MOTOR_PCLK		27
#define CLK_GOUT_SPI0_IPCLK		28
#define CLK_GOUT_SPI0_PCLK		29
#define CLK_GOUT_SYSREG_PERI_PCLK	30
#define CLK_GOUT_UART_IPCLK		31
#define CLK_GOUT_UART_PCLK		32
#define CLK_GOUT_WDT0_PCLK		33
#define CLK_GOUT_WDT1_PCLK		34
#define PERI_NR_CLK			35

/* CMU_CORE */
#define CLK_MOUT_CORE_BUS_USER		1
#define CLK_MOUT_CORE_CCI_USER		2
#define CLK_MOUT_CORE_MMC_EMBD_USER	3
#define CLK_MOUT_CORE_SSS_USER		4
#define CLK_MOUT_CORE_GIC		5
#define CLK_DOUT_CORE_BUSP		6
#define CLK_GOUT_CCI_ACLK		7
#define CLK_GOUT_GIC_CLK		8
#define CLK_GOUT_MMC_EMBD_ACLK		9
#define CLK_GOUT_MMC_EMBD_SDCLKIN	10
#define CLK_GOUT_SSS_ACLK		11
#define CLK_GOUT_SSS_PCLK		12
#define CLK_GOUT_GPIO_CORE_PCLK		13
#define CLK_GOUT_SYSREG_CORE_PCLK	14
#define CORE_NR_CLK			15

/* CMU_DPU */
#define CLK_MOUT_DPU_USER		1
#define CLK_DOUT_DPU_BUSP		2
#define CLK_GOUT_DPU_CMU_DPU_PCLK	3
#define CLK_GOUT_DPU_DECON0_ACLK	4
#define CLK_GOUT_DPU_DMA_ACLK		5
#define CLK_GOUT_DPU_DPP_ACLK		6
#define CLK_GOUT_DPU_PPMU_ACLK		7
#define CLK_GOUT_DPU_PPMU_PCLK		8
#define CLK_GOUT_DPU_SMMU_CLK		9
#define CLK_GOUT_DPU_SYSREG_PCLK	10
#define DPU_NR_CLK			11

#endif /* _DT_BINDINGS_CLOCK_EXYNOS_850_H */
