#pragma once
template<typename T,typename O>
class Filter
{
public:
	virtual bool evaluate(const O& o, const Criterion<T, O>& c) = 0;
};