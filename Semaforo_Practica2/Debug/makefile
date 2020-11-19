################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32F4xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
Semaforo_Practica2.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Semaforo_Practica2.list \

OBJCOPY_BIN += \
Semaforo_Practica2.bin \


# All Target
all: Semaforo_Practica2.elf secondary-outputs

# Tool invocations
Semaforo_Practica2.elf: $(OBJS) $(USER_OBJS) /home/wels/Documents/STM32/Semaforo_Practica2/STM32F401RETX_FLASH.ld
	arm-none-eabi-gcc -o "Semaforo_Practica2.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"/home/wels/Documents/STM32/Semaforo_Practica2/STM32F401RETX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Semaforo_Practica2.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Semaforo_Practica2.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Semaforo_Practica2.list"
	@echo 'Finished building: $@'
	@echo ' '

Semaforo_Practica2.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "Semaforo_Practica2.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
