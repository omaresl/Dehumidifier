################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
INO_SRCS += \
..\Dehumidifier.ino 

CPP_SRCS += \
..\app_HwSw.cpp \
..\sloeber.ino.cpp 

LINK_OBJ += \
.\app_HwSw.cpp.o \
.\sloeber.ino.cpp.o 

INO_DEPS += \
.\Dehumidifier.ino.d 

CPP_DEPS += \
.\app_HwSw.cpp.d \
.\sloeber.ino.cpp.d 


# Each subdirectory must supply rules for building sources it contributes
Dehumidifier.o: ..\Dehumidifier.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Eclipse\eclipse\/arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\Eclipse\eclipse\arduinoPlugin\packages\arduino\hardware\avr\1.6.21\cores\arduino" -I"C:\Eclipse\eclipse\arduinoPlugin\packages\arduino\hardware\avr\1.6.21\variants\mega" -I"C:\Eclipse\eclipse\arduinoPlugin\libraries\FreeRTOS\10.0.0-10" -I"C:\Eclipse\workspace\Dehumidifier\Dehumidifier" -I"C:\Eclipse\workspace\Dehumidifier\Dehumidifier\Periodic_Tasks" -I"C:\Eclipse\eclipse\arduinoPlugin\libraries\UTFT\1.0.0" -I"C:\Eclipse\eclipse\arduinoPlugin\libraries\UTFT_Buttons\1.0.0" -I"C:\Eclipse\eclipse\arduinoPlugin\libraries\Adafruit_Unified_Sensor\1.0.2" -I"C:\Eclipse\eclipse\arduinoPlugin\libraries\DHT_sensor_library\1.3.0" -I"C:\Eclipse\eclipse\arduinoPlugin\libraries\URTouch\1.0.0" -I"C:\Eclipse\eclipse\arduinoPlugin\libraries\FreeRTOS\10.0.0-10\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

app_HwSw.cpp.o: ..\app_HwSw.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Eclipse\eclipse\/arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\Eclipse\eclipse\arduinoPlugin\packages\arduino\hardware\avr\1.6.21\cores\arduino" -I"C:\Eclipse\eclipse\arduinoPlugin\packages\arduino\hardware\avr\1.6.21\variants\mega" -I"C:\Eclipse\eclipse\arduinoPlugin\libraries\FreeRTOS\10.0.0-10" -I"C:\Eclipse\workspace\Dehumidifier\Dehumidifier" -I"C:\Eclipse\workspace\Dehumidifier\Dehumidifier\Periodic_Tasks" -I"C:\Eclipse\eclipse\arduinoPlugin\libraries\UTFT\1.0.0" -I"C:\Eclipse\eclipse\arduinoPlugin\libraries\UTFT_Buttons\1.0.0" -I"C:\Eclipse\eclipse\arduinoPlugin\libraries\Adafruit_Unified_Sensor\1.0.2" -I"C:\Eclipse\eclipse\arduinoPlugin\libraries\DHT_sensor_library\1.3.0" -I"C:\Eclipse\eclipse\arduinoPlugin\libraries\URTouch\1.0.0" -I"C:\Eclipse\eclipse\arduinoPlugin\libraries\FreeRTOS\10.0.0-10\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '

sloeber.ino.cpp.o: ..\sloeber.ino.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Eclipse\eclipse\/arduinoPlugin/packages/arduino/tools/avr-gcc/4.9.2-atmel3.5.4-arduino2/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10802 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\Eclipse\eclipse\arduinoPlugin\packages\arduino\hardware\avr\1.6.21\cores\arduino" -I"C:\Eclipse\eclipse\arduinoPlugin\packages\arduino\hardware\avr\1.6.21\variants\mega" -I"C:\Eclipse\eclipse\arduinoPlugin\libraries\FreeRTOS\10.0.0-10" -I"C:\Eclipse\workspace\Dehumidifier\Dehumidifier" -I"C:\Eclipse\workspace\Dehumidifier\Dehumidifier\Periodic_Tasks" -I"C:\Eclipse\eclipse\arduinoPlugin\libraries\UTFT\1.0.0" -I"C:\Eclipse\eclipse\arduinoPlugin\libraries\UTFT_Buttons\1.0.0" -I"C:\Eclipse\eclipse\arduinoPlugin\libraries\Adafruit_Unified_Sensor\1.0.2" -I"C:\Eclipse\eclipse\arduinoPlugin\libraries\DHT_sensor_library\1.3.0" -I"C:\Eclipse\eclipse\arduinoPlugin\libraries\URTouch\1.0.0" -I"C:\Eclipse\eclipse\arduinoPlugin\libraries\FreeRTOS\10.0.0-10\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '


