#pragma once
#include <string>
#include "Oblast.h"

class Kraj : public Oblast
{
private:
	
public:

	Kraj(std::string nazov, int pocet_zap_volicov, int pocet_vyd_obalok, double ucast_volicov_percenta,
		int pocet_odovzd_obalok, int pocet_plat_hlasov);
	~Kraj();

	
};
