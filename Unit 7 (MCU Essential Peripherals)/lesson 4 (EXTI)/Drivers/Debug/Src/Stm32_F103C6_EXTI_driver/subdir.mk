################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/Stm32_F103C6_EXTI_driver/Stm32_F103C6_EXTI_driver.c 

OBJS += \
./Src/Stm32_F103C6_EXTI_driver/Stm32_F103C6_EXTI_driver.o 

C_DEPS += \
./Src/Stm32_F103C6_EXTI_driver/Stm32_F103C6_EXTI_driver.d 


# Each subdirectory must supply rules for building sources it contributes
Src/Stm32_F103C6_EXTI_driver/Stm32_F103C6_EXTI_driver.o: ../Src/Stm32_F103C6_EXTI_driver/Stm32_F103C6_EXTI_driver.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"C:/Users/Mohamed-pc/Desktop/Assignments/Unit 7/lesson 4/Drivers/HAL/includes" -I"C:/Users/Mohamed-pc/Desktop/Assignments/Unit 7/lesson 4/Drivers/Stm32_F103C6_Drivers/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Src/Stm32_F103C6_EXTI_driver/Stm32_F103C6_EXTI_driver.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

