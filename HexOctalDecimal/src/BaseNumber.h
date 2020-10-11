/*
 * BaseNumber.h
 *
 *  Created on: 09-Oct-2020
 *      Author: w100663
 */

#ifndef BASENUMBER_H_
#define BASENUMBER_H_

class BaseNumber {

protected:
	int no;

public:
	BaseNumber();

	BaseNumber(int no);

	virtual void print()=0;

	int getNo() const {
		return no;
	}

	void setNo(int no) {
		this->no = no;
	}

	virtual ~BaseNumber();
};

#endif /* BASENUMBER_H_ */
