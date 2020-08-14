/*
 * NeuralNetwork.hpp
 *
 *  Created on: 06-Jan-2018
 *      Author: administrator
 */

#ifndef NEURALNETWORK_HPP_
#define NEURALNETWORK_HPP_

#include <iostream>
#include <vector>
#include "Layer.hpp"
#include "Matrix.hpp"

using namespace std;

class NeuralNetwork
{

	public :

	   NeuralNetwork(vector<int> topology);
	   void setCurrentInput(vector<double> input);
	   void printToConsole();

	private :

		int topologySize;

		vector<int> topology;
		vector<double> input;
		vector<Matrix *> weightMatrices;
		vector<Layer *> layers;
};


#endif /* NEURALNETWORK_HPP_ */
