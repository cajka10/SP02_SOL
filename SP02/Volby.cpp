#include "Volby.h"
#include <fstream>
#include <iostream>
#include "structures/table/unsorted_sequence_table.h"

Volby::Volby()
{
	this->dediny_ = new structures::SortedSequenceTable<string, Dedina*>();
	this->kraje_ = new structures::SortedSequenceTable<string, Kraj*>();
	nacitajSubory();
	std::cout << "ouuuuuuuu!";
}
void Volby::nacitajSubory()
{
	// nacitavam len prve kolo volieb

	ifstream is("dediny.csv");

	if (!is.is_open())
	{
		std::cout << "Error: File Open" << "\n";
	}
	string nazov;
	string pocetZapVolicov1;
	string pocetVydObalok1;
	string ucast1;
	string pocetOdovzObalok1;
	string pocetPlatHlasov1;

	string pocetZapVolicov2;
	string pocetVydObalok2;
	string ucast2;
	string pocetOdovzObalok2;
	string pocetPlatHlasov2;

	while (is.good())
	{
		getline(is, nazov, ';');
		getline(is, pocetZapVolicov1, ';');
		getline(is, pocetVydObalok1, ';');
		getline(is, ucast1, ';');
		getline(is, pocetOdovzObalok1, ';');
		getline(is, pocetPlatHlasov1, ';');

		getline(is, pocetZapVolicov2, ';');
		getline(is, pocetVydObalok2, ';');
		getline(is, ucast2, ';');
		getline(is, pocetOdovzObalok2, ';');
		getline(is, pocetPlatHlasov2, '\n');

		Dedina* pomDedina = new Dedina(nazov, stoi(pocetZapVolicov1), stoi(pocetVydObalok1),
			stod(ucast1), stoi(pocetOdovzObalok1), stoi(pocetPlatHlasov1), stoi(pocetZapVolicov1), stoi(pocetVydObalok1),
			stod(ucast1), stoi(pocetOdovzObalok1), stoi(pocetPlatHlasov1));
		dediny_->insert(nazov, pomDedina );
		
	}
	is.close();
	is.clear();

	is.open("kraje_1kolo.csv");
	if (!is.is_open())
	{
		std::cout << "Error: File Open" << "\n";
	}
	while (is.good())
	{
	
		getline(is, nazov, ';');
		getline(is, pocetZapVolicov1, ';');
		getline(is, pocetVydObalok1, ';');
		getline(is, ucast1, ';');
		getline(is, pocetOdovzObalok1, ';');
		getline(is, pocetPlatHlasov1, '\n');

		Kraj* pomKraj = new Kraj(nazov, stoi(pocetZapVolicov1), stoi(pocetVydObalok1),
			stod(ucast1), stoi(pocetOdovzObalok1), stoi(pocetPlatHlasov1));
		kraje_->insert(nazov, pomKraj);

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

	for (auto kraj : *kraje_)
	{
		delete kraj->accessData();
	}
	delete kraje_;
}

