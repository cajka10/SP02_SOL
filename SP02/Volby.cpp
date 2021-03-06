#include "Volby.h"
#include <fstream>
#include <iostream>
#include "structures/table/unsorted_sequence_table.h"
#include <experimental/filesystem>




Volby::Volby()
{
	this->obce_ = new structures::SortedSequenceTable<string, Obec*>();
	this->kraje_ = new structures::SortedSequenceTable<string, Kraj*>();
	this->okresy_ = new structures::SortedSequenceTable<string, Okres*>();
	this->filterNachadzaSa = new Filter_fi<bool, Oblast>();
	this->filterUcast = new FilterFI<double, Oblast>();
	this->filterNazov = new Filter_fi<string, Oblast>();
	this->filterVolici = new FilterFI<int, Oblast>();

	this->kNazov = new KriteriumNazov<string, Oblast>();
	this->kVolici = new KriteriumVolici<int, Oblast>();
	this->kUcast = new KriteriumUcast<double, Oblast>();
	this->kNachadzaSa = new KriteriumNachadzaSa<bool, Oblast>();

	vypisMenu();
	std::cout << "ouuuuuuuu!";
}
void Volby::nacitajSubory()
{

	ifstream is("dediny_vstup.csv");

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
	string nazovKraju;

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
		getline(is, nazovOkresu, ';');
		getline(is, nazovKraju, '\n');

		Obec* pomDedina = new Obec(nazov);
		pomDedina->set_pocet_zap_volicov1(stoi(pocetZapVolicov1));
		pomDedina->set_pocet_vyd_obalok1(stoi(pocetVydObalok1));
		pomDedina->set_ucast_volicov_percenta1(stod(ucast1));
		pomDedina->set_pocet_odovzd_obalok1(stoi(pocetOdovzObalok1));
		pomDedina->set_pocet_plat_hlasov1(stoi(pocetPlatHlasov1));

		pomDedina->set_pocet_zap_volicov2(stoi(pocetZapVolicov2));
		pomDedina->set_pocet_vyd_obalok2(stoi(pocetVydObalok2));
		pomDedina->set_ucast_volicov_percenta2(stod(ucast2));
		pomDedina->set_pocet_odovzd_obalok2(stoi(pocetOdovzObalok2));
		pomDedina->set_pocet_plat_hlasov2(stoi(pocetPlatHlasov2));
		pomDedina->set_nazov_okresu(nazovOkresu);
		pomDedina->set_nazov_kraju(nazovKraju);
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

		pomKraj->set_pocet_zap_volicov2(stoi(pocetZapVolicov2));
		pomKraj->set_pocet_vyd_obalok2(stoi(pocetVydObalok2));
		pomKraj->set_ucast_volicov_percenta2(stod(ucast2));
		pomKraj->set_pocet_odovzd_obalok2(stoi(pocetOdovzObalok2));
		pomKraj->set_pocet_plat_hlasov2(stoi(pocetPlatHlasov2));
		kraje_->insert(nazov, pomKraj);

	}

	is.close();

	is.clear();

	is.open("okresy_vstup.csv");
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
		getline(is, pocetPlatHlasov2, ';');
		getline(is, nazovKraju, '\n');


		Okres* pomOkres = new Okres(nazov);
		pomOkres->set_pocet_zap_volicov1(stoi(pocetZapVolicov1));
		pomOkres->set_pocet_vyd_obalok1(stoi(pocetVydObalok1));
		pomOkres->set_ucast_volicov_percenta1(stod(ucast1));
		pomOkres->set_pocet_odovzd_obalok1(stoi(pocetOdovzObalok1));
		pomOkres->set_pocet_plat_hlasov1(stoi(pocetPlatHlasov1));

		pomOkres->set_pocet_zap_volicov2(stoi(pocetZapVolicov2));
		pomOkres->set_pocet_vyd_obalok2(stoi(pocetVydObalok2));
		pomOkres->set_ucast_volicov_percenta2(stod(ucast2));
		pomOkres->set_pocet_odovzd_obalok2(stoi(pocetOdovzObalok2));
		pomOkres->set_pocet_plat_hlasov2(stoi(pocetPlatHlasov2));
		pomOkres->set_nazov_kraju(nazovKraju);
		okresy_->insert(nazov ,pomOkres);

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
		std::cout << "-------------------------------------------------------------\n";

		cout << "1.Nacitaj data \n" << endl;
		cout << "2.Vypis Uzemny celok \n" << endl;
		cout << "3.Zorad dediny \n" << endl;
		cout << "0.Ukonci program \n" << endl;

		std::cout << "-------------------------------------------------------------\n\n";



		cin >> c;
		switch (c)
		{
		case 1:nacitajSubory(); break;
		case 2: vypisPodla(); break;
		case 3: zoradMenu(); break;
		case 0: cyklus = false; break;
		default: std::cout << "zadal si zly znak:"; break;

		}
	}
}
void Volby::vypisPodla()
{

	char rozhodnutie;


	std::cout << "Podla coho chces vzhladat uzemny celok?: \n";
	cout << "a.Nazov \n" << endl;
	cout << "b.Volici \n" << endl;
	cout << "c.Ucast\n" << endl;
	std::cin >> rozhodnutie;
	switch (rozhodnutie)
	{
	case 'a': this->vypisPodlaNazvu(); break;
	case 'b': this->vypisPodlaVolicov(); break;
	case 'c': this->vypisPodlaUcasti(); break;
	default: std::cout << "zadal si zly znak"; break;
	}




}



void Volby::vypisPodlaNazvu()
{
	string vstup = "";


	std::cout << "zadaj Uzemny celok, ktory hladas: \n";
	cin.ignore();
	getline(std::cin, vstup);
	filterNazov->set_alpha(vstup);


	if (obce_->containsKey(vstup))
	{
		std::cout << "Obec\n";
		std::cout << "-------------------------------------------------------------\n";

		if (filterNazov->evaluate(*obce_->operator[](vstup), *kNazov)) {
			obce_->operator[](vstup)->vypisInfo();
			
			cout << obce_->operator[](vstup)->get_nazov_okresu() << endl;

			cout << obce_->operator[](vstup)->get_nazov_kraju() << endl;
			std::cout << "-------------------------------------------------------------\n";


		}

	}


	if (okresy_->containsKey(vstup))
	{
		std::cout << "Okres\n";
		std::cout << "-------------------------------------------------------------\n";

		if (filterNazov->evaluate(*okresy_->operator[](vstup), *kNazov)) {
			okresy_->operator[](vstup)->vypisInfo();
			std::cout << okresy_->operator[](vstup)->get_nazov_kraju();

			std::cout << "-------------------------------------------------------------\n";

		}

	}


	if (kraje_->containsKey(vstup))
	{
		std::cout << "Kraj:\n";
		std::cout << "-------------------------------------------------------------\n";

		if (filterNazov->evaluate(*kraje_->operator[](vstup), *kNazov)) {
			kraje_->operator[](vstup)->vypisInfo();
			std::cout << "-------------------------------------------------------------\n";


		}

	}

}

void Volby::vypisPodlaVolicov()
{
	int a;
	int b;
	int kolo;

	std::cout << " Zadaj interval, pre pocet volicov a v ktorom kole: \n";

	std::cout << "zadaj dolna hranica: \n";
	std::cin >> a;
	std::cout << "zadaj horna hranica: \n";
	std::cin >> b;
	std::cout << "zadaj, pre ktore kolo: \n";
	std::cin >> kolo;
	filterVolici->set_alpha(a);
	filterVolici->set_beta(b);
	kVolici->set_kolo(kolo);

	for (auto *item : *obce_)
	{
		
		if (filterVolici->evaluate(*item->accessData(), *kVolici))
		{
			std::cout << "Obec\n";

			std::cout << "-------------------------------------------------------------\n";

			item->accessData()->vypisInfo();
			std::cout << item->accessData()->get_nazov_okresu() << endl;
			std::cout << item->accessData()->get_nazov_kraju() << endl;
			
			std::cout << "-------------------------------------------------------------\n";
		}
		

	}
	for (auto *item : *okresy_)
	{
		

		if (filterVolici->evaluate(*item->accessData(), *kVolici))
		{
			std::cout << "Okres:\n";

			std::cout << "-------------------------------------------------------------\n";
			item->accessData()->vypisInfo();
			std::cout << item->accessData()->get_nazov_kraju() << endl;

			std::cout << "-------------------------------------------------------------\n";

		}

	}
	for (auto *item : *kraje_)
	{
		

		if (filterVolici->evaluate(*item->accessData(), *kVolici))
		{
			std::cout << "Kraj:\n";

			std::cout << "-------------------------------------------------------------\n";
			item->accessData()->vypisInfo();
			std::cout << "-------------------------------------------------------------\n";

		}

	}
	



}

void Volby::vypisPodlaUcasti()
{
	int a;
	int b;
	int kolo;


	std::cout << " Zadaj interval, pre pocet volicov a v ktorom kole: \n";

	std::cout << "zadaj dolna hranica: \n";
	std::cin >> a;
	std::cout << "zadaj horna hranica: \n";
	std::cin >> b;
	std::cout << "zadaj, pre ktore kolo: \n";
	std::cin >> kolo;
	filterUcast->set_alpha(a);
	filterUcast->set_beta(b);
	kUcast->set_kolo(kolo);



	for (auto *item : *obce_)
	{
		

		if (filterUcast->evaluate(*item->accessData(), *kUcast))
		{
			std::cout << "Obec\n";

			std::cout << "-------------------------------------------------------------\n";
			item->accessData()->vypisInfo();
			std::cout << item->accessData()->get_nazov_okresu() << endl;
			std::cout << item->accessData()->get_nazov_kraju() << endl;
			std::cout << "-------------------------------------------------------------\n";

		}

	}

	for (auto *item : *okresy_)
	{
		

		if (filterUcast->evaluate(*item->accessData(), *kUcast))
		{
			std::cout << "Okres\n";

			std::cout << "-------------------------------------------------------------\n";
			item->accessData()->vypisInfo();
			std::cout << item->accessData()->get_nazov_kraju() << endl;

			std::cout << "-------------------------------------------------------------\n";

		}

	}
	for (auto *item : *kraje_)
	{
		

		if (filterUcast->evaluate(*item->accessData(), *kUcast))
		{
			std::cout << "Kraj\n";

			std::cout << "-------------------------------------------------------------\n";
			item->accessData()->vypisInfo();
			std::cout << "-------------------------------------------------------------\n";

		}

	}

}

void Volby::zoradMenu()
{
	
	structures::UnsortedSequenceTable<string, Oblast*>* pomObce = new structures::UnsortedSequenceTable<string, Oblast*>();
	for (auto *item : *obce_)
	{
		if (filterUcast->evaluate(*item->accessData(), *kUcast))
		{
			pomObce->insert(item->accessData()->get_nazov(), item->accessData());
		}
	}

	char rozhodnutie;
	int a, b, kolo;
	std::cout << "Podla coho chces Zoradit uzemny celok?: \n";
	cout << "a.Nazov \n" << endl;
	cout << "b.Volici \n" << endl;
	cout << "c.Ucast\n" << endl;
	std::cin >> rozhodnutie;

	
	std::cout << " Zadaj interval, pre ucast volicov a v ktorom kole:(Filter ucast) \n";

	std::cout << "zadaj dolna hranica: \n";
	std::cin >> a;
	std::cout << "zadaj horna hranica: \n";
	std::cin >> b;
	std::cout << "zadaj, pre ktore kolo: \n";
	std::cin >> kolo;
	filterUcast->set_alpha(a);
	filterUcast->set_beta(b);

	kUcast->set_kolo(kolo);
	kVolici->set_kolo(kolo);
	

	if (rozhodnutie == 'a')
	{
		structures::HeapSort<string, Oblast*, string, Oblast>* heap_sort = new structures::HeapSort<string, Oblast*, string, Oblast>();
				
		heap_sort->sort(*pomObce, *kNazov );
		delete heap_sort;

	}
	if (rozhodnutie == 'b')
	{
		structures::HeapSort<string, Oblast*, int, Oblast>* heap_sort = new structures::HeapSort<string, Oblast*, int, Oblast>();

		heap_sort->sort(*pomObce, *kVolici);
		delete heap_sort;

	}
	if (rozhodnutie == 'c')
	{
		structures::HeapSort<string, Oblast*, double, Oblast>* heap_sort = new structures::HeapSort<string, Oblast*, double, Oblast>();

		

		heap_sort->sort(*pomObce, *kUcast);
		delete heap_sort;

	}
	for (auto item : *pomObce)
	{
		item->accessData()->vypisInfoKolo(kolo);
	}

	delete pomObce;
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

	delete filterNazov;
	delete filterNachadzaSa;
	delete filterUcast;
	delete filterVolici;

	delete kNazov;
	delete kVolici;
	delete kNachadzaSa;
	delete kUcast;


}

