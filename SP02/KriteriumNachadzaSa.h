#pragma once
#include "Kriterium.h"
#include "Obec.h"
template <typename T, typename O>
class KriteriumNachadzaSa : public Kriterium<bool, Obec> {
public:
	KriteriumNachadzaSa();
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

template <typename T, typename O>
KriteriumNachadzaSa<T, O>::KriteriumNachadzaSa()
{
	
}

