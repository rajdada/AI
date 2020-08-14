/*
 * Layer.hpp
 *
 *  Created on: 06-Jan-2018
 *      Author: administrator
 */

#ifndef LAYER_HPP_
#define LAYER_HPP_

#include <iostream>
#include "Neuron.hpp"
#include "Matrix.hpp"

using namespace std;

class Layer
{

	public :

	   Layer(int size);

	   void setVal(int i, double v);

	   Matrix *matrixifyVals();
	   Matrix *matrixifyActivatedVals();
	   Matrix *matrixifyDerivedVals();

	private :

		int size;

		vector < Neuron * > neurons;
};

#endif /* LAYER_HPP_ */
