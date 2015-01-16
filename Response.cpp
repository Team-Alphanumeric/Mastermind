/*
 * Response.cpp
 *
 *  Created on: Jan 15, 2015
 *      Author: alex
 */

#include "Response.h"

//constructor method for the Response class
Response::Response()
{
	//sets the numCorrect and numIncorrect to -1 for debugging purposes
	//if either of them output -1, then those numbers haven't been touched
	numCorrect = -1;
	numIncorrect = -1;
}
//This function checks to see if the two responses are the same and outputs true if they are the same
//and outputs false if they are differnt
bool Response::checkSame(Response r)
{
	// check if response data matches this object's data
	return ((numCorrect==r.getCorrect())&&(numIncorrect==r.getIncorrect()));
}
void Response::printResponse()
{
	// print data to the screen
	printf("Correct: %i\nIncorrect: %i\n",numCorrect,numIncorrect); return;
}
//to check if the user won, it checks to see if the numCorrect is 4, if it is then the
//reponses are the same so the guesser won
bool Response::checkWin()
{
	return (numCorrect == 4); 
}

const int Response::getCorrect()
{
	return numCorrect;
}

const int Response::getIncorrect()
{
	return numIncorrect;
}
// set the value of the number of correct guesses for this response
void Response::setCorrect(const int n)
{
	numCorrect=n; return;
}
// set the value of the number of incorrect guesses for this response
void Response::setIncorrect(const int n)
{
	numIncorrect=n; return;
}

Response::~Response() {
	// TODO Auto-generated destructor stub
}

