/*
 * Response.h
 *
 *  Created on: Jan 15, 2015
 *      Author: alex
 */

#ifndef RESPONSE_H_
#define RESPONSE_H_

class Response {
public:
	Response();
	bool checkWin();
	bool checkSame(Coder secret, Code guess);
	int getCorrect();
	virtual ~Response();
private:
	int numCorrect;
	int numIncorrect;
};

#endif /* RESPONSE_H_ */
