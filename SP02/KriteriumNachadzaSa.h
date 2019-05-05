#pragma once
#include "Kriterium.h"
#include "Obec.h"

class KriteriumNachadzaSa : public Kriterium<bool, Obec> {
public:
	bool evaluate(const Obec& dedina) override
	{
		return dedina.nachadzaSa(oblast_);
	}

	void set_oblast(Oblast* oblast)
	{
		oblast_ = oblast;
	}

private: Oblast* oblast_;
};
