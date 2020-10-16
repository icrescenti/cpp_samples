//============================================================================
// Name        : EXAMEN3_1.cpp
// Author      : Ivan Crescenti Hernandez
// Version     : 1.0
// Copyright   : Ivan Crescenti © Copyright 2020
// Description : Sample code written in C++
//============================================================================

#include <iostream>
using namespace std;

bool iguals(int n1, int n2);

int main() {
	if (iguals(1,2))
	{
		cout << "Els valors coincideixen";
	}
	return 0;
}

bool iguals(int n1, int n2)
{
	if (n1==n2)
	{
		return true;
	}
	return false;
}
