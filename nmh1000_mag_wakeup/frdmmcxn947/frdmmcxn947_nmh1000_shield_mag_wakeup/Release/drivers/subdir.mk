################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../drivers/fsl_clock.c \
../drivers/fsl_common.c \
../drivers/fsl_common_arm.c \
../drivers/fsl_edma.c \
../drivers/fsl_edma_soc.c \
../drivers/fsl_gpio.c \
../drivers/fsl_lpflexcomm.c \
../drivers/fsl_lpi2c.c \
../drivers/fsl_lpi2c_cmsis.c \
../drivers/fsl_lpi2c_edma.c \
../drivers/fsl_lpspi.c \
../drivers/fsl_lpspi_cmsis.c \
../drivers/fsl_lpspi_edma.c \
../drivers/fsl_lpuart.c \
../drivers/fsl_lpuart_cmsis.c \
../drivers/fsl_lpuart_edma.c \
../drivers/fsl_reset.c \
../drivers/fsl_spc.c 

C_DEPS += \
./drivers/fsl_clock.d \
./drivers/fsl_common.d \
./drivers/fsl_common_arm.d \
./drivers/fsl_edma.d \
./drivers/fsl_edma_soc.d \
./drivers/fsl_gpio.d \
./drivers/fsl_lpflexcomm.d \
./drivers/fsl_lpi2c.d \
./drivers/fsl_lpi2c_cmsis.d \
./drivers/fsl_lpi2c_edma.d \
./drivers/fsl_lpspi.d \
./drivers/fsl_lpspi_cmsis.d \
./drivers/fsl_lpspi_edma.d \
./drivers/fsl_lpuart.d \
./drivers/fsl_lpuart_cmsis.d \
./drivers/fsl_lpuart_edma.d \
./drivers/fsl_reset.d \
./drivers/fsl_spc.d 

OBJS += \
./drivers/fsl_clock.o \
./drivers/fsl_common.o \
./drivers/fsl_common_arm.o \
./drivers/fsl_edma.o \
./drivers/fsl_edma_soc.o \
./drivers/fsl_gpio.o \
./drivers/fsl_lpflexcomm.o \
./drivers/fsl_lpi2c.o \
./drivers/fsl_lpi2c_cmsis.o \
./drivers/fsl_lpi2c_edma.o \
./drivers/fsl_lpspi.o \
./drivers/fsl_lpspi_cmsis.o \
./drivers/fsl_lpspi_edma.o \
./drivers/fsl_lpuart.o \
./drivers/fsl_lpuart_cmsis.o \
./drivers/fsl_lpuart_edma.o \
./drivers/fsl_reset.o \
./drivers/fsl_spc.o 


# Each subdirectory must supply rules for building sources it contributes
drivers/%.o: ../drivers/%.c drivers/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -DCPU_MCXN947VDF -DCPU_MCXN947VDF_cm33 -DCPU_MCXN947VDF_cm33_core0 -DPRINTF_ADVANCED_ENABLE=1 -DMCUXPRESSO_SDK -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DNDEBUG -D__REDLIB__ -I"C:\Users\nxa11926\Documents\MCUXpressoIDE_11.9.1_2170\ACH_Test\frdmmcxn947_nmh1000_shield_mag_wakeup2\source" -I"C:\Users\nxa11926\Documents\MCUXpressoIDE_11.9.1_2170\ACH_Test\frdmmcxn947_nmh1000_shield_mag_wakeup2\gpio_driver" -I"C:\Users\nxa11926\Documents\MCUXpressoIDE_11.9.1_2170\ACH_Test\frdmmcxn947_nmh1000_shield_mag_wakeup2\drivers" -I"C:\Users\nxa11926\Documents\MCUXpressoIDE_11.9.1_2170\ACH_Test\frdmmcxn947_nmh1000_shield_mag_wakeup2\utilities" -I"C:\Users\nxa11926\Documents\MCUXpressoIDE_11.9.1_2170\ACH_Test\frdmmcxn947_nmh1000_shield_mag_wakeup2\interfaces" -I"C:\Users\nxa11926\Documents\MCUXpressoIDE_11.9.1_2170\ACH_Test\frdmmcxn947_nmh1000_shield_mag_wakeup2\sensors" -I"C:\Users\nxa11926\Documents\MCUXpressoIDE_11.9.1_2170\ACH_Test\frdmmcxn947_nmh1000_shield_mag_wakeup2\device" -I"C:\Users\nxa11926\Documents\MCUXpressoIDE_11.9.1_2170\ACH_Test\frdmmcxn947_nmh1000_shield_mag_wakeup2\startup" -I"C:\Users\nxa11926\Documents\MCUXpressoIDE_11.9.1_2170\ACH_Test\frdmmcxn947_nmh1000_shield_mag_wakeup2\component\uart" -I"C:\Users\nxa11926\Documents\MCUXpressoIDE_11.9.1_2170\ACH_Test\frdmmcxn947_nmh1000_shield_mag_wakeup2\component\lists" -I"C:\Users\nxa11926\Documents\MCUXpressoIDE_11.9.1_2170\ACH_Test\frdmmcxn947_nmh1000_shield_mag_wakeup2\CMSIS_driver\Include" -I"C:\Users\nxa11926\Documents\MCUXpressoIDE_11.9.1_2170\ACH_Test\frdmmcxn947_nmh1000_shield_mag_wakeup2\CMSIS" -I"C:\Users\nxa11926\Documents\MCUXpressoIDE_11.9.1_2170\ACH_Test\frdmmcxn947_nmh1000_shield_mag_wakeup2\board" -Os -fno-common -g -gdwarf-4 -mcpu=cortex-m33 -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m33 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-drivers

clean-drivers:
	-$(RM) ./drivers/fsl_clock.d ./drivers/fsl_clock.o ./drivers/fsl_common.d ./drivers/fsl_common.o ./drivers/fsl_common_arm.d ./drivers/fsl_common_arm.o ./drivers/fsl_edma.d ./drivers/fsl_edma.o ./drivers/fsl_edma_soc.d ./drivers/fsl_edma_soc.o ./drivers/fsl_gpio.d ./drivers/fsl_gpio.o ./drivers/fsl_lpflexcomm.d ./drivers/fsl_lpflexcomm.o ./drivers/fsl_lpi2c.d ./drivers/fsl_lpi2c.o ./drivers/fsl_lpi2c_cmsis.d ./drivers/fsl_lpi2c_cmsis.o ./drivers/fsl_lpi2c_edma.d ./drivers/fsl_lpi2c_edma.o ./drivers/fsl_lpspi.d ./drivers/fsl_lpspi.o ./drivers/fsl_lpspi_cmsis.d ./drivers/fsl_lpspi_cmsis.o ./drivers/fsl_lpspi_edma.d ./drivers/fsl_lpspi_edma.o ./drivers/fsl_lpuart.d ./drivers/fsl_lpuart.o ./drivers/fsl_lpuart_cmsis.d ./drivers/fsl_lpuart_cmsis.o ./drivers/fsl_lpuart_edma.d ./drivers/fsl_lpuart_edma.o ./drivers/fsl_reset.d ./drivers/fsl_reset.o ./drivers/fsl_spc.d ./drivers/fsl_spc.o

.PHONY: clean-drivers

