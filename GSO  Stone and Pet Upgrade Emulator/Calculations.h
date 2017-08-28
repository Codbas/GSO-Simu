#pragma once
#include "MyForm1.h"
#include "CostsAndChances.h"

using namespace std;
using namespace System;
using namespace System::IO;


// Logic for simulation of leveling pets. Takes starting level & target level along with parameters such as blessings and favor
// and returns gold, blessings, favor, essence, and attempts to reach level by reference
void PetCalc(int iInitialLevel, int iTargetLevel, int &EssRequired, double &GoldRequired, int &Attempts, int &Blessing, int &Favor, bool bBlessing, bool bFavor) {
	int rand = 0;
	int Level = iInitialLevel;
	String^ sGoldRequired = "";
	EssRequired = 0;
	GoldRequired = 0;
	Attempts = 0;
	Blessing = 0;
	Favor = 0;

	// Used for debug.log
	//String^ filename = "debug.log";
	//StreamWriter^ sw = gcnew StreamWriter(filename);

	// Random number obj
	Random^ rNum = gcnew Random();


	// while pet level  < target level
	while(Level < iTargetLevel) {

		// generate random number between 1 and 100
		rand = rNum->Next(1, 100);
		// Add to gold, essence, favor, and blessing
		// count before adding levels 
		GoldRequired += aGold[Level];
		EssRequired += aEssence[Level];
		Favor += aFavor[Level];
		Blessing += aBlessing[Level];

		// If random number is <= success rate % then
		// pet level was successful
		if (rand <= aSuccessRate[Level]) {
		
			// If Blessing is NOT being used
			if (!bBlessing) {
				Level++;
			}

			// If Blessing IS being used
			else {
				// generate number for proc blessing
				rand = rNum->Next(1, 6);
				// Level gained = +1, +2, or +3
				Level += aBlessingProc[rand];
			}
		}


		// Pet level up failed
		else {
		
			// If pet level is NOT  10 or 20
			if (Level != 10 && Level != 20){
				// NOT using favor, Level decrease
				if (!bFavor) {
					Level--;
				}
			}
		}
		// Add 1 to attempts
		Attempts++;
	}
	/*
	sGoldRequired = String::Format("{0:n0}", GoldRequired);
	sw->WriteLine("Starting Level: " + iInitialLevel);
	sw->WriteLine("Ending Level: " + Level);
	sw->WriteLine("Target Level: " + iTargetLevel);
	sw->WriteLine(" ");
	sw->WriteLine("Total Attempts: " + Attempts);
	sw->WriteLine("Total Gold: " + sGoldRequired);
	sw->WriteLine("Total Ess: " + EssRequired);
	sw->WriteLine("Total Blessing: " + Blessing);
	sw->WriteLine("Total Favor: " + Favor);
	// Close log file
	sw->Close();
	*/
}



// Simulates # of stones to get to target stone with given Super Combination Percent
// Returns # of stones it took & the simulated SC percentage
  void StoneCalc(int iInitialStone,  int iTargetStone, int iSCPercent, int &StonesRequired, float &ActualSC) {
	int iNormalCombo = 0;
	int iSuperCombo = 0;
	StonesRequired = 0;
	ActualSC = 0;

	


	
    ActualSC = ((iSuperCombo / (iNormalCombo + iSuperCombo)) * 100);
  }



  // return true if input is integer
  bool EvalInput(String^ iInitialLevel) {
	  int tbText = 0;

	  try {
		  tbText = Int32::Parse(iInitialLevel);
	  }

	  catch (System::FormatException^ pEx) {
		  return false;
	  }

	  catch (System::OverflowException^ pEx) {
		  return false;
	  }
	  return true;
  }


  
  // returns true if number is between lowest and highest values
  bool EvalRange(int tbNum, int lowest, int highest) {
	  if (tbNum <= highest && tbNum >= lowest) {
		  return true;
	  }
	  return false;
  }

 