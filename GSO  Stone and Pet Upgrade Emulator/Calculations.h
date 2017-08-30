#pragma once
#include "MyForm1.h"
#include "CostsAndChances.h"

using namespace std;
using namespace System;
using namespace System::IO;


// Logic for simulation of leveling pets. Takes starting level & target level along with parameters such as blessings and favor
// and returns gold, blessings, favor, essence, and attempts to reach level by reference
void PetCalc(int iInitialLevel, int iTargetLevel, int &EssRequired, double &GoldRequired, int &Attempts, int &Blessing, int &Favor, int &EndingLevel, bool bBlessing, bool bFavor) {
	int rand = 0;
	int Level = iInitialLevel;
	EssRequired = 0;
	GoldRequired = 0;
	Attempts = 0;
	Blessing = 0;
	Favor = 0;
	EndingLevel = 0;

	/*
	// Used for debug.log
	String^ filename = "debug.log";
	StreamWriter^ sw = gcnew StreamWriter(filename);
	*/

	// Random number obj
	Random^ rNum = gcnew Random();


	// while pet level  < target level
	while(Level < iTargetLevel) {

		// generate random number between 1 and 100
		// NOTE: Radnom->Next(min, max) includes min value but NOT max value.
		rand = rNum->Next(1, 101);
		// Add to gold, essence, favor, and blessing
		// count before adding levels 
		GoldRequired += aGold[Level];
		EssRequired += aEssence[Level];

		// If blessing is checked, add blessing used
		if (bBlessing) {
			Blessing += aBlessing[Level];
		}
		// If Favor is checked, add favor used
		if (bFavor) {

			// If level is NOT 10 or 20
			if ((Level != 10) && (Level != 20)) {
				Favor += aFavor[Level];
			}
		}

		/*
		// Debug logging
		sw->WriteLine(" ");
		sw->WriteLine(" ");
		sw->WriteLine("Attempting to level up!  Current Level: " + Level);
		sw->WriteLine("Random Numer : " + rand + " | Success if <= " + aSuccessRate[Level]);
		*/

		// If random number is <= success rate % then
		// pet level was successful
		if (rand <= aSuccessRate[Level]) {
			// Debug logging
			//sw->WriteLine("Successfully Leveled! ");
		
			// If Blessing is NOT being used
			if (!bBlessing) {
				Level++;

				// Debug Logging
				//sw->WriteLine("Success! No Blessing used. Level: " + Level);
			}

			// If Blessing IS being used
			else {
				// generate number for proc blessing
				// NOTE: Radnom->Next(min, max) includes min value but NOT max value.
				rand = rNum->Next(0, 6);

				// Debug Logging
				//sw->WriteLine("Blessing proc: " + rand + " | 0-2 = +1, 3-4 = +2, 5 = +3");

				// Level gained = +1, +2, or +3
				Level += aBlessingProc[rand];

				// Debug Logging
				//sw->WriteLine("Blessing +" + aBlessingProc[rand]);
			}
		}

		// Pet level up failed
		else {

			// Debug Logging
			//sw->WriteLine("Level Failed! ");

			// If pet level is NOT  10 or 20
			if ((Level != 10) && (Level != 20)) {

				//Debug Logging
				//sw->WriteLine("Level failure. Pet is NOT level 10 or 20.");

				// If NOT using favor, Level decrease
				if (!bFavor) {
					Level--;

					// Debug Logging
					//sw->WriteLine("^^^^ Not using Favor. Level is now: " + Level);
				}

				/*
				// [DEBUG LOGGING] If level failure & using blessing
				else {
					sw->WriteLine("Favor is being used. No Level Decrease!");
				}
				*/
			}
		}
		// Add 1 to attempts
		Attempts++;
	}
	
	// assign Level to EndingLevel
	EndingLevel = Level;
	
	/*
	// Debug Logging
	sw->WriteLine("Starting Level: " + iInitialLevel);
	sw->WriteLine("Target Level: " + iTargetLevel);
	sw->WriteLine("Ending Level: " + Level);
	sw->WriteLine(" ");
	sw->WriteLine("Total Attempts: " + Attempts);
	sw->WriteLine("Total Gold: " + GoldRequired);
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

	


	// Calculate the actual SC %
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

 