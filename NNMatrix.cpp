//============================================================================
// Name        : NNMatrix.cpp
// Author      : sushant
// Version     :
// Copyright   : This is NeuralNetwork Tutorials
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Neuron.hpp"
#include "Matrix.hpp"
#include "NeuralNetwork.hpp"

using namespace std;

int main() {
	vector<int> topology;
		topology.push_back(3);
		topology.push_back(2);
		topology.push_back(3);

		vector<double> input;
		input.push_back(1.0);
		input.push_back(0.0);
		input.push_back(1.0);

		NeuralNetwork *nn = new NeuralNetwork(topology);
		nn->setCurrentInput(input);
	return 0;
}
