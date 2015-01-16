/*
 * Response.h
 *
 *  Created on: Jan 15, 2015
 *      Author: alex
 */

#ifndef RESPONSE_H_
#define RESPONSE_H_
#include "Code.h"

class Response {
public:
	Response();
	bool checkWin();
	bool checkSame();
	int getCorrect();
	int getIncorrect();
	void printNumCorrect();
	void setNumCorrect(int const newNumCorrect);
	void setNumIncorrect(int const newNumIncorrect);
	virtual ~Response();
private:
	int numCorrect;
	int numIncorrect;
};

#endif /* RESPONSE_H_ */
