#pragma once
#include <string>

class Oblast
{
private:
	std::string nazov_;
	
	int pocetZapVolicov_;
	int pocetVydObalok_;
	double ucastVolicovPercenta_;
	int pocetOdovzdObalok_;
	int pocetPlatHlasov_;

public:

	Oblast(std::string nazov, int pocet_zap_volicov, int pocet_vyd_obalok, double ucast_volicov_percenta,
		int pocet_odovzd_obalok, int pocet_plat_hlasov)
		: nazov_(nazov),
		  pocetZapVolicov_(pocet_zap_volicov),
		  pocetVydObalok_(pocet_vyd_obalok),
		  ucastVolicovPercenta_(ucast_volicov_percenta),
		  pocetOdovzdObalok_(pocet_odovzd_obalok),
		  pocetPlatHlasov_(pocet_plat_hlasov)
	{
	}

	std::string get_nazov() const
	{
		return nazov_;
	}

	void set_nazov_kraja(const std::string& nazov_kraja)
	{
		nazov_ = nazov_kraja;
	}

	int get_pocet_zap_volicov() const
	{
		return pocetZapVolicov_;
	}

	void set_pocet_zap_volicov(int pocet_zap_volicov)
	{
		pocetZapVolicov_ = pocet_zap_volicov;
	}

	int get_pocet_vyd_obalok() const
	{
		return pocetVydObalok_;
	}

	void set_pocet_vyd_obalok(int pocet_vyd_obalok)
	{
		pocetVydObalok_ = pocet_vyd_obalok;
	}

	double get_ucast_volicov_percenta() const
	{
		return ucastVolicovPercenta_;
	}

	void set_ucast_volicov_percenta(double ucast_volicov_percenta)
	{
		ucastVolicovPercenta_ = ucast_volicov_percenta;
	}

	int get_pocet_odovzd_obalok() const
	{
		return pocetOdovzdObalok_;
	}

	void set_pocet_odovzd_obalok(int pocet_odovzd_obalok)
	{
		pocetOdovzdObalok_ = pocet_odovzd_obalok;
	}

	int get_pocet_plat_hlasov() const
	{
		return pocetPlatHlasov_;
	}

	void set_pocet_plat_hlasov(int pocet_plat_hlasov)
	{
		pocetPlatHlasov_ = pocet_plat_hlasov;
	}
};
