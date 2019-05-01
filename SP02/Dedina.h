#pragma once
#include <string>
using namespace  std;
class Dedina
{
private:
	string nazovDediny;
	int pocetZapVolicov;
	int pocetVydObalok;
	double ucastVolicovPercenta;
	int pocetOdovzdObalok;
	int pocetPlatHlasov;
public:
	Dedina(string parNazov, int parPocetZapVolicov, int parPocetVydObalok, double parUcastVolicovPer, int pocetOdovzdObalok, int parPocPlatHlasov); 
	~Dedina();
	 
	string get_nazov_dediny() const
	{
		return nazovDediny;
	}

	void set_nazov_dediny(const string& nazov_dediny)
	{
		nazovDediny = nazov_dediny;
	}

	int get_pocet_zap_volicov() const
	{
		return pocetZapVolicov;
	}

	void set_pocet_zap_volicov(int pocet_zap_volicov)
	{
		pocetZapVolicov = pocet_zap_volicov;
	}

	int get_pocet_vyd_obalok() const
	{
		return pocetVydObalok;
	}

	void set_pocet_vyd_obalok(int pocet_vyd_obalok)
	{
		pocetVydObalok = pocet_vyd_obalok;
	}

	double get_ucast_volicov_percenta() const
	{
		return ucastVolicovPercenta;
	}

	void set_ucast_volicov_percenta(double ucast_volicov_percenta)
	{
		ucastVolicovPercenta = ucast_volicov_percenta;
	}

	int get_pocet_odovzd_obalok() const
	{
		return pocetOdovzdObalok;
	}

	void set_pocet_odovzd_obalok(int pocet_odovzd_obalok)
	{
		pocetOdovzdObalok = pocet_odovzd_obalok;
	}

	int get_pocet_plat_hlasov() const
	{
		return pocetPlatHlasov;
	}

	void set_pocet_plat_hlasov(int pocet_plat_hlasov)
	{
		pocetPlatHlasov = pocet_plat_hlasov;
	}
};
