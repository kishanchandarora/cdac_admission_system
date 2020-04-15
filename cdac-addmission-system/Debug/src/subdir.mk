################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AdmissionSystem.cpp \
../src/Center.cpp \
../src/Course.cpp \
../src/Student.cpp \
../src/cdac-addmission-system.cpp 

OBJS += \
./src/AdmissionSystem.o \
./src/Center.o \
./src/Course.o \
./src/Student.o \
./src/cdac-addmission-system.o 

CPP_DEPS += \
./src/AdmissionSystem.d \
./src/Center.d \
./src/Course.d \
./src/Student.d \
./src/cdac-addmission-system.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


