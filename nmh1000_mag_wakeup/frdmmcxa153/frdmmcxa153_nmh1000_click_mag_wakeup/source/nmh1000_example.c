/*
 * Copyright 2023 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/**
 * @file nmh1000_example.c
 * @brief The nmh1000_example.c file implements the ISSDK NMH1000 sensor driver
 *        example demonstration with polling mode.
 */

//-----------------------------------------------------------------------
// SDK Includes
//-----------------------------------------------------------------------
#include "pin_mux.h"
#include "clock_config.h"
#include "board.h"
#include "fsl_debug_console.h"

//-----------------------------------------------------------------------
// CMSIS Includes
//-----------------------------------------------------------------------
#include "Driver_I2C.h"

/* ISSDK Includes */
#include "issdk_hal.h"
#include "nmh1000_drv.h"
#include "systick_utils.h"

//-----------------------------------------------------------------------
// Macros
//-----------------------------------------------------------------------
#define NMH1000_DATA_SIZE (1) /* 1 byte Mag Data. */
#define MAG_THS           (50) /* Mag Wake Threshold*/
#define BOARD_LED_GPIO     BOARD_LED_GREEN_GPIO
#define BOARD_LED_GPIO_PIN BOARD_LED_GREEN_GPIO_PIN
//-----------------------------------------------------------------------
// Constants
//-----------------------------------------------------------------------
/*! @brief Register settings for Normal Mode. */
const registerwritelist_t cNmh1000ConfigNormal[] = {
    {NMH1000_ODR, NMH1000_USER_ODR_ODR_10X_HSP, NMH1000_USER_ODR_ODR_MASK},
    {NMH1000_CONTROL_REG1, NMH1000_CONTROL_REG1_AUTO_MODE_START, NMH1000_CONTROL_REG1_AUTO_MODE_MASK},
    __END_WRITE_DATA__};

/*! @brief Address and size of Raw Pressure+Temperature Data in Normal Mode. */
const registerreadlist_t cNmh1000OutputNormal[] = {{.readFrom = NMH1000_OUT_M_REG, .numBytes = NMH1000_DATA_SIZE},
                                                 __END_READ_DATA__};

//-----------------------------------------------------------------------
// Functions
//-----------------------------------------------------------------------
/*!
 * @brief Main function
 */
int main(void)
{
    int32_t status;
    uint8_t magData;
    uint8_t mag_switch_flag = 0;
    nmh1000_magData_t nmh1000;
    uint8_t cnt = 0;

    nmh1000_i2c_sensorhandle_t nmh1000Driver;
    ARM_DRIVER_I2C *I2Cdrv = &I2C_S_DRIVER;
    GENERIC_DRIVER_GPIO *gpioDriver = &Driver_GPIO_KSDK;

    BOARD_InitPins();
    BOARD_InitBootClocks();
    BOARD_SystickEnable();
    BOARD_InitDebugConsole();

    PRINTF("\r\n ISSDK NMH1000 Magnetic Switch Sensor Example !\r\n");

    /*! Initialize the I2C driver. */
    status = I2Cdrv->Initialize(I2C_S_SIGNAL_EVENT);
    if (ARM_DRIVER_OK != status)
    {
        PRINTF("\r\n I2C Initialization Failed.\r\n");
        return -1;
    }

    /*! Set the I2C Power mode. */
    status = I2Cdrv->PowerControl(ARM_POWER_FULL);
    if (ARM_DRIVER_OK != status)
    {
        PRINTF("\r\n I2C Power Mode setting Failed.\r\n");
        return -1;
    }

    /*! Set the I2C bus speed. */
    status = I2Cdrv->Control(ARM_I2C_BUS_SPEED, ARM_I2C_BUS_SPEED_FAST);
    if (ARM_DRIVER_OK != status)
    {
        PRINTF("\r\n I2C Control Mode setting Failed.\r\n");
        return -1;
    }

    /*! Initialize RGB LED pin used by FRDM board */
    gpioDriver->pin_init(&GREEN_LED, GPIO_DIRECTION_OUT, NULL, NULL, NULL);

	status = NMH1000_I2C_Initialize(&nmh1000Driver, &I2C_S_DRIVER, I2C_S_DEVICE_INDEX, NMH1000_I2C_ADDR_VAL,
			NMH1000_WHO_AM_I_VALUE);
    if (SENSOR_ERROR_NONE != status)
    {
        PRINTF("\r\n NMH1000 Sensor Initialization Failed, Err = %d\r\n", status);
        return -1;
    }
    PRINTF("\r\n Successfully Initialized NMH1000 Sensor\r\n");

    /*!  Set the task to be executed while waiting for I2C transactions to complete. */
    NMH1000_I2C_SetIdleTask(&nmh1000Driver, (registeridlefunction_t)SMC_SetPowerModeVlpr, SMC);

    /*! Configure the NMH1000 sensor. */
    status = NMH1000_I2C_Configure(&nmh1000Driver, cNmh1000ConfigNormal);
    if (SENSOR_ERROR_NONE != status)
    {
        PRINTF("\r\nNMH1000 now active and entering data read loop...\r\n");
        return -1;
    }
    PRINTF("\r\n Successfully Applied Sensor Poll Configuration.\r\n");

    PRINTF("\r\n Waiting for Magnetic Field to Change\r\n");
    for (;;) /* Forever loop */
    {

        /*! Read new raw sensor data from the NMH1000. */
        status = NMH1000_I2C_ReadData(&nmh1000Driver, cNmh1000OutputNormal, &magData);
        if (ARM_DRIVER_OK != status)
        {
            PRINTF("\r\n Read Failed. \r\n");
            return -1;
        }

        /*! Process the sample and convert the raw sensor data. */
        nmh1000.magData = magData & 0xFC;
        cnt++;

        if (nmh1000.magData > MAG_THS)
        {
            mag_switch_flag = 1;
        	gpioDriver->clr_pin(&GREEN_LED);
        }
        else
        {
        	mag_switch_flag = 0;
        	gpioDriver->set_pin(&GREEN_LED);
        }

        if (1 == mag_switch_flag)
        {
        	PRINTF(" Mag Threshold (%d) Crossed: Mag Out = %d \r\n", MAG_THS, magData);
        	PRINTF(" Mag Wake Up Detected\r\n\r\n");
            PRINTF("\r\n Waiting for Magnetic Field to Change\r\n");
        }
    }
}
