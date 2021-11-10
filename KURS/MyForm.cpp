#include "MyForm.h"
#include "INF.h";
#include "FINDER.h";
#include "HELP.h";
#include "March.h";
#include "Traveler.h";
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	KURS::MyForm form;
	Application::Run(%form);
	
	
	/**************CLASS FOR WRITE****************/
	Traveler travel[19];

	/*******FROM FILE TO PROGRAM******************/
		
	//EXAMPLE//  // NE OSTAVLYAT I ZAMENIT
	travel[1].count_point=1;	//kolvo tochek
	travel[1].TravelNumber = 19; // nomer marchruta
	for (int i = 0; i < travel[1].count_point; i++) //zanesenie tochek
	{
		travel[1].point_arrayX[i] = 1;
		travel[1].point_arrayY[i] = 1;
	}
	travel[1].startTime=1;	//nachalo puti
	travel[1].endTime=1;	//konech puti
	travel[1].TravelTime=1;	//vremya v puti za marchrut
	travel[1].INFORMATION="INF";	//INFA (3 last colonki(dengi,KM,OOO)

	/*******FROM FILE TO PROGRAM******************/
	
}