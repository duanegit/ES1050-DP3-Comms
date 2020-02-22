# ES1050-DP3-Comms
This Repository provides sample library code and a suggested messaging interface between the sensing and actuating subsystem components of Design Project3.

# Messaging Interface Library

## General MCU System
See the *Arduino/General* subdirectory.  This subdirectory contains a varied set of individual code samples demonstrating some basic, general systems level programming techniques that may likely be useful to students.

### Using Non-volatile Configuration Parameters
See the *ConfigParamSample.ino* file for a code example.  Requires additional library: 

**Description:**
The example demonstrates how store some user-configured or calibration parameters in non-volatile memory (EEPROM) so that information is available for system state during future booting of the system.

## Sensing Subsystems
See the *ArduinoLib/Sensing* subdirectory.  This subdirectory contains a varied set of individual code samples for some common sensors such as:
- Pushbutton with debouncing and modulo-N activation: *Mod4_PBExp.ino*
- Photoresistor: see *PhotoResExp.ino*
- IR Receiver (photodiode with bias resistors on PCB): see *IRRecvExp.ino*





## Actuating Subsystems
See the *ArduinoLib/Actuating* subdirectory.  This subdirectory contains a varied set of individual code samples for some common actuators such as:
- RGB LED 
- SG90 hobby servo motor: see *ServoExp.ino*
- 28BYJ-48 stepper motor with ULN2003 driver: see *StepperExp.ino*
- 16x2 LCD panel (I2C): see *LCDdisp.ino*
- LEDRGB 

### Servo Motor Control
See *ServoExp.ino* file for a code example.  Requires pre-installed additional library: *Servo*

**Description:**
The example demonstrates a couple key 



