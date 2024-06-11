################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../gpio_driver/gpio_driver.c \
../gpio_driver/gpio_driver_irq.c 

C_DEPS += \
./gpio_driver/gpio_driver.d \
./gpio_driver/gpio_driver_irq.d 

OBJS += \
./gpio_driver/gpio_driver.o \
./gpio_driver/gpio_driver_irq.o 


# Each subdirectory must supply rules for building sources it contributes
gpio_driver/%.o: ../gpio_driver/%.c gpio_driver/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -DCPU_MCXN947VDF -DCPU_MCXN947VDF_cm33 -DCPU_MCXN947VDF_cm33_core0 -DPRINTF_ADVANCED_ENABLE=1 -DMCUXPRESSO_SDK -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DNDEBUG -D__REDLIB__ -I"C:\Users\nxa11926\Documents\MCUXpressoIDE_11.9.1_2170\ACH_Test\frdmmcxn947_nmh1000_shield_mag_wakeup2\source" -I"C:\Users\nxa11926\Documents\MCUXpressoIDE_11.9.1_2170\ACH_Test\frdmmcxn947_nmh1000_shield_mag_wakeup2\gpio_driver" -I"C:\Users\nxa11926\Documents\MCUXpressoIDE_11.9.1_2170\ACH_Test\frdmmcxn947_nmh1000_shield_mag_wakeup2\drivers" -I"C:\Users\nxa11926\Documents\MCUXpressoIDE_11.9.1_2170\ACH_Test\frdmmcxn947_nmh1000_shield_mag_wakeup2\utilities" -I"C:\Users\nxa11926\Documents\MCUXpressoIDE_11.9.1_2170\ACH_Test\frdmmcxn947_nmh1000_shield_mag_wakeup2\interfaces" -I"C:\Users\nxa11926\Documents\MCUXpressoIDE_11.9.1_2170\ACH_Test\frdmmcxn947_nmh1000_shield_mag_wakeup2\sensors" -I"C:\Users\nxa11926\Documents\MCUXpressoIDE_11.9.1_2170\ACH_Test\frdmmcxn947_nmh1000_shield_mag_wakeup2\device" -I"C:\Users\nxa11926\Documents\MCUXpressoIDE_11.9.1_2170\ACH_Test\frdmmcxn947_nmh1000_shield_mag_wakeup2\startup" -I"C:\Users\nxa11926\Documents\MCUXpressoIDE_11.9.1_2170\ACH_Test\frdmmcxn947_nmh1000_shield_mag_wakeup2\component\uart" -I"C:\Users\nxa11926\Documents\MCUXpressoIDE_11.9.1_2170\ACH_Test\frdmmcxn947_nmh1000_shield_mag_wakeup2\component\lists" -I"C:\Users\nxa11926\Documents\MCUXpressoIDE_11.9.1_2170\ACH_Test\frdmmcxn947_nmh1000_shield_mag_wakeup2\CMSIS_driver\Include" -I"C:\Users\nxa11926\Documents\MCUXpressoIDE_11.9.1_2170\ACH_Test\frdmmcxn947_nmh1000_shield_mag_wakeup2\CMSIS" -I"C:\Users\nxa11926\Documents\MCUXpressoIDE_11.9.1_2170\ACH_Test\frdmmcxn947_nmh1000_shield_mag_wakeup2\board" -Os -fno-common -g -gdwarf-4 -mcpu=cortex-m33 -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m33 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-gpio_driver

clean-gpio_driver:
	-$(RM) ./gpio_driver/gpio_driver.d ./gpio_driver/gpio_driver.o ./gpio_driver/gpio_driver_irq.d ./gpio_driver/gpio_driver_irq.o

.PHONY: clean-gpio_driver

