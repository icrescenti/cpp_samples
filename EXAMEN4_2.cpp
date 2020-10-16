//============================================================================
// Name        : EXAMEN4_2.cpp
// Author      : Ivan Crescenti Hernandez
// Version     : 1.0
// Copyright   : Ivan Crescenti © Copyright 2020
// Description : Sample code written in C++
//============================================================================

#include <iostream>
using namespace std;

int multiplicar(int valor1, int valor2);
int multiplicar(int valor1, int valor2, int valor3);

int main() {

	cout << multiplicar(4,3,2);

	return 0;
}

int multiplicar(int valor1, int valor2)
{
	return valor1*valor2;
}

int multiplicar(int valor1, int valor2, int valor3)
{
	return valor1 * valor2 * valor3;
}
