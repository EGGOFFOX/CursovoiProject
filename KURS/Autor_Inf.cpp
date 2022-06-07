#include "Autor_Inf.h";
#include <string>;

void Autor::setData()
{
	Data = "Розробники: студенти групи КНТ-110.\nВиноградов М.М.\nБондаренко М.Д.\nЯкушкін М.С\n";

}
std::string Autor::GetData()
{
	return Data;
}

std::string Autor::Information()
{
	setData();
	return GetData();
}