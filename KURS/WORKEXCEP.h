#pragma once
#include <iostream>

class WorkWithExceptions
{
public:
	System::String^ RangeError();
	System::String^ BadAllocError();
	System::String^ BadDomainError();
	System::String^ BadTypeidError();
	System::String^ BadExceptionError();
	System::String^ LogicFailureError();
	System::String^ OutOfRangeError();
	System::String^ OverflowError();
	System::String^ LengthError();
	System::String^ InvalidArgumentError();

		
	
};