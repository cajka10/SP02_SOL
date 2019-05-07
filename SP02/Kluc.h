#pragma once
#include <string>

class Kluc
{
private:
	int volici;
	double ucast;
	std::string nazov;
public:

	Kluc(int volici, double ucast, const std::string& nazov)
		: volici(volici),
		  ucast(ucast),
		  nazov(nazov)
	{
	}

	int get_volici() const
	{
		return volici;
	}

	void set_volici(int volici)
	{
		this->volici = volici;
	}

	double get_ucast() const
	{
		return ucast;
	}

	void set_ucast(double ucast)
	{
		this->ucast = ucast;
	}

	std::string get_nazov() const
	{
		return nazov;
	}

	void set_nazov(const std::string& nazov)
	{
		this->nazov = nazov;
	}
};
