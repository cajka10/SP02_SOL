#pragma once
#include "structures/table/sorted_sequence_table.h"
#include "Dedina.h"

class Volby
{
private:
	structures::SortedSequenceTable<string, Dedina> tabDedin;
public:
	Volby();
	~Volby();
	void nacitajDediny();

};
