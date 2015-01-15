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
//This function checks to see if the two codes are the same and outputs true if they are the same
//and outputs false if they are differnt
//this is the same as the numCorrect method and if the output is not 4 then they are different

bool Response::checkSame(Code secret, Code guess)
{
	//call the numCorrect method here to check to see if they are the same
	//if the numCorrect=4 then the two responses are the same
	if(numCorrect ==4)
	{
		//returns true if the numCorrect =4 because they are equal
		return true;
	}
	//otherwise return false if the numCorrect is not equal to 4
	return false;
}
void Response::printNumCorrect()
{

}
bool Response::checkWin()
{
	//to check if the user won, it checks to see if the numCorrect is 4, if it is then the
	//reponses are the same so the guesser won
	if(numCorrect == 4)
	{
		//returns true which indicates the human guessed the code
		return true;
	}
	//returns false which indicates that the human as not guessed the secret code yet
	return false;
}
int Response::getCorrect()
{
	return numCorrect;
}

Response::~Response() {
	// TODO Auto-generated destructor stub
}

