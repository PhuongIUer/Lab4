################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32F1xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
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

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := Lab4_TraMinhPhuong_ITITIU21286
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
Lab4_TraMinhPhuong_ITITIU21286.elf \

MAP_FILES += \
Lab4_TraMinhPhuong_ITITIU21286.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Lab4_TraMinhPhuong_ITITIU21286.list \

OBJCOPY_HEX += \
Lab4_TraMinhPhuong_ITITIU21286.hex \

OBJCOPY_BIN += \
Lab4_TraMinhPhuong_ITITIU21286.bin \


# All Target
all: main-build

# Main-build Target
main-build: Lab4_TraMinhPhuong_ITITIU21286.elf secondary-outputs

# Tool invocations
Lab4_TraMinhPhuong_ITITIU21286.elf Lab4_TraMinhPhuong_ITITIU21286.map: $(OBJS) $(USER_OBJS) C:\Users\PC\Downloads\MPS_Lab4_MNHoang_ITITIU21208-main\Lab4_TraMinhPhuong_ITITIU21286\STM32F103C6UX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "Lab4_TraMinhPhuong_ITITIU21286.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"C:\Users\PC\Downloads\MPS_Lab4_MNHoang_ITITIU21208-main\Lab4_TraMinhPhuong_ITITIU21286\STM32F103C6UX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Lab4_TraMinhPhuong_ITITIU21286.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Lab4_TraMinhPhuong_ITITIU21286.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Lab4_TraMinhPhuong_ITITIU21286.list"
	@echo 'Finished building: $@'
	@echo ' '

Lab4_TraMinhPhuong_ITITIU21286.hex: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "Lab4_TraMinhPhuong_ITITIU21286.hex"
	@echo 'Finished building: $@'
	@echo ' '

Lab4_TraMinhPhuong_ITITIU21286.bin: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "Lab4_TraMinhPhuong_ITITIU21286.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) Lab4_TraMinhPhuong_ITITIU21286.bin Lab4_TraMinhPhuong_ITITIU21286.elf Lab4_TraMinhPhuong_ITITIU21286.hex Lab4_TraMinhPhuong_ITITIU21286.list Lab4_TraMinhPhuong_ITITIU21286.map default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
