#include "Volby.h"
#include <fstream>
#include <iostream>
#include "structures/table/unsorted_sequence_table.h"
#include <experimental/filesystem>
///#include "Filter_fi.h"
#include "KriteriumNazov.h"
//#include "FilterNazov.h"


Volby::Volby()
{
	this->obce_ = new structures::SortedSequenceTable<string, Oblast*>();
	this->kraje_ = new structures::SortedSequenceTable<string, Kraj*>();
	this->okresy_ = new structures::SortedSequenceTable<string, Okres*>();
	vypisMenu();
	std::cout << "ouuuuuuuu!";
}
void Volby::nacitajSubory()
{

	ifstream is("dediny_skrajmi.csv");

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
	string nazovOkresu;

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
		getline(is, pocetPlatHlasov2, ';');
		getline(is, nazovOkresu, '\n');

		Obec* pomDedina = new Obec(nazov);
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
		pomDedina->set_nazov_okresu(nazovOkresu);
		obce_->insert(nazov, pomDedina);
		
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
	std::cout << "data su nacitane \n";

}
void Volby::vypisMenu()
{
	int c;

	bool cyklus = true;
	while (cyklus)
	{
		cout << "----------------------------------------------\n\n" << endl;
		cout << "1.Nacitaj data \n" << endl;
		cout << "2.Vypis dediny \n" << endl;
		cout << "0.Ukonci program \n" << endl;

		cout << "----------------------------------------------\n\n" << endl;


		cin >> c;
		switch (c)
		{
		case 1:nacitajSubory(); break;
		case 2: vypisPodla(); break;
		case 0: cyklus = false; break;
		default: std::cout << "zadal si zly znak:"; break;

		}
	}
}
void Volby::vypisPodla()
{
	char c;
	string vstup;
	Kriterium<string, Oblast>* kNazov = new KriteriumNazov<string, Oblast>();
	

	for (auto *item : *obce_)
	{

		std::cout << kNazov->evaluate(*item->accessData()) + "\n";
	}
	delete kNazov;

}
	




Volby::~Volby()
{
	for (auto obce : *obce_)
	{
		delete obce->accessData();
	}
	delete obce_;
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
	/*for (auto dedina : *obce_)
	{
		dedina->accessData();
	}
	delete obce_;

	for (auto kraj : *kraje_)
	{
		delete kraj->accessData();
	}
	delete kraje_;

	for (auto okres : *okresy_)
	{
		delete okres->accessData();
	}
	delete okresy_;*/
}

