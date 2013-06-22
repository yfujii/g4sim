//---------------------------------------------------------------------------//
//Description: Messenger class
//Author: Wu Chen(wuchen@mail.ihep.ac.cn)
//Created: 17 Oct, 2012
//Comment:
//---------------------------------------------------------------------------//

#ifndef MyDetectorManagerMessenger_h
#define MyDetectorManagerMessenger_h 1

#include "globals.hh"
#include "G4UImessenger.hh"

class MyDetectorManager;
class G4UIdirectory;
class G4UIcmdWithAString;

class MyDetectorManagerMessenger: public G4UImessenger
{
  public:
    MyDetectorManagerMessenger(MyDetectorManager* );
   ~MyDetectorManagerMessenger();
    
    void SetNewValue(G4UIcommand*, G4String);
    
  private:
    MyDetectorManager* m_MyDetectorManager;
    
    G4UIdirectory*             g4simDir;
    G4UIdirectory*             detDir;
    G4UIcmdWithAString*        ReadCardCmd;
};

#endif
