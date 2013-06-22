//---------------------------------------------------------------------------//
//Description: Deal with persistency
//Author: Wu Chen(wuchen@mail.ihep.ac.cn)
//Created: 17 Oct, 2012
//Comment:
//---------------------------------------------------------------------------//

#ifndef MyAnalysisSvc_h
#define MyAnalysisSvc_h 1

#include "globals.hh"

class G4Step;
class G4Event;
class G4Track;
class G4Run;

class MyAnalysisSvcMessenger;
class MyRoot;
class EventHeaderSvc;
class MyDetectorManager;
class McTruthSvc;
class ProcessCountingSvc;
class MyTriggerSvc;

class MyAnalysisSvc
{
  public:
    MyAnalysisSvc();
     ~MyAnalysisSvc();

    static MyAnalysisSvc* GetMyAnalysisSvc();
		void set_out_card(G4String filename);

		void set_ofile_name(G4String& val){ ofile_name = val; };
		void set_tree_name(G4String& val){ tree_name = val; };
		void set_run_name(G4String& val){ run_name = val; };

		void ReadOutputCard(G4String filename);
		int  GetRunID(){return run_num;};

		void BeginOfRunAction();
	  void EndOfRunAction(const G4Run*);
		void PreUserTrackingAction(const G4Track*);
		void PostUserTrackingAction(const G4Track*);
	  void BeginOfEventAction();
	  void EndOfEventAction(const G4Event*);
	  void InitialStepAction(const G4Step*);
	  void SteppingAction(const G4Step*);
	  void ASDI(G4String);
	  void PSDI(G4String);

  private:
    static MyAnalysisSvc* fMyAnalysisSvc;
		MyAnalysisSvcMessenger* pMyAnalysisSvcMessenger;

		G4String out_card;
		G4String run_name;
		G4String ofile_name;
		G4String tree_name;
		int run_num;
		int fAutoSave;
		int fCircular;
		int fVerbose;
		int fPrintModule;

		clock_t t_begin;
		clock_t t_end;

	  MyRoot* pMyRoot;
	  EventHeaderSvc* pEventHeaderSvc;
	  MyDetectorManager* pMyDetectorManager;
	  McTruthSvc* pMcTruthSvc;
	  ProcessCountingSvc* pProcessCountingSvc;
	  MyTriggerSvc* pMyTriggerSvc;

};

#endif