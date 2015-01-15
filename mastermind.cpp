/*
 * Mastermind.cpp
 *
 *  Created on: Jan 15, 2015
 *      Author: alex
 */

#include <iostream
#include "Mastermind.h"
using namespace std;
#include <vector>

//constructor method
Mastermind::Mastermind()
{

}
//This function prints out the secret code from the code class
void Mastermind::printSecret()
{
	//prints out the secret code to the user
	cout << "The secret code is " << /*get secret code function in the Code class */endl;
}
//This functino prompts the user to enter his guess which then stores it as a vector
void Mastermind::humanGuess()
{
	//creates a variable i that is used for the for loop
	int i;
	//creates the vector for the guess that stores

	for(i=0;i<6;i++)
	{
		//scanf("%d", humanGuess[i
		//this takes the numbers entered by the user and stores them in the class code which stores the guess response
		//cin >> guess[i];
	}

}
Mastermind::~Mastermind() {
	// TODO Auto-generated destructor stub
}

