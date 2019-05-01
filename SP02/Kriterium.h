#pragma once
template <typename T, typename O>
class Kriterium
{
public:
	virtual T evaluate(const O& object) = 0;
};