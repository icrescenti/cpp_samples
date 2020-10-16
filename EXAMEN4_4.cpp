//============================================================================
// Name        : EXAMEN4_4.cpp
// Author      : Ivan Crescenti Hernandez
// Version     : 1.0
// Copyright   : Ivan Crescenti © Copyright 2020
// Description : Sample code written in C++
//============================================================================

#include <iostream>
#define MAX 5
using namespace std;

template <class tipus1, class tipus2> void inserir (tipus1 taula[MAX], tipus2 element, int posicio);
template <class tipus> void mostrar (tipus taula[MAX]);

int main() {

	cout << "EL TEMPLATE \"MOSTRAR\" L'HE FET DE MANERA VOLUNTARIA PERQUE RESULTI MES FACIL DE VISUALITZAR EL RESULTAT" << endl;

	char taula[MAX] = {'a','b','c','d','e'};

	mostrar (taula);
	inserir (taula, 'x', 2);
	mostrar (taula);

	return 0;
}

template <class tipus1, class tipus2> void inserir (tipus1 taula[MAX], tipus2 element, int posicio)
{
	taula[posicio] = element;
}

template <class tipus> void mostrar (tipus taula[MAX])
{
	for (int i = 0; i<MAX; i++)
	{
		cout << taula[i] << ",";
	}
	cout << endl;
}
