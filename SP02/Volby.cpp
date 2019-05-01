#include "Volby.h"
#include <fstream>
#include <iostream>
#include "structures/table/unsorted_sequence_table.h"


Volby::Volby()
{
	this->dediny_ = new structures::SortedSequenceTable<string, Dedina*>();
	this->kraje_ = new structures::SortedSequenceTable<string, Kraj*>();
	this->okresy_ = new structures::SortedSequenceTable<string, Okres*>();
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

		Dedina* pomDedina = new Dedina(nazov);
		pomDedina->set_pocet_zap_volicov1(stoi(pocetZapVolicov1));
		pomDedina->set_pocet_vyd_obalok1(stoi(pocetVydObalok1));
		pomDedina->set_ucast_volicov_percenta1(stod(ucast1));
		pomDedina->set_pocet_odovzd_obalok1(stoi(pocetOdovzObalok1));
		pomDedina->set_pocet_plat_hlasov1(stoi(pocetPlatHlasov1));
		
		pomDedina->set_pocet_zap_volicov1(stoi(pocetZapVolicov2));
		pomDedina->set_pocet_vyd_obalok1(stoi(pocetVydObalok2));
		pomDedina->set_ucast_volicov_percenta1(stod(ucast2));
		pomDedina->set_pocet_odovzd_obalok1(stoi(pocetOdovzObalok2));
		pomDedina->set_pocet_plat_hlasov1(stoi(pocetPlatHlasov2));
		dediny_->insert(nazov, pomDedina );
		
	}
	is.close();
	is.clear();

	is.open("kraje.csv");
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
		getline(is, pocetPlatHlasov1, ';');

		getline(is, pocetZapVolicov2, ';');
		getline(is, pocetVydObalok2, ';');
		getline(is, ucast2, ';');
		getline(is, pocetOdovzObalok2, ';');
		getline(is, pocetPlatHlasov2, '\n');

		Kraj* pomKraj = new Kraj(nazov);
		pomKraj->set_pocet_zap_volicov1(stoi(pocetZapVolicov1));
		pomKraj->set_pocet_vyd_obalok1(stoi(pocetVydObalok1));
		pomKraj->set_ucast_volicov_percenta1(stod(ucast1));
		pomKraj->set_pocet_odovzd_obalok1(stoi(pocetOdovzObalok1));
		pomKraj->set_pocet_plat_hlasov1(stoi(pocetPlatHlasov1));

		pomKraj->set_pocet_zap_volicov1(stoi(pocetZapVolicov2));
		pomKraj->set_pocet_vyd_obalok1(stoi(pocetVydObalok2));
		pomKraj->set_ucast_volicov_percenta1(stod(ucast2));
		pomKraj->set_pocet_odovzd_obalok1(stoi(pocetOdovzObalok2));
		pomKraj->set_pocet_plat_hlasov1(stoi(pocetPlatHlasov2));
		kraje_->insert(nazov, pomKraj);

	}

	is.close();

	is.clear();

	is.open("okresy.csv");
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
		getline(is, pocetPlatHlasov1, ';');

		getline(is, pocetZapVolicov2, ';');
		getline(is, pocetVydObalok2, ';');
		getline(is, ucast2, ';');
		getline(is, pocetOdovzObalok2, ';');
		getline(is, pocetPlatHlasov2, '\n');

		Okres* pomOkres = new Okres(nazov);
		pomOkres->set_pocet_zap_volicov1(stoi(pocetZapVolicov1));
		pomOkres->set_pocet_vyd_obalok1(stoi(pocetVydObalok1));
		pomOkres->set_ucast_volicov_percenta1(stod(ucast1));
		pomOkres->set_pocet_odovzd_obalok1(stoi(pocetOdovzObalok1));
		pomOkres->set_pocet_plat_hlasov1(stoi(pocetPlatHlasov1));

		pomOkres->set_pocet_zap_volicov1(stoi(pocetZapVolicov2));
		pomOkres->set_pocet_vyd_obalok1(stoi(pocetVydObalok2));
		pomOkres->set_ucast_volicov_percenta1(stod(ucast2));
		pomOkres->set_pocet_odovzd_obalok1(stoi(pocetOdovzObalok2));
		pomOkres->set_pocet_plat_hlasov1(stoi(pocetPlatHlasov2));
		okresy_->insert(nazov, pomOkres);

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

	for (auto okres : *okresy_)
	{
		delete okres->accessData();
	}
	delete okresy_;
}

