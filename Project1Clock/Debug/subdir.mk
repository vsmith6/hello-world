################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Clock.cpp \
../StartClock.cpp \
../displayClock.cpp \
../displayMenu.cpp \
../getLocalHour.cpp \
../getLocalMin.cpp \
../getLocalSec.cpp 

OBJS += \
./Clock.o \
./StartClock.o \
./displayClock.o \
./displayMenu.o \
./getLocalHour.o \
./getLocalMin.o \
./getLocalSec.o 

CPP_DEPS += \
./Clock.d \
./StartClock.d \
./displayClock.d \
./displayMenu.d \
./getLocalHour.d \
./getLocalMin.d \
./getLocalSec.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


