//============================================================================
// Name        : EXAMEN2-EX5.cpp
// Author      : Ivan Crescenti Hernandez
// Version     : 1.0
// Copyright   : Ivan Crescenti © Copyright 2020
// Description : Sample code written in C++
//============================================================================

#include <iostream>
#define MAX 5
using namespace std;

int main() {

	int taula[MAX] = {4,5,6,2,3};
	int matriu[MAX][MAX] = {4,5,6,2,3};

	bool trobat = false;
	int i = 0, j = 0, k = 0;
	while (!trobat && i<MAX)
	{
		while (!trobat && j<MAX)
		{
			if (matriu[i][j] == taula[k])
			{
				k++;
			}
			if (k==MAX)
			{
				trobat = true;
			}
			j++;
		}
		i++;
	}

	if (trobat)
	{
		cout << "Els valors del array existeixen dins la matriu";
	}
	else
	{
		cout << "Els valors del array NO existeixen dins la matriu";
	}

	return 0;
}
