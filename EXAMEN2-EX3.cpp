//============================================================================
// Name        : EXAMEN2-EX3.cpp
// Author      : Ivan Crescenti Hernandez
// Version     : 1.0
// Copyright   : Ivan Crescenti © Copyright 2020
// Description : Sample code written in C++
//============================================================================

#include <iostream>
#define MAX 6
using namespace std;

int main() {

	//CREACIO DE MATRIU
	int matriu[MAX][MAX] = {4,7,5,5,2,1};

	//VALOR A BUSCAR
	int buscar = 5;

	bool trobat = false;
	int i = 0, j = 0, k = 0;
	while (!trobat && i<MAX)
	{
		while (!trobat && j<MAX)
		{
			if (matriu[i][j] == buscar)
			{
				k++;
			}
			if (k>1)
			{
				trobat = true;
			}
			j++;
		}
		i++;
	}

	if (trobat)
	{
		cout << "El valor 5 ha estat trobat com a minim dues vegades";
	}
	else
	{
		cout << "El valor 5 NO esta registrat mes de 2 vegades";
	}

	return 0;
}
