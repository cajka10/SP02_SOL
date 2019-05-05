#pragma once
#include "Kriterium.h"

template<typename T, typename O>
class Filter
{
public:
	virtual bool evaluate(const O& o, const Kriterium<T, O>& c) = 0;
};