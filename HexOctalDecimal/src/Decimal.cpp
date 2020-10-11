/*
 * Decimal.cpp
 *
 *  Created on: 09-Oct-2020
 *      Author: w100663
 */

#include "Decimal.h"
#include <iostream>
#include "BaseNumber.h"
using namespace std;
Decimal::Decimal(int no):BaseNumber(no) {
	// TODO Auto-generated constructor stub

}
void Decimal::print()
{
	cout<<"Decimal = "<<this->no<<endl;
}
Decimal::~Decimal() {
	// TODO Auto-generated destructor stub
}

