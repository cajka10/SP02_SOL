#pragma once
#include "structures/table/sorted_sequence_table.h"
#include "Dedina.h"
#include "structures/table/unsorted_sequence_table.h"

class Volby
{
private:
	structures::SortedSequenceTable<string, Dedina*>* dediny_;
public:
	Volby();
	~Volby();
	void nacitajDediny();

};
