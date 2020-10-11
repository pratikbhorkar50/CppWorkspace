/*
 * Decimal.h
 *
 *  Created on: 09-Oct-2020
 *      Author: w100663
 */

#ifndef DECIMAL_H_
#define DECIMAL_H_
#include "BaseNumber.h"
class Decimal:public BaseNumber {
public:
	Decimal(int no);

	void print();
	virtual ~Decimal();
};

#endif /* DECIMAL_H_ */
