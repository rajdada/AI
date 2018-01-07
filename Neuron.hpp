/*
 * A.h
 *
 *  Created on: 05-Jan-2018
 *      Author: administrator
 */

#ifndef NEURON_HPP_
#define NEURON_HPP_

#include <iostream>
#include <cmath>

class Neuron {
public:
	Neuron(double val);

	// Fast sigmoid Function
	// f(x) = x /(1 + |x|)
	void activate();

	// Derivative for fast sigmoid function
	//f'(x) =  f(x) * (1 - f(x))
	void derivative();

	// Getter
	double getVal()
	{
		return this-> val;
	}

	double getActivateVal()
	{
		return this-> activateVal;
	}

	double getDerivedVal()
	{
		return this-> derivedVal;
	}

private:

	//1.5
	double val;

	//0-1
	double activateVal;

	//
	double derivedVal;
};

#endif /* NEURON_HPP_ */
