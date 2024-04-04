/*
 * Copyright 2022 NXP
 * All rights reserved.
 *
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _RTE_DEVICE_H
#define _RTE_DEVICE_H

extern void LPI2C0_InitPins();
extern void LPI2C0_DeinitPins();

extern void LPSPI0_InitPins();
extern void LPSPI0_InitPins_deinit();

extern void LPUART0_InitPins();
extern void LPUART0_InitPins_deinit();


/* Driver name mapping. */
/* User needs to provide the implementation of LPI2CX_GetFreq/LPI2CX_InitPins/LPI2CX_DeinitPins for the enabled LPI2C
 * instance. */
#define RTE_I2C0        1
#define RTE_I2C0_DMA_EN 0

/* LPI2C configuration. */
#define RTE_I2C0_PIN_INIT        LPI2C0_InitPins
#define RTE_I2C0_PIN_DEINIT      LPI2C0_DeinitPins
#define RTE_I2C0_DMA_TX_CH       2
#define RTE_I2C0_DMA_TX_PERI_SEL (uint16_t) kDma0RequestLPI2C0Tx
#define RTE_I2C0_DMA_TX_DMA_BASE DMA0
#define RTE_I2C0_DMA_RX_CH       3
#define RTE_I2C0_DMA_RX_PERI_SEL (uint16_t) kDma0RequestLPI2C0Rx
#define RTE_I2C0_DMA_RX_DMA_BASE DMA0

/*Driver name mapping.*/
/* User needs to provide the implementation of LPSPIX_GetFreq/LPSPIX_InitPins/LPSPIX_DeinitPins for the enabled LPSPI
 * instance. */
#define RTE_SPI0        1
#define RTE_SPI0_DMA_EN 0

/* SPI configuration. */
#define RTE_SPI0_PCS_TO_SCK_DELAY       1000
#define RTE_SPI0_SCK_TO_PSC_DELAY       1000
#define RTE_SPI0_BETWEEN_TRANSFER_DELAY 1000
#define RTE_SPI0_MASTER_PCS_PIN_SEL     (kLPSPI_MasterPcs0)
#define RTE_SPI0_SLAVE_PCS_PIN_SEL      (kLPSPI_SlavePcs1)
#define RTE_SPI0_PIN_INIT               LPSPI0_InitPins
#define RTE_SPI0_PIN_DEINIT             LPSPI0_InitPins_deinit
#define RTE_SPI0_DMA_TX_CH              0
#define RTE_SPI0_DMA_TX_PERI_SEL        (uint16_t) kDma0RequestMuxLpFlexcomm1Tx
#define RTE_SPI0_DMA_TX_DMA_BASE        DMA0
#define RTE_SPI0_DMA_RX_CH              1
#define RTE_SPI0_DMA_RX_PERI_SEL        (uint16_t) kDma0RequestMuxLpFlexcomm1Rx
#define RTE_SPI0_DMA_RX_DMA_BASE        DMA0

/* Driver name mapping. */
/* User needs to provide the implementation of LPUARTX_GetFreq/LPUARTX_InitPins/LPUARTX_DeinitPins for the enabled
 * LPUART instance. */
#define RTE_USART0        1
#define RTE_USART0_DMA_EN 0

/* UART configuration. */
#define RTE_USART0_PIN_INIT        LPUART0_InitPins
#define RTE_USART0_PIN_DEINIT      LPUART0_InitPins_deinit
#define RTE_USART0_DMA_TX_CH       0
#define RTE_USART0_DMA_TX_PERI_SEL (uint16_t) kDma0RequestLPUART0Tx
#define RTE_USART0_DMA_TX_DMA_BASE DMA0
#define RTE_USART0_DMA_RX_CH       1
#define RTE_USART0_DMA_RX_PERI_SEL (uint16_t) kDma0RequestLPUART0Rx
#define RTE_USART0_DMA_RX_DMA_BASE DMA0

#endif /* _RTE_DEVICE_H */
