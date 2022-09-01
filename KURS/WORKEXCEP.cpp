#include "WORKEXCEP.h"
#include <fstream>
System::String^ WorkWithExceptions::RangeError()	   
{
	std::ofstream out("Logs.txt");
	out << "Range Error!";
	out.close();
	return "Range Error!";
}
System::String^ WorkWithExceptions::BadAllocError()		
{
	std::ofstream out("Logs.txt");
	out << "Bad Alloc error";
	out.close();
	return "Bad Alloc error";
}
System::String^ WorkWithExceptions::BadDomainError()	
{
	std::ofstream out("Logs.txt");
	out << "Bad Domain error";
	out.close();
	return "Bad Domain error";
}
System::String^ WorkWithExceptions::BadTypeidError()    
{
	std::ofstream out("Logs.txt");
	out << "Bad Typeid error";
	out.close();
	return "Bad Typeid error";
}
System::String^ WorkWithExceptions::BadExceptionError()	
{
	std::ofstream out("Logs.txt");
	out << "Bad Exception error";
	out.close();
	return "Bad Exception error";
}
System::String^ WorkWithExceptions::LogicFailureError() 
{
	std::ofstream out("Logs.txt");
	out << "Logic Failure error";
	out.close();
	return "Logic Failure error";
}
System::String^ WorkWithExceptions::OutOfRangeError()	
{
	std::ofstream out("Logs.txt");
	out << "Out of range!";
	out.close();
	return "Out of range!";
}
System::String^ WorkWithExceptions::OverflowError()	
{
	std::ofstream out("Logs.txt");
	out << "Overflow error";
	out.close();
	return "Overflow error";
}
System::String^ WorkWithExceptions::LengthError()	
{
	std::ofstream out("Logs.txt");
	out << "Length error!";
	out.close();
	return "Length error!";
}
System::String^ WorkWithExceptions::InvalidArgumentError()	
{
	std::ofstream out("Logs.txt");
	out << "Invalid Argument";
	out.close();
	return "Invalid Argument";
}
