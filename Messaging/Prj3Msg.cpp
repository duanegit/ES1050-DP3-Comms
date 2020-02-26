/* Prj3Msgs.h - Arduino library for packing/unpacking control messages for between
                Sensing and Actuating subsystems divided among Design Project3 assign problems.
                
Created by Duane Jacques, PhD; February 21, 2020
Revision history:   
Version 0.1     Feb-21-2020     - Initial creation
*/

#include "Prj3Msgs.h"

#define     DEV_PWR     0x01
#define     DEV_PLAY    0x02
#define     DEV_PAUSE    0x02
#define     DEV_STOP    0x03
#define     DEV_VOL_UP  0x04
#define     DEV_VOL_DN  0x05
#define     DEV_VOL_VL  0x06    //set volume to specific value
#define     DEV_CH_UP   0x07
#define     DEV_CH_DN   0x08
#define     DEV_CH_VL   0x09    //set channel to specific value

