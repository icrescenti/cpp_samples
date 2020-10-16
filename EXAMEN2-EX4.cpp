//============================================================================
// Name        : EXAMEN2-EX4.cpp
// Author      : Ivan Crescenti Hernandez
// Version     : 1.0
// Copyright   : Ivan Crescenti © Copyright 2020
// Description : Sample code written in C++
//============================================================================

#include <iostream>
#define MAX 5
using namespace std;

int main() {

	string frase;
	char original;
	char nou;

	cout << "Escriure una frase" << endl;
	cin >> frase;

	cout << "Caracter original" << endl;
	cin >> original;

	cout << "Caracter nou" << endl;
	cin >> nou;

	for (int i = 0;i<frase.length();i++)
	{
		if (frase[i] == original)
		{
			frase[i] = nou;
		}
	}
	cout << endl << frase;

	return 0;
}
