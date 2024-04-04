/*
 * Copyright 2022 NXP
 * All rights reserved.
 *
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _RTE_DEVICE_H
#define _RTE_DEVICE_H

extern void LPI2C2_InitPins();
extern void LPI2C2_DeinitPins();

extern void LPSPI1_InitPins();
extern void LPSPI1_DeinitPins();

extern void LPUART4_InitPins();
extern void LPUART4_DeinitPins();

/* Driver name mapping. */
/* User needs to provide the implementation of LPI2CX_GetFreq/LPI2CX_InitPins/LPI2CX_DeinitPins for the enabled LPI2C
 * instance. */
#define RTE_I2C2        1
#define RTE_I2C2_DMA_EN 0

/* User needs to provide the implementation of LPSPIX_GetFreq/LPSPIX_InitPins/LPSPIX_DeinitPins for the enabled LPSPI
 * instance. */
#define RTE_SPI1        1
#define RTE_SPI1_DMA_EN 0

/* User needs to provide the implementation of LPUARTX_GetFreq/LPUARTX_InitPins/LPUARTX_DeinitPins for the enabled
 * LPUART instance. */
#define RTE_USART4        1
#define RTE_USART4_DMA_EN 0

/* LPI2C configuration. */
#define RTE_I2C2_PIN_INIT        LPI2C2_InitPins
#define RTE_I2C2_PIN_DEINIT      LPI2C2_DeinitPins
#define RTE_I2C2_DMA_TX_CH       0
#define RTE_I2C2_DMA_TX_PERI_SEL (uint16_t) kDmaRequestMuxLpFlexcomm2Tx
#define RTE_I2C2_DMA_TX_DMA_BASE DMA0
#define RTE_I2C2_DMA_RX_CH       1
#define RTE_I2C2_DMA_RX_PERI_SEL (uint16_t) kDmaRequestMuxLpFlexcomm2Rx
#define RTE_I2C2_DMA_RX_DMA_BASE DMA0

/* SPI configuration. */
#define RTE_SPI1_PCS_TO_SCK_DELAY       1000
#define RTE_SPI1_SCK_TO_PSC_DELAY       1000
#define RTE_SPI1_BETWEEN_TRANSFER_DELAY 1000
#define RTE_SPI1_MASTER_PCS_PIN_SEL     (kLPSPI_MasterPcs0)
#define RTE_SPI1_SLAVE_PCS_PIN_SEL      (kLPSPI_SlavePcs0)
#define RTE_SPI1_PIN_INIT               LPSPI1_InitPins
#define RTE_SPI1_PIN_DEINIT             LPSPI1_DeinitPins
#define RTE_SPI1_DMA_TX_CH              0
#define RTE_SPI1_DMA_TX_PERI_SEL        (uint16_t) kDmaRequestMuxLpFlexcomm1Tx
#define RTE_SPI1_DMA_TX_DMA_BASE        DMA0
#define RTE_SPI1_DMA_RX_CH              1
#define RTE_SPI1_DMA_RX_PERI_SEL        (uint16_t) kDmaRequestMuxLpFlexcomm1Rx
#define RTE_SPI1_DMA_RX_DMA_BASE        DMA0

/* UART configuration. */
#define RTE_USART4_PIN_INIT        LPUART4_InitPins
#define RTE_USART4_PIN_DEINIT      LPUART4_DeinitPins
#define RTE_USART4_DMA_TX_CH       0
#define RTE_USART4_DMA_TX_PERI_SEL (uint16_t) kDmaRequestMuxLpFlexcomm4Tx
#define RTE_USART4_DMA_TX_DMA_BASE DMA0
#define RTE_USART4_DMA_RX_CH       1
#define RTE_USART4_DMA_RX_PERI_SEL (uint16_t) kDmaRequestMuxLpFlexcomm4Rx
#define RTE_USART4_DMA_RX_DMA_BASE DMA0

#endif /* _RTE_DEVICE_H */
