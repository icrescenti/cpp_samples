//============================================================================
// Name        : EXAMEN3_2.cpp
// Author      : Ivan Crescenti Hernandez
// Version     : 1.0
// Copyright   : Ivan Crescenti © Copyright 2020
// Description : Sample code written in C++
//============================================================================

#include <iostream>
using namespace std;

void operacions(int &n1, int &n2);

int main() {
	cout << "Primer valor:";
	int i;
	cin >> i;
	cout << "Segon valor:";
	int j;
	cin >> j;

	operacions (i, j);
	cout << "La multiplicacio es " << i << endl;
	cout << "i la divisio es " << j << endl;

	return 0;
}

void operacions(int &n1, int &n2)
{
	int aux = n1;
	n1=n1*n2;
	n2=aux/n2;
}

