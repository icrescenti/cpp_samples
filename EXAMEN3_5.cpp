//============================================================================
// Name        : EXAMEN3_5.cpp
// Author      : Ivan Crescenti Hernandez
// Version     : 1.0
// Copyright   : Ivan Crescenti © Copyright 2020
// Description : Sample code written in C++
//============================================================================

#include <iostream>
using namespace std;

int quadrat(int v, int *p);

int main() {

	int n = 5;
	int *p = &n;
	cout << "El quadrat de " << n << " es " << quadrat(n, p);

	return 0;
}

int quadrat(int v, int *p)
{
	return v*(*p);
}
