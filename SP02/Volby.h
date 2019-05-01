#pragma once
#include "structures/table/sorted_sequence_table.h"
#include "Dedina.h"
#include "structures/table/unsorted_sequence_table.h"
#include "Kraj.h"

class Volby
{
private:
	structures::SortedSequenceTable<string, Dedina*>* dediny_;
	structures::SortedSequenceTable<string, Kraj*>* kraje_;
public:
	Volby();
	~Volby();
	void nacitajSubory();

};
