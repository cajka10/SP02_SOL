#pragma once
#include <string>
#include "Kriterium.h"
#include "Oblast.h"

class KriteriumNazov : public Kriterium<std::string,Oblast> {
public: 
	std::string evaluate(const Oblast& oblast) override
	{
		return oblast.get_nazov();
	}
};
