//============================================================================
// Name        : EXAMEN3_4.cpp
// Author      : Ivan Crescenti Hernandez
// Version     : 1.0
// Copyright   : Ivan Crescenti © Copyright 2020
// Description : Sample code written in C++
//============================================================================

#include <iostream>
using namespace std;

char lletra(int dni);

int main() {

	int n = 41666490;
	cout << n << lletra(n);

	return 0;
}

char lletra(int dni)
{
	char lletres[23] = {'T', 'R', 'W', 'A', 'G', 'M', 'Y', 'F', 'P', 'D', 'X', 'B', 'N', 'J', 'Z', 'S', 'Q', 'V', 'H', 'L', 'C', 'K', 'E'};
	return lletres[dni%23];
}
