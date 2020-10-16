//============================================================================
// Name        : EXAMEN3_3.cpp
// Author      : Ivan Crescenti Hernandez
// Version     : 1.0
// Copyright   : Ivan Crescenti © Copyright 2020
// Description : Sample code written in C++
//============================================================================

#include <iostream>
#define MAX 5
using namespace std;

bool comprovar(int taula1[], int taula2[]);

int main() {

	int taula1[MAX] = {1,2,3,4,5};
	int taula2[MAX] = {1,2,3,4,5};

	if (comprovar(taula1, taula2))
	{
		cout << "Les taules son iguals";
	}

	return 0;
}

bool comprovar(int taula1[], int taula2[])
{
	int i = 0;
	bool iguals = true;
	while (i<MAX && iguals)
	{
		if (taula1[i] != taula2[i])
		{
			iguals = false;
		}
		i++;
	}
	return iguals;
}
