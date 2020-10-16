//============================================================================
// Name        : EXAMEN_PROVA_4.cpp
// Author      : Ivan Crescenti Hernandez
// Version     : 1.0
// Copyright   : Ivan Crescenti © Copyright 2020
// Description : Sample code written in C++
//============================================================================

#include <iostream>
#define MAX 3
using namespace std;

//VALORS PARELLS I SENARS
void distingir(int taula[], int &parells, int &senars);

int main() {
	int taula[MAX] = {1,2,3};

	int v1 = 0, v2 = 0;

	distingir(taula, v1, v2);
	cout << v1 << " parells i " << v2 << " senars";

	return 0;
}

void distingir(int taula[], int &parells, int &senars) {
	for (int i = 0;i<MAX;i++)
	{
		if ( taula[i] % 2 == 0 )
		{
			parells++;
		}
		else
		{
			senars++;
		}
	}
}
