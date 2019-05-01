#pragma once
#include <string>

class Oblast
{
private:
	std::string nazov_;
	
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

	Oblast(std::string nazov)
		: nazov_(nazov)
		  
	{
	}


	std::string get_nazov() const
	{
		return nazov_;
	}

	void set_nazov(const std::string& nazov)
	{
		nazov_ = nazov;
	}

	int get_pocet_zap_volicov1() const
	{
		return pocetZapVolicov1_;
	}

	void set_pocet_zap_volicov1(int pocet_zap_volicov1)
	{
		pocetZapVolicov1_ = pocet_zap_volicov1;
	}

	int get_pocet_vyd_obalok1() const
	{
		return pocetVydObalok1_;
	}

	void set_pocet_vyd_obalok1(int pocet_vyd_obalok1)
	{
		pocetVydObalok1_ = pocet_vyd_obalok1;
	}

	double get_ucast_volicov_percenta1() const
	{
		return ucastVolicovPercenta1_;
	}

	void set_ucast_volicov_percenta1(double ucast_volicov_percenta1)
	{
		ucastVolicovPercenta1_ = ucast_volicov_percenta1;
	}

	int get_pocet_odovzd_obalok1() const
	{
		return pocetOdovzdObalok1_;
	}

	void set_pocet_odovzd_obalok1(int pocet_odovzd_obalok1)
	{
		pocetOdovzdObalok1_ = pocet_odovzd_obalok1;
	}

	int get_pocet_plat_hlasov1() const
	{
		return pocetPlatHlasov1_;
	}

	void set_pocet_plat_hlasov1(int pocet_plat_hlasov1)
	{
		pocetPlatHlasov1_ = pocet_plat_hlasov1;
	}

	int get_pocet_zap_volicov2() const
	{
		return pocetZapVolicov2_;
	}

	void set_pocet_zap_volicov2(int pocet_zap_volicov2)
	{
		pocetZapVolicov2_ = pocet_zap_volicov2;
	}

	int get_pocet_vyd_obalok2() const
	{
		return pocetVydObalok2_;
	}

	void set_pocet_vyd_obalok2(int pocet_vyd_obalok2)
	{
		pocetVydObalok2_ = pocet_vyd_obalok2;
	}

	double get_ucast_volicov_percenta2() const
	{
		return ucastVolicovPercenta2_;
	}

	void set_ucast_volicov_percenta2(double ucast_volicov_percenta2)
	{
		ucastVolicovPercenta2_ = ucast_volicov_percenta2;
	}

	int get_pocet_odovzd_obalok2() const
	{
		return pocetOdovzdObalok2_;
	}

	void set_pocet_odovzd_obalok2(int pocet_odovzd_obalok2)
	{
		pocetOdovzdObalok2_ = pocet_odovzd_obalok2;
	}

	int get_pocet_plat_hlasov2() const
	{
		return pocetPlatHlasov2_;
	}

	void set_pocet_plat_hlasov2(int pocet_plat_hlasov2)
	{
		pocetPlatHlasov2_ = pocet_plat_hlasov2;
	}
};
