#include "MyForm.h"
#include "INF.h";
#include "FINDER.h";
#include "HELP.h";
#include "March.h";
#include "Traveler.h";
#include "dateloader.h";
#include <iostream>
#include <fstream>
#include <string>

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main() {
	Traveler* Travelers = new Traveler[19];
	get_Travelers_date(Travelers, 19);

	/*for (int i = 0; i < 19; i++) 
	{
		std::cout << "Travel Number:" << Travelers[i].get_TravelNumber() << std::endl;
		std::cout << "Amount Points:" << Travelers[i].get_count_points() << std::endl;
		std::cout << "Point X: " << std::endl;
		Travelers[i].get_point_arrayX();
		std::cout << "Interval:" << Travelers[i].get_TravelTime() << std::endl;
		std::cout << "Start:" << Travelers[i].get_startTime() << std::endl;
		std::cout << "End:" << Travelers[i].get_endTime() << std::endl;
		std::cout << "WayLength:" << Travelers[i].get_lengthWay() << std::endl;
		std::cout << "Cost:" << Travelers[i].get_cost() << std::endl;
		std::cout << "Owner:" << Travelers[i].get_owner() << std::endl;
	}*/

	delete[] Travelers;
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	KURS::MyForm form;
	Application::Run(%form);
}