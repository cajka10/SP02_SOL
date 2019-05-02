#pragma once
#include "Kriterium.h"
#include "Oblast.h"

class KriteriumUcast : public Kriterium<int, Oblast>
{
	int evaluate(const Oblast& oblast) override
	{
		oblast.get_ucast_volicov_percenta(kolo);
	}

	void set_kolo(int kolo)
	{
		this->kolo = kolo;
	}
private:
	int kolo;
};
