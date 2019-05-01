#pragma once
#include "structures/table/sorted_sequence_table.h"
#include "Dedina.h"

class Volby
{
private:
	structures::SortedSequenceTable<string, Dedina*>* dediny_;
public:
	Volby();
	~Volby();
	void nacitajDediny();

};
