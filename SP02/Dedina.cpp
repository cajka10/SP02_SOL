#include "Dedina.h"

Dedina::Dedina(string parNazov, int parPocetZapVolicov1, int parPocetVydObalok1, double parUcastVolicovPer1, int parPocetOdovzdObalok1, int parPocPlatHlasov1,
	int parPocetZapVolicov2, int parPocetVydObalok2, double parUcastVolicovPer2, int parPocetOdovzdObalok2, int parPocPlatHlasov2)
{
	this->nazovDediny_ = parNazov;
	this->pocetZapVolicov1_ = parPocetZapVolicov1;
	this->pocetVydObalok1_ = parPocetVydObalok1;
	this->ucastVolicovPercenta1_ = parUcastVolicovPer1;
	this->pocetOdovzdObalok1_ = parPocetOdovzdObalok1;
	this->pocetPlatHlasov1_ = parPocPlatHlasov1;

	this->pocetZapVolicov2_ = parPocetZapVolicov2;
	this->pocetVydObalok2_ = parPocetVydObalok2;
	this->ucastVolicovPercenta2_ = parUcastVolicovPer2;
	this->pocetOdovzdObalok2_ = parPocetOdovzdObalok2;
	this->pocetPlatHlasov2_ = parPocPlatHlasov2;
}
Dedina::~Dedina()
{
	
}
