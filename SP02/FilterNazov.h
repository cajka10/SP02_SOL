#pragma once
#include "Filter_fi.h"
#include <string>
#include "Oblast.h"

class FilterNazov : public Filter_fi<string, Oblast>
{
public:
	FilterNazov()
	{

	}
	~FilterNazov()
	{

	}
};
