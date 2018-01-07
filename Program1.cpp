//============================================================================
// Name        : Program1.cpp
// Author      : sushant
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Neuron.hpp"
using namespace std;

int main() {
	Neuron *n  = new Neuron(199.8);

	cout << "Val " << n->getVal() << endl;
	cout << "Activate Val " << n->getActivateVal() << endl;
	cout << "Derived Val " << n->getDerivedVal() << endl;

	return 0;
}
