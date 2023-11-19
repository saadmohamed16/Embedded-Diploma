################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
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
Embedded\ c2.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Embedded\ c2.list \

OBJCOPY_HEX += \
Embedded\ c2.hex \

OBJCOPY_BIN += \
Embedded\ c2.bin \


# All Target
all: Embedded\ c2.elf secondary-outputs

# Tool invocations
Embedded\ c2.elf: $(OBJS) $(USER_OBJS) C:\Users\a7med\Downloads\Learn\ in\ Depth\Online_Diploma\Embedded\ C\Embedded\ c2\STM32F103C6TX_FLASH.ld
	arm-none-eabi-gcc -o "Embedded c2.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"C:\Users\a7med\Downloads\Learn in Depth\Online_Diploma\Embedded C\Embedded c2\STM32F103C6TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Embedded c2.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Embedded\ c2.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Embedded c2.list"
	@echo 'Finished building: $@'
	@echo ' '

Embedded\ c2.hex: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "Embedded c2.hex"
	@echo 'Finished building: $@'
	@echo ' '

Embedded\ c2.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "Embedded c2.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
