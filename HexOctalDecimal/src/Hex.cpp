/*
 * Hex.cpp
 *
 *  Created on: 09-Oct-2020
 *      Author: w100663
 */

#include "Hex.h"
#include "BaseNumber.h"
#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
using namespace std;

Hex::Hex(int no):BaseNumber(no)
{

}

void Hex::print()
{
		stringstream str1;
		str1<<hex<<this->no;
		string result=str1.str();
		cout<<"Hex = "<<result<<endl;
}

Hex::~Hex() {
	// TODO Auto-generated destructor stub
}

