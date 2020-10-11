/*
 * Octal.h
 *
 *  Created on: 09-Oct-2020
 *      Author: w100663
 */

#ifndef OCTAL_H_
#define OCTAL_H_
#include "BaseNumber.h"

class Octal:public BaseNumber {
public:
	Octal(int no);
	void print();
	virtual ~Octal();
};

#endif /* OCTAL_H_ */
