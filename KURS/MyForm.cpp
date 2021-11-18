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
#include <sstream>;
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main() {
	//Traveler* Travelers = new Traveler[19];
	//getTravelersDate(Travelers, 19);
	//for (int i = 0; i < 19; i++) 
	//{
	//	std::cout << "Travel Number:" << Travelers[i].getTravelNumber() << std::endl;
	//	std::cout << "Point X: " << std::endl;
	//	int* points = Travelers[i].getPointArrayX();
	//	for (int v = 0; v < Travelers[i].getCountPoints(); v++) 
	//	{
	//		std::cout << points[v] << std::endl;
	//	}
	//	std::cout << "Interval:" << Travelers[i].getTravelTime() << std::endl;
	//	std::cout << "Start:" << Travelers[i].getStartTime() << std::endl;
	//	std::cout << "End:" << Travelers[i].getEndTime() << std::endl;
	//	std::cout << "WayLength:" << Travelers[i].getLengthWay() << std::endl;
	//	std::cout << "Cost:" << Travelers[i].getCost() << std::endl;
	//	std::cout << "Owner:" << Travelers[i].getOwner() << std::endl;
	//	delete[] points;
	//}
	
	//delete[] Travelers;
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	KURS::MyForm form;
	Application::Run(%form);
}
