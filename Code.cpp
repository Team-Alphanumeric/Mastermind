/*
 * Code.cpp
 *
 *  Created on: Jan 15, 2015
 *      Author: alex
 */

#include "Code.h"
#include <vector>
using namespace std;
#include <iostream>
#include <cstdlib>
#include <stdio.h>


Code::Code()
{
	cd.resize(5);
	int test;
	// TODO Auto-generated constructor stub
	 for(int ii=0;ii<4;ii++)
	 {
		 cd[ii] = (int) rand() % 6;
	 }
}
Code::Code(int arr[])
{
	 setCode(arr);
}
Code::~Code() {
	// TODO Auto-generated destructor stub
}
void Code::setCode(int arr[])
{
	cd.resize(4);
	for(int ii=0;ii<4;ii++)
	{
		cd[ii] = arr[ii];
	}
}
const int Code::getVal(const int index)
{
	return cd[index];
}
// Checks the number of correct guesses which involve the guess having a correct number
// in the correct position. Assumes that the parameter passed to the function is the guess.
int Code::checkCorrect(Code gs)
{
	// count the number of equal values in corresponding position
	int temp=0;
	for(int ii=0;ii<4;ii++)
	{
		if(cd[ii]==gs.getVal(ii))
		{
			temp++;
		}
	}
	return temp;
}

// Checks the number of incorrect guesses which involve the guess having a correct number
// in the wrong position. Only reports a maximum of one correct value for each position in
// the code. Assumes that the parameter passed to the function is the guess.

int Code::checkIncorrect(Code gs)
{
	// create image of guess corresopnding to code vectors
	bool image[4] = {false,false,false,false};
	// iteratively check values from the secret
	for(int ii=0;ii<4;ii++) // ii is the secret index
	{
		// check only if secret index isn't a correct match
		if(cd[ii]!=gs.getVal(ii))
		{
			// iteratively compare to values from the guess
			for(int jj=0;jj<4;jj++) // jj is the guess index
			{
				// ignore corresponding numbers and already matched numbers in the guess
				if((jj!=ii) && (!image[jj]))
				// if numbers match, denote in the image and move to next index in secret
				{
					if(cd[ii] == gs.getVal(jj))
					{
						image[jj] = true; break;
					}
				}
			}
		}
	}
	// count the number of denoted matches in the image
	int temp=0; for(int kk=0;kk<4;kk++) { if(image[kk]) {temp++;} }
	// return number of matches
	return temp;
}
void Code::setRandomCode()
{
	cout << "Setting Random Code for Secret Code.\n";
	for(int ii=0;ii<4;ii++)
	 {
		 cd[ii] = (int) rand() % 6;
	 }
}
void Code::printCode()
{
	for(int ii=0;ii<4;ii++)
	{
		cout << cd[ii];
	}
	cout << "\n";
}
