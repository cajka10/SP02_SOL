#pragma once
#include "Filter.h"
#include "Kriterium.h"
template <typename T, typename O>
class Filter_fi : public Filter<T, O>
{
public:
	Filter_fi()
	{

	}

	~Filter_fi()
	{

	}

	bool evaluate(const O& objekt, const Kriterium<T, O>& c) override
	{
		return c.evaluate(objekt) == alpha;
	}

	void set_alpha(const T& alpha)
	{
		this->alpha = alpha;
	}

private:
	T alpha;
};