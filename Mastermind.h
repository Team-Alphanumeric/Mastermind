/*
 * Mastermind.h
 *
 *  Created on: Jan 15, 2015
 *      Author: alex
 */

#ifndef MASTERMIND_H_
#define MASTERMIND_H_
#include "Code.h"
#include "Response.h"

class Mastermind {
public:
	Mastermind();
	void humanGuess();
	Response getResponse(Code sc, Code gs);
	void playGame();
	void playSeries();
	virtual ~Mastermind();
protected:
	Code secret;
	Code guess;
	Response r1;

};

#endif /* MASTERMIND_H_ */
