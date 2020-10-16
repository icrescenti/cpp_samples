//============================================================================
// Name        : EXAMEN4_1.cpp
// Author      : Ivan Crescenti Hernandez
// Version     : 1.0
// Copyright   : Ivan Crescenti © Copyright 2020
// Description : Sample code written in C++
//============================================================================

#include <iostream>
using namespace std;

int calcul(int valor1, int valor2, char caracter = 's');

int main() {

	cout << calcul(4,4);

	return 0;
}

int calcul(int valor1, int valor2, char caracter)
{
	if (caracter == 's')
	{
		return valor1 + valor2;
	}
	else if (caracter == 'm')
	{
		return valor1 * valor2;
	}
	else if (caracter == 'd')
	{
		return valor1 / valor2;
	}
	//-1 significa error
	return -1;
}
