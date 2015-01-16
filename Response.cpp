/*
 * Response.cpp
 *
 *  Created on: Jan 15, 2015
 *      Author: alex
 */

#include "Response.h"
using namespace std;
#include <iostream>

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

bool Response::checkSame()
{
	//if the numCorrect=4 then the two responses are the same
	if(numCorrect ==4)
	{
		//returns true if the numCorrect =4 because they are equal
		return true;
	}
	else
	{
		//prints out the number of correct and incorrect digits
		cout << "The number of digits in the correct position is " << numCorrect << ".\n";
		cout << "The number of digits in the incorrect position " << numIncorrect << ".\n";
	}
	//otherwise return false if the numCorrect is not equal to 4
	return false;
}
void Response::printNumCorrect()
{
	cout << "The number of digits in the correct position is " << numCorrect << ".\n";
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
//get function that returns the number of Correct positions
int Response::getCorrect()
{
	return numCorrect;
}
//get function that resturns the number of Incorrect positions
int Response::getIncorrect()
{
	return numIncorrect;
}
//set function to manually set the value of numCorrect
void Response::setNumCorrect(int const newNumCorrect)
{
	numCorrect = newNumCorrect;
}
//set function to manually set the value of incorrect
void Response::setNumIncorrect(int const newNumIncorrect)
{
	numIncorrect = newNumIncorrect;
}
Response::~Response() {
	// TODO Auto-generated destructor stub
}

