/*
 * Response.cpp
 *
 *  Created on: Jan 15, 2015
 *      Author: alex, Thurston
 */

#include "Response.h"
#include <iostream>
using namespace std;


// creates a default response
Response::Response()
{
	//sets the numCorrect and numIncorrect to -1 for debugging purposes
	//if either of them output -1, then those numbers haven't been touched
	numCorrect = -1;
	numIncorrect = -1;
}

//get function that returns the number of Correct positions
const int Response::getCorrect()
{
	return numCorrect;
}

//get function that resturns the number of Incorrect positions
const int Response::getIncorrect()
{
	return numIncorrect;
}

//set function to manually set the value of numCorrect
void Response::setNumCorrect(int const newNumCorrect)
{
	numCorrect = newNumCorrect; return;
}

//set function to manually set the value of incorrect
void Response::setNumIncorrect(int const newNumIncorrect)
{
	numIncorrect = newNumIncorrect; return;
}

// print the response
const void Response::printResponse()
{
	cout << "There are "<<numCorrect<<" digits in the correct position and "<<numIncorrect<<" in the wrong position.\n";
}

//This function checks to see if the two codes are the same and outputs true if they are the same
//and outputs false if they are different
const bool Response::checkSame(Response r)
{
	return (numCorrect == r.getCorrect()) && (numIncorrect == r.getIncorrect());
}

const bool Response::checkWin(const bool announce)
{
	//to check if the user won, it checks to see if the numCorrect is 4
	if(!announce) { return numCorrect==4;	}
	else
	{
	if(numCorrect == 4)
		{
			//returns true which indicates the human guessed the code
			cout << "You have guessed the right code!!!! You won!! now play again...." << ".\n";
			return true;
		}
		else 
		{
			//returns false which indicates that the human as not guessed the secret code yet
			cout << "Well you guessed it wrong...try again...\n";
			return false;
		}
	}
}

// deconstructor stub
Response::~Response()
{	/* TODO Auto-generated destructor stub */ }

