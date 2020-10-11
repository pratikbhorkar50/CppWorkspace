//============================================================================
// Name        : HexOctalDecimal.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "BaseNumber.h"
#include "Hex.h"
#include "Octal.h"
#include "Decimal.h"


using namespace std;

int main() {

	BaseNumber *b;
	int num;

	while(true)
	{
		cout<<"Enter your number"<<endl;
		cin>>num;
		if(num>0)
		{
			b=new Hex(num);
			b->print();
			b=new Octal(num);
			b->print();
			b=new Decimal(num);
			b->print();
		}
		else
		{
			cout<<"Bye"<<endl;
			break;
		}
	}

	return 0;
}
