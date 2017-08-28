#pragma once



namespace GSOStoneandPetUpgradeSimulator {
	#include "Calculations.h";
	#include "CostsAndChances.h";
	#include <math.h>
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabs;
	private: System::Windows::Forms::TabPage^  tStones;
	private: System::Windows::Forms::Label^  lInitialStone;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::TabPage^  tPets;
	private: System::Windows::Forms::Label^  lTargetStone;
	private: System::Windows::Forms::TextBox^  tbSCInput;
	private: System::Windows::Forms::Label^  lSuperCombination;
	private: System::Windows::Forms::Label^  lStoneTabInfo;
	private: System::Windows::Forms::Button^  bSimulateCombination;
	private: System::Windows::Forms::Label^  lActualSC;
	private: System::Windows::Forms::Label^  lTotalStones;
	private: System::Windows::Forms::Label^  lPetResultsEss;
	private: System::Windows::Forms::TextBox^  tbTargetLevel;
	private: System::Windows::Forms::TextBox^  tbStartingLevel;
	private: System::Windows::Forms::Button^  bPetCalculate;
	private: System::Windows::Forms::Label^  lTargetLevel;
	private: System::Windows::Forms::Label^  lStartingLevel;
	private: System::Windows::Forms::Label^  lPetTabInfo;
	private: System::Windows::Forms::Label^  lPetResultsTries;
	private: System::Windows::Forms::ComboBox^  cbTargetStone;
	private: System::Windows::Forms::ComboBox^  cbInitialStone;
	private: System::Windows::Forms::Label^  lPetGold;
	private: System::Windows::Forms::Label^  lStoneError;
	private: System::Windows::Forms::Label^  lPetError;
	private: System::Windows::Forms::CheckBox^  cbFavor;
	private: System::Windows::Forms::CheckBox^  cbBlessing;
	private: System::Windows::Forms::Label^  lFavor;
	private: System::Windows::Forms::Label^  lBlessing;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabs = (gcnew System::Windows::Forms::TabControl());
			this->tStones = (gcnew System::Windows::Forms::TabPage());
			this->lStoneError = (gcnew System::Windows::Forms::Label());
			this->cbTargetStone = (gcnew System::Windows::Forms::ComboBox());
			this->cbInitialStone = (gcnew System::Windows::Forms::ComboBox());
			this->lActualSC = (gcnew System::Windows::Forms::Label());
			this->lTotalStones = (gcnew System::Windows::Forms::Label());
			this->tbSCInput = (gcnew System::Windows::Forms::TextBox());
			this->lSuperCombination = (gcnew System::Windows::Forms::Label());
			this->lStoneTabInfo = (gcnew System::Windows::Forms::Label());
			this->bSimulateCombination = (gcnew System::Windows::Forms::Button());
			this->lTargetStone = (gcnew System::Windows::Forms::Label());
			this->lInitialStone = (gcnew System::Windows::Forms::Label());
			this->tPets = (gcnew System::Windows::Forms::TabPage());
			this->lFavor = (gcnew System::Windows::Forms::Label());
			this->lBlessing = (gcnew System::Windows::Forms::Label());
			this->cbFavor = (gcnew System::Windows::Forms::CheckBox());
			this->cbBlessing = (gcnew System::Windows::Forms::CheckBox());
			this->lPetError = (gcnew System::Windows::Forms::Label());
			this->lPetGold = (gcnew System::Windows::Forms::Label());
			this->lPetResultsTries = (gcnew System::Windows::Forms::Label());
			this->lPetResultsEss = (gcnew System::Windows::Forms::Label());
			this->tbTargetLevel = (gcnew System::Windows::Forms::TextBox());
			this->tbStartingLevel = (gcnew System::Windows::Forms::TextBox());
			this->bPetCalculate = (gcnew System::Windows::Forms::Button());
			this->lTargetLevel = (gcnew System::Windows::Forms::Label());
			this->lStartingLevel = (gcnew System::Windows::Forms::Label());
			this->lPetTabInfo = (gcnew System::Windows::Forms::Label());
			this->tabs->SuspendLayout();
			this->tStones->SuspendLayout();
			this->tPets->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabs
			// 
			this->tabs->Controls->Add(this->tStones);
			this->tabs->Controls->Add(this->tPets);
			this->tabs->Location = System::Drawing::Point(-3, -1);
			this->tabs->Name = L"tabs";
			this->tabs->SelectedIndex = 0;
			this->tabs->Size = System::Drawing::Size(495, 343);
			this->tabs->TabIndex = 0;
			this->tabs->Tag = L"";
			// 
			// tStones
			// 
			this->tStones->Controls->Add(this->lStoneError);
			this->tStones->Controls->Add(this->cbTargetStone);
			this->tStones->Controls->Add(this->cbInitialStone);
			this->tStones->Controls->Add(this->lActualSC);
			this->tStones->Controls->Add(this->lTotalStones);
			this->tStones->Controls->Add(this->tbSCInput);
			this->tStones->Controls->Add(this->lSuperCombination);
			this->tStones->Controls->Add(this->lStoneTabInfo);
			this->tStones->Controls->Add(this->bSimulateCombination);
			this->tStones->Controls->Add(this->lTargetStone);
			this->tStones->Controls->Add(this->lInitialStone);
			this->tStones->Location = System::Drawing::Point(4, 22);
			this->tStones->Name = L"tStones";
			this->tStones->Padding = System::Windows::Forms::Padding(3);
			this->tStones->Size = System::Drawing::Size(487, 317);
			this->tStones->TabIndex = 0;
			this->tStones->Text = L"Stone Combining";
			this->tStones->UseVisualStyleBackColor = true;
			// 
			// lStoneError
			// 
			this->lStoneError->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lStoneError->Location = System::Drawing::Point(69, 238);
			this->lStoneError->Name = L"lStoneError";
			this->lStoneError->Size = System::Drawing::Size(342, 18);
			this->lStoneError->TabIndex = 12;
			this->lStoneError->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// cbTargetStone
			// 
			this->cbTargetStone->FormattingEnabled = true;
			this->cbTargetStone->Items->AddRange(gcnew cli::array< System::Object^  >(27) {
				L"Pebble", L"Big Stone", L"Rock", L"Shuriken",
					L"Cold Shuriken", L"Four Shuriken", L"Clover", L"Four Clover", L"Hadouken", L"Donkin Donut", L"Bronze Star", L"Silver Star",
					L"Gold Star", L"Crescent", L"Half Moon", L"Full Moon", L"Snowball", L"Each Ice", L"Icicle", L"Fireball", L"Butt Wing", L"Angel Wing",
					L"Dragon Wing", L"3Stars Ball", L"5Stars Ball", L"7StarsBall", L"Dragon"
			});
			this->cbTargetStone->Location = System::Drawing::Point(304, 109);
			this->cbTargetStone->Name = L"cbTargetStone";
			this->cbTargetStone->Size = System::Drawing::Size(121, 21);
			this->cbTargetStone->TabIndex = 11;
			// 
			// cbInitialStone
			// 
			this->cbInitialStone->AllowDrop = true;
			this->cbInitialStone->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->cbInitialStone->Items->AddRange(gcnew cli::array< System::Object^  >(27) {
				L"Stone", L"Pebble", L"Big Stone", L"Rock",
					L"Shuriken", L"Cold Shuriken", L"Four Shuriken", L"Clover", L"Four Clover", L"Hadouken", L"Donkin Donut", L"Bronze Star", L"Silver Star",
					L"Gold Star", L"Crescent", L"Half Moon", L"Full Moon", L"Snowball", L"Each Ice", L"Icicle", L"Fireball", L"Butt Wing", L"Angel Wing",
					L"Dragon Wing", L"3Stars Ball", L"5Stars Ball", L"7Stars Ball"
			});
			this->cbInitialStone->Location = System::Drawing::Point(47, 109);
			this->cbInitialStone->MaxDropDownItems = 27;
			this->cbInitialStone->Name = L"cbInitialStone";
			this->cbInitialStone->Size = System::Drawing::Size(121, 21);
			this->cbInitialStone->TabIndex = 10;
			// 
			// lActualSC
			// 
			this->lActualSC->AutoSize = true;
			this->lActualSC->Location = System::Drawing::Point(301, 268);
			this->lActualSC->Name = L"lActualSC";
			this->lActualSC->Size = System::Drawing::Size(0, 13);
			this->lActualSC->TabIndex = 9;
			// 
			// lTotalStones
			// 
			this->lTotalStones->AutoSize = true;
			this->lTotalStones->Location = System::Drawing::Point(69, 268);
			this->lTotalStones->Name = L"lTotalStones";
			this->lTotalStones->Size = System::Drawing::Size(0, 13);
			this->lTotalStones->TabIndex = 8;
			// 
			// tbSCInput
			// 
			this->tbSCInput->Location = System::Drawing::Point(196, 109);
			this->tbSCInput->MaxLength = 2;
			this->tbSCInput->Name = L"tbSCInput";
			this->tbSCInput->Size = System::Drawing::Size(75, 20);
			this->tbSCInput->TabIndex = 7;
			this->tbSCInput->WordWrap = false;
			// 
			// lSuperCombination
			// 
			this->lSuperCombination->AutoSize = true;
			this->lSuperCombination->Location = System::Drawing::Point(183, 93);
			this->lSuperCombination->Name = L"lSuperCombination";
			this->lSuperCombination->Size = System::Drawing::Size(107, 13);
			this->lSuperCombination->TabIndex = 6;
			this->lSuperCombination->Text = L"Super Combination %";
			// 
			// lStoneTabInfo
			// 
			this->lStoneTabInfo->AutoSize = true;
			this->lStoneTabInfo->Location = System::Drawing::Point(100, 37);
			this->lStoneTabInfo->Name = L"lStoneTabInfo";
			this->lStoneTabInfo->Size = System::Drawing::Size(268, 13);
			this->lStoneTabInfo->TabIndex = 5;
			this->lStoneTabInfo->Text = L"Find out how many stones it takes to get another stone.";
			// 
			// bSimulateCombination
			// 
			this->bSimulateCombination->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bSimulateCombination->Location = System::Drawing::Point(186, 173);
			this->bSimulateCombination->Name = L"bSimulateCombination";
			this->bSimulateCombination->Size = System::Drawing::Size(94, 25);
			this->bSimulateCombination->TabIndex = 4;
			this->bSimulateCombination->Text = L"Simulate";
			this->bSimulateCombination->UseVisualStyleBackColor = true;
			this->bSimulateCombination->Click += gcnew System::EventHandler(this, &MyForm::bSimulateCombination_Click);
			// 
			// lTargetStone
			// 
			this->lTargetStone->AutoSize = true;
			this->lTargetStone->Location = System::Drawing::Point(332, 93);
			this->lTargetStone->Name = L"lTargetStone";
			this->lTargetStone->Size = System::Drawing::Size(69, 13);
			this->lTargetStone->TabIndex = 2;
			this->lTargetStone->Text = L"Target Stone";
			// 
			// lInitialStone
			// 
			this->lInitialStone->AutoSize = true;
			this->lInitialStone->Location = System::Drawing::Point(58, 93);
			this->lInitialStone->Name = L"lInitialStone";
			this->lInitialStone->Size = System::Drawing::Size(90, 13);
			this->lInitialStone->TabIndex = 0;
			this->lInitialStone->Text = L"Stone to combine";
			// 
			// tPets
			// 
			this->tPets->Controls->Add(this->lFavor);
			this->tPets->Controls->Add(this->lBlessing);
			this->tPets->Controls->Add(this->cbFavor);
			this->tPets->Controls->Add(this->cbBlessing);
			this->tPets->Controls->Add(this->lPetError);
			this->tPets->Controls->Add(this->lPetGold);
			this->tPets->Controls->Add(this->lPetResultsTries);
			this->tPets->Controls->Add(this->lPetResultsEss);
			this->tPets->Controls->Add(this->tbTargetLevel);
			this->tPets->Controls->Add(this->tbStartingLevel);
			this->tPets->Controls->Add(this->bPetCalculate);
			this->tPets->Controls->Add(this->lTargetLevel);
			this->tPets->Controls->Add(this->lStartingLevel);
			this->tPets->Controls->Add(this->lPetTabInfo);
			this->tPets->Location = System::Drawing::Point(4, 22);
			this->tPets->Name = L"tPets";
			this->tPets->Padding = System::Windows::Forms::Padding(3);
			this->tPets->Size = System::Drawing::Size(487, 317);
			this->tPets->TabIndex = 1;
			this->tPets->Text = L"Pet Leveling";
			this->tPets->UseVisualStyleBackColor = true;
			// 
			// lFavor
			// 
			this->lFavor->AutoSize = true;
			this->lFavor->Location = System::Drawing::Point(306, 269);
			this->lFavor->Name = L"lFavor";
			this->lFavor->Size = System::Drawing::Size(0, 13);
			this->lFavor->TabIndex = 13;
			// 
			// lBlessing
			// 
			this->lBlessing->AutoSize = true;
			this->lBlessing->Location = System::Drawing::Point(306, 215);
			this->lBlessing->Name = L"lBlessing";
			this->lBlessing->Size = System::Drawing::Size(0, 13);
			this->lBlessing->TabIndex = 12;
			// 
			// cbFavor
			// 
			this->cbFavor->AutoSize = true;
			this->cbFavor->Location = System::Drawing::Point(190, 101);
			this->cbFavor->Name = L"cbFavor";
			this->cbFavor->Size = System::Drawing::Size(85, 17);
			this->cbFavor->TabIndex = 11;
			this->cbFavor->Text = L"Gaia\'s Favor";
			this->cbFavor->UseVisualStyleBackColor = true;
			// 
			// cbBlessing
			// 
			this->cbBlessing->AutoSize = true;
			this->cbBlessing->Location = System::Drawing::Point(190, 70);
			this->cbBlessing->Name = L"cbBlessing";
			this->cbBlessing->Size = System::Drawing::Size(97, 17);
			this->cbBlessing->TabIndex = 10;
			this->cbBlessing->Text = L"Gaia\'s Blessing";
			this->cbBlessing->UseVisualStyleBackColor = true;
			// 
			// lPetError
			// 
			this->lPetError->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lPetError->Location = System::Drawing::Point(60, 228);
			this->lPetError->Name = L"lPetError";
			this->lPetError->Size = System::Drawing::Size(349, 13);
			this->lPetError->TabIndex = 9;
			this->lPetError->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lPetGold
			// 
			this->lPetGold->AutoSize = true;
			this->lPetGold->Location = System::Drawing::Point(60, 281);
			this->lPetGold->Name = L"lPetGold";
			this->lPetGold->Size = System::Drawing::Size(0, 13);
			this->lPetGold->TabIndex = 8;
			// 
			// lPetResultsTries
			// 
			this->lPetResultsTries->AutoSize = true;
			this->lPetResultsTries->Location = System::Drawing::Point(60, 250);
			this->lPetResultsTries->Name = L"lPetResultsTries";
			this->lPetResultsTries->Size = System::Drawing::Size(0, 13);
			this->lPetResultsTries->TabIndex = 7;
			// 
			// lPetResultsEss
			// 
			this->lPetResultsEss->AutoSize = true;
			this->lPetResultsEss->Location = System::Drawing::Point(60, 215);
			this->lPetResultsEss->Name = L"lPetResultsEss";
			this->lPetResultsEss->Size = System::Drawing::Size(0, 13);
			this->lPetResultsEss->TabIndex = 6;
			// 
			// tbTargetLevel
			// 
			this->tbTargetLevel->Location = System::Drawing::Point(309, 117);
			this->tbTargetLevel->MaxLength = 2;
			this->tbTargetLevel->Name = L"tbTargetLevel";
			this->tbTargetLevel->Size = System::Drawing::Size(100, 20);
			this->tbTargetLevel->TabIndex = 5;
			// 
			// tbStartingLevel
			// 
			this->tbStartingLevel->Location = System::Drawing::Point(63, 117);
			this->tbStartingLevel->MaxLength = 2;
			this->tbStartingLevel->Name = L"tbStartingLevel";
			this->tbStartingLevel->Size = System::Drawing::Size(100, 20);
			this->tbStartingLevel->TabIndex = 4;
			// 
			// bPetCalculate
			// 
			this->bPetCalculate->Location = System::Drawing::Point(200, 163);
			this->bPetCalculate->Name = L"bPetCalculate";
			this->bPetCalculate->Size = System::Drawing::Size(75, 23);
			this->bPetCalculate->TabIndex = 3;
			this->bPetCalculate->Text = L"Calculate";
			this->bPetCalculate->UseVisualStyleBackColor = true;
			this->bPetCalculate->Click += gcnew System::EventHandler(this, &MyForm::bPetCalculate_Click);
			// 
			// lTargetLevel
			// 
			this->lTargetLevel->AutoSize = true;
			this->lTargetLevel->Location = System::Drawing::Point(325, 101);
			this->lTargetLevel->Name = L"lTargetLevel";
			this->lTargetLevel->Size = System::Drawing::Size(67, 13);
			this->lTargetLevel->TabIndex = 2;
			this->lTargetLevel->Text = L"Target Level";
			// 
			// lStartingLevel
			// 
			this->lStartingLevel->AutoSize = true;
			this->lStartingLevel->Location = System::Drawing::Point(72, 101);
			this->lStartingLevel->Name = L"lStartingLevel";
			this->lStartingLevel->Size = System::Drawing::Size(72, 13);
			this->lStartingLevel->TabIndex = 1;
			this->lStartingLevel->Text = L"Starting Level";
			// 
			// lPetTabInfo
			// 
			this->lPetTabInfo->AutoSize = true;
			this->lPetTabInfo->Location = System::Drawing::Point(110, 39);
			this->lPetTabInfo->Name = L"lPetTabInfo";
			this->lPetTabInfo->Size = System::Drawing::Size(244, 13);
			this->lPetTabInfo->TabIndex = 0;
			this->lPetTabInfo->Text = L"Find out how many Essence it takes to level a pet.";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(490, 343);
			this->Controls->Add(this->tabs);
			this->MaximumSize = System::Drawing::Size(506, 382);
			this->MinimumSize = System::Drawing::Size(506, 382);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Stone & Pet Upgrade Simulator 0.7.0";
			this->tabs->ResumeLayout(false);
			this->tStones->ResumeLayout(false);
			this->tStones->PerformLayout();
			this->tPets->ResumeLayout(false);
			this->tPets->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
		// Clears Pet tab labels on error
		void clearPetText() {
			lPetResultsEss->Text = "";
			lPetResultsTries->Text = "";
			lPetGold->Text = "";
			lBlessing->Text = "";
			lFavor->Text = "";
		}

		// Clears Stone tab labels on error
		void clearStoneText() {
			lActualSC->Text = "";
			lTotalStones->Text = "";
		}


//
// Executed when "Calculate" button is pressed in the "Pet Leveling" tab
//
private: System::Void bPetCalculate_Click(System::Object^  sender, System::EventArgs^  e) {
	int iEssRequired = 0;
	double dGoldRequired = 0;
	int iAttempts = 0;
	int iBlessing = 0;
	int iFavor = 0;
	int iInitialLevel = 0;
	int iTargetLevel = 0;
	bool bFavor = false;
	bool bBlessing = false;
	String^ sGoldRequired = "";


	// Clear error label on button press
	lPetError->Text = "";


	// If tbStartingLevel is integer 
	if (EvalInput(tbStartingLevel->Text)) {
		// Assign tbStartingLevel to iInitialLevel
		iInitialLevel = Int32::Parse(tbStartingLevel->Text);

		// If tbTargetLevel is an integer
		if (EvalInput(tbTargetLevel->Text)) {
			// Assign tbTargetLevel to iTargetLevel
			iTargetLevel = Int32::Parse(tbTargetLevel->Text);

			// If iInitialLevel is not less than iTarget Level 
			if (iInitialLevel >= iTargetLevel) {
				// Error
				lPetError->Text = "Starting Level must be lower than Target Level!";
				clearPetText();
			}

			// If iTargetLevel is not between 2 and 30
			if (!EvalRange(iTargetLevel, 2, 30)) {
				// Error
				lPetError->Text = "Target Level must be between 2 and 30!";
				clearPetText();
			}
		}

		// If tbTargetLevel is not an integer
		else {
			// Error
			lPetError->Text = "Target Level must be an integer!";
			clearPetText();
		}

		// If iInitialLevel is not between 1 and 29 
		if (!EvalRange(iInitialLevel, 1, 29)) {
			// Error
			lPetError->Text = "Starting Level must be between 1 and 29!";
			clearPetText();
		}
	}

	// If tbStartingLevel is not an integer
	else {
		lPetError->Text = "Starting Level must be an integer!";
		clearPetText();
	}

	// If input is valid for Starting and Target Level
	if (lPetError->Text == "") {
		// Set bBlessing & bFavor bools 
		bBlessing = cbBlessing->Checked;
		bFavor= cbFavor->Checked;
		
		// Returns iEssRequired, iGoldRequired, iAttempts by reference
		PetCalc(iInitialLevel, iTargetLevel, iEssRequired, dGoldRequired, iAttempts, iBlessing, iFavor, bBlessing, bFavor);

		// Format & convert Gold Required into String w/ decimals
		sGoldRequired = String::Format("{0:n0}", dGoldRequired);

		lPetResultsEss->Text = "Essence Required: " + iEssRequired;			
		lPetResultsTries->Text = "Attempts: " + iAttempts;
		lPetGold->Text = "Gold Required: " + sGoldRequired;
		lBlessing->Text = "Gaia's Blessing: " + iBlessing;
		lFavor->Text = "Gaia's Favor: " + iFavor;
	} 
}


//
// Executed when "Simulate" button is pressed in the "Stone Combining" tab
//
private: System::Void bSimulateCombination_Click(System::Object^  sender, System::EventArgs^  e) {
	int iStonesRequired = 0;
	int iSCPercent = 0;
	int iInitialStone = 0;
	int iTargetStone = 0;
	float fActualSC = 0;
	String^ sInitialStone = "";

	// Clear error label on button press
	lStoneError->Text = "";
	
	// If cbInitialStone has valid index selected
	if (EvalRange(cbInitialStone->SelectedIndex, 0, 26)) {
		iInitialStone = cbInitialStone->SelectedIndex;
		sInitialStone = cbInitialStone->Text;

		// If cbTargetStone has valid index selected
		if (EvalRange(cbTargetStone->SelectedIndex, 1, 27)) {
			iTargetStone = cbTargetStone->SelectedIndex;

			// If Initial Stone is NOT less than Target Stone
			if (iInitialStone >= iTargetStone) {
				//Error
				lStoneError->Text = "Stone to Combine must be lower tier than Target Stone!";
				clearStoneText();
			}

			// If tbSCInput->Text is an integer
			if (EvalInput(tbSCInput->Text)) {
				//Assign tbSCInput to iSCPercent
				iSCPercent = Int32::Parse(tbSCInput->Text);

				// If iSCPercent is NOT between 0 and 40
				if (!EvalRange(iSCPercent, 0, 40)) {
					// Input Error
					lStoneError->Text = "Super Combination % must be between 0 and 40!";
					clearStoneText();
				}
			}

			// If tbSCInput was NOT an integer
			else {
				// Input Error
				lStoneError->Text = "Super Combination % must be an integer!";
				clearStoneText();
			}
		}

		// If cbTargetStone has invalid index selected
		else {
			lStoneError->Text = "Invalid Target Stone!";
			clearStoneText();
		}
	}

	// If cbInitialStone has invalid index selected
	else {
		lStoneError->Text = "Invalid Starting Stone!";
		clearStoneText();
	}


	// Make sure this->tbStartingLevel->Text = number between 1 and 40
	if (lStoneError->Text == "") {
		// Returns iStonesRequired
		StoneCalc(iInitialStone, iTargetStone, iSCPercent, iStonesRequired, fActualSC);

		// Set Text of Labels
		lTotalStones->Text = "Total " + sInitialStone + " : " + iStonesRequired;
		lActualSC->Text = "Actual SC : " + fActualSC + "%";

	}
}
};
}
