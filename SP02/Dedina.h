#pragma once
#include <string>
using namespace  std;
class Dedina
{
private:
	string nazovDediny_;
	int pocetZapVolicov1_;
	int pocetVydObalok1_;
	double ucastVolicovPercenta1_;
	int pocetOdovzdObalok1_;
	int pocetPlatHlasov1_;
	int pocetZapVolicov2_;
	int pocetVydObalok2_;
	double ucastVolicovPercenta2_;
	int pocetOdovzdObalok2_;
	int pocetPlatHlasov2_;
public:
	Dedina(string parNazov, int parPocetZapVolicov1, int parPocetVydObalok1, double parUcastVolicovPer1, int parPocetOdovzdObalok1, int parPocPlatHlasov1,
		int parPocetZapVolicov2, int parPocetVydObalok2, double parUcastVolicovPer2, int parPocetOdovzdObalok2, int parPocPlatHlasov2);
	~Dedina();
	 
	string get_nazov_dediny() const
	{
		return nazovDediny_;
	}

	void set_nazov_dediny(const string& nazov_dediny)
	{
		nazovDediny_ = nazov_dediny;
	}

	int get_pocet_zap_volicov() const
	{
		return pocetZapVolicov1_;
	}

	void set_pocet_zap_volicov(int pocet_zap_volicov)
	{
		pocetZapVolicov1_ = pocet_zap_volicov;
	}

	int get_pocet_vyd_obalok() const
	{
		return pocetVydObalok1_;
	}

	void set_pocet_vyd_obalok(int pocet_vyd_obalok)
	{
		pocetVydObalok1_ = pocet_vyd_obalok;
	}

	double get_ucast_volicov_percenta() const
	{
		return ucastVolicovPercenta1_;
	}

	void set_ucast_volicov_percenta(double ucast_volicov_percenta)
	{
		ucastVolicovPercenta1_ = ucast_volicov_percenta;
	}

	int get_pocet_odovzd_obalok() const
	{
		return pocetOdovzdObalok1_;
	}

	void set_pocet_odovzd_obalok(int pocet_odovzd_obalok)
	{
		pocetOdovzdObalok1_ = pocet_odovzd_obalok;
	}

	int get_pocet_plat_hlasov() const
	{
		return pocetPlatHlasov1_;
	}

	void set_pocet_plat_hlasov(int pocet_plat_hlasov)
	{
		pocetPlatHlasov1_ = pocet_plat_hlasov;
	}
};
