#include "Volby.h"
#include <fstream>
#include <iostream>

Volby::Volby()
{
	this->dediny_ = new structures::SortedSequenceTable<string, Dedina*>();
}
void Volby::nacitajDediny()
{
	
}
Volby::~Volby()
{
	ifstream is("dediny_1kolo.csv");

	if (!is.is_open())
	{
		std::cout << "Error: File Open" << "\n";
	}
	string nazov;
	string pocetZapVolicov;
	string pocetVydObalok;
	string ucast;
	string pocetOdovzObalok;
	string pocetPlatHlasov;
	while (is.good())
	{
		getline(is, nazov, ',');
		getline(is, pocetZapVolicov, ',');
		getline(is, pocetVydObalok, ',');
		getline(is, ucast, ',');
		getline(is, pocetOdovzObalok, ',');
		getline(is, pocetPlatHlasov, ',');
		
		Dedina* pomDedina = new Dedina(nazov, stoi(pocetZapVolicov),stoi(pocetVydObalok),
		 stoi(ucast), stoi(pocetOdovzObalok), stoi(pocetPlatHlasov));
		dediny_->insert(nazov, pomDedina);
	}
	is.close();
}

