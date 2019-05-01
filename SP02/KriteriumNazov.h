#pragma once
#include <string>
#include "Kriterium.h"
#include "Oblast.h"

class KriteriumNazov : public Kriterium<std::string,Oblast> {
public: 
	std::string evaluate(const Oblast& a) override
	{
		return a.get_nazov();
	}
};
