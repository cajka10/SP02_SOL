#include "Volby.h"
#include <fstream>
#include <iostream>
#include "structures/table/unsorted_sequence_table.h"

Volby::Volby()
{
	this->dediny_ = new structures::SortedSequenceTable<string, Dedina*>();
	nacitajDediny();
	std::cout << "ouuuuuuuu!";
}
void Volby::nacitajDediny()
{
	ifstream is("dediny_1kolo_textak.txt");

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
		getline(is, nazov, ';');
		getline(is, pocetZapVolicov, ';');
		getline(is, pocetVydObalok, ';');
		getline(is, ucast, ';');
		getline(is, pocetOdovzObalok, ';');
		getline(is, pocetPlatHlasov,  '\n');

		
		dediny_->insert(nazov, new Dedina(nazov, stoi(pocetZapVolicov), stoi(pocetVydObalok),
			stod(ucast), stoi(pocetOdovzObalok), stoi(pocetPlatHlasov)));
		
	}
	is.close();
}
Volby::~Volby()
{
	
	for (auto dedina : *dediny_)
	{
		delete dedina->accessData();
	}
	delete dediny_;
}

