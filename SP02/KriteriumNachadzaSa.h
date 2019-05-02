#pragma once
#include "Kriterium.h"
#include "Dedina.h"

class KriteriumNachadzaSa : public Kriterium<bool, Dedina> {
public:
	bool evaluate(const Dedina& dedina) override
	{
		return dedina.nachadzaSa(oblast_);
	}

	void set_oblast(Oblast* oblast)
	{
		oblast_ = oblast;
	}

private: Oblast* oblast_;
};
