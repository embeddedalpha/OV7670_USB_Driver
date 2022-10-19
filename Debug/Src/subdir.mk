################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/Console.c \
../Src/GPIO.c \
../Src/I2C.c \
../Src/OV7670.c \
../Src/main.c \
../Src/syscalls.c \
../Src/sysmem.c \
../Src/system_stm32f4xx.c 

OBJS += \
./Src/Console.o \
./Src/GPIO.o \
./Src/I2C.o \
./Src/OV7670.o \
./Src/main.o \
./Src/syscalls.o \
./Src/sysmem.o \
./Src/system_stm32f4xx.o 

C_DEPS += \
./Src/Console.d \
./Src/GPIO.d \
./Src/I2C.d \
./Src/OV7670.d \
./Src/main.d \
./Src/syscalls.d \
./Src/sysmem.d \
./Src/system_stm32f4xx.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F411CEUx -c -I../Inc -I"C:/Users/Kunal/STM32CubeIDE/STM32F411_Workspace/STM32F411_USB_Driver/Inc/CMSIS/Include" -I"C:/Users/Kunal/STM32CubeIDE/STM32F411_Workspace/OV7670_USB_Driver/Inc/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/Kunal/STM32CubeIDE/STM32F411_Workspace/OV7670_USB_Driver/Inc/CMSIS/Device" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/Console.d ./Src/Console.o ./Src/Console.su ./Src/GPIO.d ./Src/GPIO.o ./Src/GPIO.su ./Src/I2C.d ./Src/I2C.o ./Src/I2C.su ./Src/OV7670.d ./Src/OV7670.o ./Src/OV7670.su ./Src/main.d ./Src/main.o ./Src/main.su ./Src/syscalls.d ./Src/syscalls.o ./Src/syscalls.su ./Src/sysmem.d ./Src/sysmem.o ./Src/sysmem.su ./Src/system_stm32f4xx.d ./Src/system_stm32f4xx.o ./Src/system_stm32f4xx.su

.PHONY: clean-Src

