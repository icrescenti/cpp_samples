//============================================================================
// Name        : EXAMEN4_5.cpp
// Author      : Ivan Crescenti Hernandez
// Version     : 1.0
// Copyright   : Ivan Crescenti © Copyright 2020
// Description : Sample code written in C++
//============================================================================

#include <iostream>
#define MAX 5
using namespace std;

bool creixent(int taula[MAX], int posicio = 1);

int main() {

	int taula[MAX] = {0,1,2,3,4};

	if(creixent(taula))
	{
		cout << "La taula es creixent";
	}
	else
	{
		cout << "La taula NO es creixent";
	}

	return 0;
}

bool creixent(int taula[MAX], int posicio)
{
	if (posicio==MAX)
	{
		return true;
	}
	else if (taula[posicio]>taula[posicio-1])
	{
		return creixent(taula, posicio+1);
	}
	else
	{
		return false;
	}
}
