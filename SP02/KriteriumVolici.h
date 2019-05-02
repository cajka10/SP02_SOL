#pragma once
#include "Kriterium.h"
#include "Oblast.h"

class KriteriumVolici : public Kriterium<int, Oblast>
{
public:
	int evaluate(const Oblast& oblast) override
	{
		oblast.get_pocet_zap_volicov(kolo);
	}

	void set_kolo(int kolo)
	{
		this->kolo = kolo;
	}

private:
	int kolo;
};
