#include "MyForm1.h"
#include "Calculations.h"
#include "CostsAndChances.h"
//#include <math.h>
//#include <stdio.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<::String^>^ argv)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	

	GSOStoneandPetUpgradeSimulator::MyForm form;
	Application::Run(%form);
}

