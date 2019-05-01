#include "Dedina.h"

Dedina::Dedina(string parNazov, int parPocetZapVolicov, int parPocetVydObalok, double parUcastVolicovPer, int parPocetOdovzdObalok, int parPocPlatHlasov)
{
	this->nazovDediny_ = parNazov;
	this->pocetZapVolicov_ = parPocetZapVolicov;
	this->pocetVydObalok_ = parPocetVydObalok;
	this->ucastVolicovPercenta_ = parUcastVolicovPer;
	this->pocetOdovzdObalok_ = parPocetOdovzdObalok;
	this->pocetPlatHlasov_ = parPocPlatHlasov;
}
Dedina::~Dedina()
{
	
}
