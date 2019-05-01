#pragma once
template <typename T, typename O>
class Kriterium<T, O>
{
public:
	virtual T evaluate(const O& object) = 0;
};