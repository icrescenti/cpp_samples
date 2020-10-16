//============================================================================
// Name        : EXAMEN4_3.cpp
// Author      : Ivan Crescenti Hernandez
// Version     : 1.0
// Copyright   : Ivan Crescenti © Copyright 2020
// Description : Sample code written in C++
//============================================================================

#include <iostream>
using namespace std;

struct ous {
	int dotzenes;
	int ous_solts;
};

ous operator+(ous pack1, ous pack2);

int main() {

	ous pack1;
	ous	pack2;

	pack1.dotzenes=3;
	pack1.ous_solts=7;

	pack2.dotzenes=5;
	pack2.ous_solts=8;

	ous resultat;

	resultat = pack1 + pack2;

	cout << "Dotzenes: " << resultat.dotzenes << endl << "Solts: " << resultat.ous_solts;

	return 0;
}

ous operator+(ous pack1, ous pack2)
{
	ous resultat;

	int total_solts = pack1.ous_solts + pack2.ous_solts + (pack1.dotzenes * 12) + (pack2.dotzenes * 12);
	resultat.dotzenes = total_solts/12;
	resultat.ous_solts = total_solts%12;

	return resultat;
}
