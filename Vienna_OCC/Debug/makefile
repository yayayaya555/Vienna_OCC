################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := D:/ti/ccsv6/tools/compiler/ti-cgt-c2000_6.4.2

ORDERED_OBJS += \
"./ADC_config.obj" \
"./PWM_config.obj" \
"./Spi.obj" \
"./main.obj" \
"./sci.obj" \
"./Lib_from_Ti/Lib_source/DSP2833x_ADC_cal.obj" \
"./Lib_from_Ti/Lib_source/DSP2833x_Adc.obj" \
"./Lib_from_Ti/Lib_source/DSP2833x_CSMPasswords.obj" \
"./Lib_from_Ti/Lib_source/DSP2833x_CodeStartBranch.obj" \
"./Lib_from_Ti/Lib_source/DSP2833x_CpuTimers.obj" \
"./Lib_from_Ti/Lib_source/DSP2833x_DBGIER.obj" \
"./Lib_from_Ti/Lib_source/DSP2833x_DMA.obj" \
"./Lib_from_Ti/Lib_source/DSP2833x_DefaultIsr.obj" \
"./Lib_from_Ti/Lib_source/DSP2833x_DisInt.obj" \
"./Lib_from_Ti/Lib_source/DSP2833x_ECan.obj" \
"./Lib_from_Ti/Lib_source/DSP2833x_ECap.obj" \
"./Lib_from_Ti/Lib_source/DSP2833x_EPwm.obj" \
"./Lib_from_Ti/Lib_source/DSP2833x_EQep.obj" \
"./Lib_from_Ti/Lib_source/DSP2833x_GlobalVariableDefs.obj" \
"./Lib_from_Ti/Lib_source/DSP2833x_Gpio.obj" \
"./Lib_from_Ti/Lib_source/DSP2833x_I2C.obj" \
"./Lib_from_Ti/Lib_source/DSP2833x_Mcbsp.obj" \
"./Lib_from_Ti/Lib_source/DSP2833x_MemCopy.obj" \
"./Lib_from_Ti/Lib_source/DSP2833x_PieCtrl.obj" \
"./Lib_from_Ti/Lib_source/DSP2833x_PieVect.obj" \
"./Lib_from_Ti/Lib_source/DSP2833x_Sci.obj" \
"./Lib_from_Ti/Lib_source/DSP2833x_Spi.obj" \
"./Lib_from_Ti/Lib_source/DSP2833x_SysCtrl.obj" \
"./Lib_from_Ti/Lib_source/DSP2833x_Xintf.obj" \
"./Lib_from_Ti/Lib_source/DSP2833x_usDelay.obj" \
"../28335_RAM_lnk.cmd" \
"../Cmd/DSP2833x_Headers_nonBIOS.cmd" \
$(GEN_CMDS__FLAG) \
-l"libc.a" \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include Lib_from_Ti/Lib_source/subdir_vars.mk
-include Cmd/subdir_vars.mk
-include subdir_rules.mk
-include Lib_from_Ti/Lib_source/subdir_rules.mk
-include Cmd/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
Vienna_OCC.out \

EXE_OUTPUTS__QUOTED += \
"Vienna_OCC.out" \

BIN_OUTPUTS += \
Vienna_OCC.hex \

BIN_OUTPUTS__QUOTED += \
"Vienna_OCC.hex" \


# All Target
all: Vienna_OCC.out

# Tool invocations
Vienna_OCC.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: $@'
	@echo 'Invoking: C2000 Linker'
	"D:/ti/ccsv6/tools/compiler/ti-cgt-c2000_6.4.2/bin/cl2000" -v28 -ml -mt -g --diag_warning=225 --display_error_number --diag_wrap=off -z -m"Vienna_OCC.map" --stack_size=0x300 --warn_sections -i"D:/ti/ccsv6/tools/compiler/ti-cgt-c2000_6.4.2/lib" -i"D:/ti/ccsv6/tools/compiler/ti-cgt-c2000_6.4.2/include" --reread_libs --display_error_number --diag_wrap=off --xml_link_info="Vienna_OCC_linkInfo.xml" --rom_model -o "Vienna_OCC.out" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

Vienna_OCC.hex: $(EXE_OUTPUTS)
	@echo 'Invoking: C2000 Hex Utility'
	"D:/ti/ccsv6/tools/compiler/ti-cgt-c2000_6.4.2/bin/hex2000"  -o "Vienna_OCC.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXE_OUTPUTS__QUOTED)$(BIN_OUTPUTS__QUOTED)
	-$(RM) "ADC_config.pp" "PWM_config.pp" "Spi.pp" "main.pp" "sci.pp" "Lib_from_Ti\Lib_source\DSP2833x_Adc.pp" "Lib_from_Ti\Lib_source\DSP2833x_CpuTimers.pp" "Lib_from_Ti\Lib_source\DSP2833x_DMA.pp" "Lib_from_Ti\Lib_source\DSP2833x_DefaultIsr.pp" "Lib_from_Ti\Lib_source\DSP2833x_ECan.pp" "Lib_from_Ti\Lib_source\DSP2833x_ECap.pp" "Lib_from_Ti\Lib_source\DSP2833x_EPwm.pp" "Lib_from_Ti\Lib_source\DSP2833x_EQep.pp" "Lib_from_Ti\Lib_source\DSP2833x_GlobalVariableDefs.pp" "Lib_from_Ti\Lib_source\DSP2833x_Gpio.pp" "Lib_from_Ti\Lib_source\DSP2833x_I2C.pp" "Lib_from_Ti\Lib_source\DSP2833x_Mcbsp.pp" "Lib_from_Ti\Lib_source\DSP2833x_MemCopy.pp" "Lib_from_Ti\Lib_source\DSP2833x_PieCtrl.pp" "Lib_from_Ti\Lib_source\DSP2833x_PieVect.pp" "Lib_from_Ti\Lib_source\DSP2833x_Sci.pp" "Lib_from_Ti\Lib_source\DSP2833x_Spi.pp" "Lib_from_Ti\Lib_source\DSP2833x_SysCtrl.pp" "Lib_from_Ti\Lib_source\DSP2833x_Xintf.pp" 
	-$(RM) "ADC_config.obj" "PWM_config.obj" "Spi.obj" "main.obj" "sci.obj" "Lib_from_Ti\Lib_source\DSP2833x_ADC_cal.obj" "Lib_from_Ti\Lib_source\DSP2833x_Adc.obj" "Lib_from_Ti\Lib_source\DSP2833x_CSMPasswords.obj" "Lib_from_Ti\Lib_source\DSP2833x_CodeStartBranch.obj" "Lib_from_Ti\Lib_source\DSP2833x_CpuTimers.obj" "Lib_from_Ti\Lib_source\DSP2833x_DBGIER.obj" "Lib_from_Ti\Lib_source\DSP2833x_DMA.obj" "Lib_from_Ti\Lib_source\DSP2833x_DefaultIsr.obj" "Lib_from_Ti\Lib_source\DSP2833x_DisInt.obj" "Lib_from_Ti\Lib_source\DSP2833x_ECan.obj" "Lib_from_Ti\Lib_source\DSP2833x_ECap.obj" "Lib_from_Ti\Lib_source\DSP2833x_EPwm.obj" "Lib_from_Ti\Lib_source\DSP2833x_EQep.obj" "Lib_from_Ti\Lib_source\DSP2833x_GlobalVariableDefs.obj" "Lib_from_Ti\Lib_source\DSP2833x_Gpio.obj" "Lib_from_Ti\Lib_source\DSP2833x_I2C.obj" "Lib_from_Ti\Lib_source\DSP2833x_Mcbsp.obj" "Lib_from_Ti\Lib_source\DSP2833x_MemCopy.obj" "Lib_from_Ti\Lib_source\DSP2833x_PieCtrl.obj" "Lib_from_Ti\Lib_source\DSP2833x_PieVect.obj" "Lib_from_Ti\Lib_source\DSP2833x_Sci.obj" 
	-$(RM) "Lib_from_Ti\Lib_source\DSP2833x_Spi.obj" "Lib_from_Ti\Lib_source\DSP2833x_SysCtrl.obj" "Lib_from_Ti\Lib_source\DSP2833x_Xintf.obj" "Lib_from_Ti\Lib_source\DSP2833x_usDelay.obj" 
	-$(RM) "Lib_from_Ti\Lib_source\DSP2833x_ADC_cal.pp" "Lib_from_Ti\Lib_source\DSP2833x_CSMPasswords.pp" "Lib_from_Ti\Lib_source\DSP2833x_CodeStartBranch.pp" "Lib_from_Ti\Lib_source\DSP2833x_DBGIER.pp" "Lib_from_Ti\Lib_source\DSP2833x_DisInt.pp" "Lib_from_Ti\Lib_source\DSP2833x_usDelay.pp" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

