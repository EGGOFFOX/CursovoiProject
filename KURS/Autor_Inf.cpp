#include "Autor_Inf.h";
#include <string>;

void Autor::setData()
{
	Data = "����������: �������� ����� ���-110.\n���������� �.�.\n���������� �.�.\n������ �.�\n";

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