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
	bool checkSame(Code secret, Code guess);
	int getCorrect();
	void printNumCorrect();
	virtual ~Response();
private:
	int numCorrect;
	int numIncorrect;
};

#endif /* RESPONSE_H_ */
