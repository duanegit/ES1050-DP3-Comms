/* Prj3Msgs.h - Arduino library for packing/unpacking control messages for between
                Sensing and Actuating subsystems divided among Design Project3 assign problems.
                
Created by Duane Jacques, PhD; February 21, 2020
Revision history:   
Version 0.1     Feb-21-2020     - Initial creation
*/

#ifndef Prj3Msgs_h
#define Prj3Msgs_h

#ifndef ARDUINO 
//    #include <Arduino.h>
#endif

typedef enum _remoteCmds {_unknown = -1, _idle, _pwr_cmd, _play_cmd, _pause_cmd, _stop_cmd, _volUP_cmd, volDN_cmd, volVAL_cmd, _chanUP_cmd, _chanDN_cmd, _chanVAL_cmd } remoteCmds;


class Prj3Msgs
{
  public:
    Prj3Msgs(byte msgSet); // default constructor

    int checkRTMsgCount(); // check for count of available runtime message entries
    int addRunTimeMsg(String msgText); // add to the limited list of runtime messages

  private: // private member variables
    String _RunTimeMsgArray[10];

  private: // private member functions  
    remoteCmds _lastcmd, _nextcmd;



};


#endif // end of Prj3Msgs_h
