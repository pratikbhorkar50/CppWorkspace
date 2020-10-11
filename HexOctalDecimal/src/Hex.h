/*
 * Hex.h
 *
 *  Created on: 09-Oct-2020
 *      Author: w100663
 */

#ifndef HEX_H_
#define HEX_H_
#include "BaseNumber.h"
class Hex:public BaseNumber {
public:
	Hex(int no);
	void print();
	virtual ~Hex();
};

#endif /* HEX_H_ */
