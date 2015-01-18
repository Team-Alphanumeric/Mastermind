/*
 * Code.cpp
 *
 *  Created on: Jan 15, 2015
 *      Author: alex, Thurston
 */

#include "Code.h"
#include <vector>
#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;

// create a code with random values
Code::Code()
{
	setRandomCode();
}

// create a code with passed values
Code::Code(const int arr[])
{
	 setCode(arr);
}


// set the code values to the array values
void Code::setCode(const int arr[])
{
	cd.resize(4);
	for(int ii=0;ii<4;ii++)
	{
		cd[ii] = arr[ii];
	}
}

// set random values for the code
void Code::setRandomCode()
{
	cout << "Setting Random Code for Secret Code.\n";
	cd.resize(4);
	for(int ii=0;ii<4;ii++)
	{
		 cd[ii] = (int) rand() % 6;
	}
}

// get the indexed values in a code
const int Code::getVal(const int index)
{
	return cd[index];
}


// print the digits in the code
const void Code::printCode()
{
	for(int ii=0;ii<4;ii++)
	{
		cout << cd[ii];
	}
	cout << "\n";
}

// Checks the number of correct guesses which involve the guess having a correct number
// in the correct position. Assumes that the parameter passed to the function is the guess.
const int Code::checkCorrect(Code gs)
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
const int Code::checkIncorrect(Code gs)
{
	// create image of guess corresopnding to code vectors
	 int image[4] = {0,0,0,0};

	// iteratively check values from the secret
	for(int ii=0;ii<4;ii++) // ii is the secret index
	{
		// check only if secret index isn't a correct match
		if(cd[ii] != gs.getVal(ii))
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
						image[jj] = 1; break;
					}
				}
			}
		}
		else 
		{ image[ii]=-1; } // indicate matches by setting image to -1
	}

	
	// count the number of denoted incorrects in the image
	int temp=0; for(int kk=0;kk<4;kk++) { if(image[kk]>0) {temp++;} }
	
	// return number of matches
	return temp;
}

// deconstrucor stub
Code::~Code() {}	// TODO Auto-generated destructor stu

                                       
