/*
 * Response.cpp
 *
 *  Created on: Jan 15, 2015
 *      Author: alex
 */

#include "Response.h"

Response::Response()
{
	numCorrect = -1;
	numIncorrect = -1;
}
bool Response::checkSame()
{

}
bool Response::checkWin()
{
	if(numCorrect == 4)
	{
		return true;
	}
	return false;
}
int Response::getCorrect()
{

}

Response::~Response() {
	// TODO Auto-generated destructor stub
}

