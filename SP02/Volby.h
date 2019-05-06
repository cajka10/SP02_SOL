#pragma once
#include "structures/table/sorted_sequence_table.h"
#include "Obec.h"
#include "structures/table/unsorted_sequence_table.h"
#include "Kraj.h"
#include "Okres.h"
#include "Kriterium.h"
#include "structures/table/sorting/heap_sort.h"
#include "Filter.h"
#include "Filter_fi.h"
#include "FilterFI.h"
#include "KriteriumNazov.h"
#include "KriteriumVolici.h"
#include "KriteriumUcast.h"
#include "KriteriumNachadzaSa.h"

class Volby
{
private:
	structures::SortedSequenceTable<string, Obec*>* obce_;
	structures::SortedSequenceTable<string, Kraj*>* kraje_;
	structures::SortedSequenceTable<string, Okres*>* okresy_;
	FilterFI<double, Oblast>* filterUcast;
	Filter_fi<bool, Oblast>* filterNachadzaSa;
	Filter_fi<string, Oblast>* filterNazov;
	FilterFI<int, Oblast>* filterVolici;
	

	KriteriumVolici<int, Oblast>* kVolici;
	Kriterium<string, Oblast>* kNazov;
	KriteriumUcast<double, Oblast>* kUcast;
	KriteriumNachadzaSa<bool, Oblast>* kNachadzaSa;

	
public:
	Volby();
	~Volby();
	void nacitajSubory();
	void vypisMenu();
	void vypisPodla();
	void vypisPodlaNazvu();
	void vypisPodlaVolicov();
	void vypisPodlaUcasti();
	void zoradMenu();
	template<typename K, typename T, typename S>
	void zoradPodla(structures::SortedSequenceTable<K, T>& table, Kriterium<S,T>& kriterium);
	

};

template<typename K, typename T, typename S>
inline void Volby::zoradPodla(structures::SortedSequenceTable<K, T>& table, Kriterium<S, T>& kriterium)
{
	
	structures::UnsortedSequenceTable<string, Oblast*>* kktina = new structures::UnsortedSequenceTable<string, Oblast*>();

	for (auto *item : table)
	{
		if (filterUcast->evaluate(*item->accessData(), kUcast) && filterNachadzaSa->evaluate(*item->accessData(), kNachadzaSa))
		{
			
			

		}
	}
	structures::HeapSort<K, T> heap_sort = new structures::HeapSort<K, T>;
	heap_sort.sort(table);
}
