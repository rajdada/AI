/*
 * A.cpp
 *
 *  Created on: 05-Jan-2018
 *      Author: administrator
 */

#include "Neuron.hpp"


Neuron::Neuron(double val)
{
	this->val = val;
		activate();
		derivative();
}

// Fast sigmoid Function
// f(x) = x /(1 + |x|)
void Neuron::activate()
{
	this-> activateVal = this->val / (1 + std::abs(this->val));
}

// Derivative for fast sigmoid function
//f'(x) =  f(x) * (1 - f(x))
void Neuron::derivative()
{
	this->derivedVal = this->activateVal * (1 - this->activateVal);
}

