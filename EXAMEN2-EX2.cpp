//============================================================================
// Name        : EXAMEN-EX2.cpp
// Author      : Ivan Crescenti Hernandez
// Version     : 1.0
// Copyright   : Ivan Crescenti © Copyright 2020
// Description : Sample code written in C++
//============================================================================

#include <iostream>
using namespace std;

int main() {

	struct producte {
		string referencia;
		int pes;
		float preu;
	};

	producte formatge;

	cout << "Introduir referencia" << endl;
	cin >> formatge.referencia;
	cout << "Introduir pes" << endl;
	cin >> formatge.pes;
	cout << "Introduir preu" << endl;
	cin >> formatge.preu;

	cout << "La referencia del producte formatge es " << formatge.referencia;
	cout << ", pesa " << formatge.pes << " i costa " << formatge.preu;

	return 0;
}
