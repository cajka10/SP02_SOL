#pragma once
#include "Filter.h"
#include "Kriterium.h"
template <typename T, typename O>
class Filter_fi : public Filter<T, O>
{
public:
	bool evaluate(const O& o, const Kriterium<T, O>& c) override
	{
		return c.evaluate(o) = alpha;
	}

	void set_alpha(const T& alpha)
	{
		this->alpha = alpha;
	}

private: T alpha;
};