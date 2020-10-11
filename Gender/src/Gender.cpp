//============================================================================
// Name        : Gender.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
#include "Man.h"
#include "Woman.h"

using namespace std;

int main() {
	Person *p;
	p=new Man();
	p->wear();

	p=new Woman();
	p->wear();

	return 0;
}
