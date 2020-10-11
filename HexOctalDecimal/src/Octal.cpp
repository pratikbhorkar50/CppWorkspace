#include "Octal.h"
#include <iostream>
#include "BaseNumber.h"
#include <cstring>
#include <string>
#include <iomanip>

using namespace std;
Octal::Octal(int no):BaseNumber(no) {
	// TODO Auto-generated constructor stub

}

void Octal::print()
{
		stringstream str1;
		str1<<oct<<this->no;
		string result=str1.str();
		cout<<"Octal = "<<result<<endl;
}

Octal::~Octal() {
	// TODO Auto-generated destructor stub
}

