/*
 * Mastermind.cpp
 *
 *  Created on: Jan 15, 2015
 *      Author: alex
 */

#include <iostream>
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
	//create variable i to be used for the for loop
	int i;
	//create a temporary array that will be inputed into the .setCode function from the Code class to convert the arrary into a vector
	int tempArr[4];
	//this inputs the user for 4 digits which then puts them in to the array
	cout << "Please type in 4 digits, make sure to press enter after each digit" << ".\n";
	for(i=0;i<4;i++)
	{
		cin >> tempArr[i];
	}
	//This prints out the array to the user to verify to show him/her what she entered
	cout << "This is the 4 digits that you entered ";
	for(i=0;i<4;i++)
	{
		cout << tempArr[i];
	}
	cout << ".\n";
	//This passes the array of the 4 digits that the user entered into the setCode function of the guess object that will store the human guess as a vector
	guess.setCode(tempArr);
}
//this function is passed the secret and the guess and run the check correct, and check incorrect and returns the response which is the number correct and the num incorrect
void Mastermind::getResponse()
{
	int curNumCorrect;
	//running the numCorrect to check the number of digits in the correct position
	curNumCorrect = secret.checkCorrect(Code guess);
	//running the numIncorrect to check the number of digits in the incorrect position
	int checkincorrect(Code guess);
	//run the function that checks the two responses and prints out the numCorrect and the numIncorrect if the numCorrect is less then 4
	bool checkSame();


}
Mastermind::~Mastermind() {
	// TODO Auto-generated destructor stub
}

