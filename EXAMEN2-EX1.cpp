//============================================================================
// Name        : EXAMEN2-EX1.cpp
// Author      : Ivan Crescenti Hernandez
// Version     : 1.0
// Copyright   : Ivan Crescenti © Copyright 2020
// Description : Sample code written in C++
//============================================================================

#include <iostream>
#define MAX 5
using namespace std;

int main() {

		//CREA TAULA
	    int taula[MAX] = {2,4,7,7,9};

	    //ESQUEMA DE CERCA
	    cout << "Busca dos valors consecutius iguals." << endl;

	    //CODI
		bool trobat = false;
	    int i = 0;
	    while (!trobat && i<MAX)
	    {
	        if (taula[i] == taula[i+1])
	        {
	            trobat = true;
			}
	        i++;
		}

	    if (trobat)
	    {
	        cout << "Valor " << taula[i] << " trobat a la posicio "<< i;
		}else
	    {
	        cout << "Valor no trobat repetit";
		}

	return 0;
}
