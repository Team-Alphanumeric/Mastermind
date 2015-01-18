/*
 * Mastermind.cpp
 *
 *  Created on: Jan 15, 2015
 *      Author: alex
 */

#include <iostream>
#include "Mastermind.h"
#include "Code.h"
#include "Response.h"
#include <vector>

using namespace std;

//constructor method
Mastermind::Mastermind()
{

}

//This function prompts the user to enter his guess which then stores it as a vector
void Mastermind::humanGuess()
{
	//create variable i to be used for the for loop
	int i=0;
	
	//create a temporary array that will be inputed into the .setCode function 
	// from the Code class to convert the arrary into a vector
	int tempArr[4]={0,0,0,0};
	char charArr[5]={0,0,0,0,0};
	
	
	//this inputs the user for 4 digits which then puts them in to the array
	cout << "Please type in 4 digits, make sure to press enter after each digit" << ".\n";
	while(i<4)
	{
		scanf("%s",&charArr[i]); // read in each digit as a character
		// convert to integer until termination character ( a 0)
		while(charArr[i] != 0)
		{	
			tempArr[i] = ((int)charArr[i]) - 48;	
			i++;
		}
		
	}
	//This passes the array of the 4 digits that the user entered into the setCode function of the guess object that will store the human guess as a vector
	guess.setCode(tempArr);
	
	return;
}

//this function is passed the secret and the guess and run the check correct, and check incorrect and returns the response which is the number correct and the num incorrect
//this returns a bool to main which decides whether the human guessed the write code or has to guess again
Response Mastermind::getResponse(Code sc, Code gs)
{
	// set numCorrect to the number of digits in the correct position
	r1.setNumCorrect(sc.checkCorrect(gs));
	
	// set numIncorrect to the number of digits in the incorrect position
	r1.setNumIncorrect(sc.checkIncorrect(gs));
		
	return r1;
}

void Mastermind::playGame()
{
	// number of guesses the user has entered and can enter
	int numIterations=0; const  int guesses = 10;

	// create a new code for a new game
	secret.setRandomCode();
	
	// reset response
	r1.setNumCorrect(0); r1.setNumIncorrect(0);
		
	// print out the secret code to the screen for testing purposes
	cout << "The secret code is "; secret.printCode();
	
	while(!(r1.checkWin(numIterations>0)) && (numIterations < guesses))
	{
		// prompt user for a guess
		humanGuess();

		// receive and print response
		// note: getResponse returns a response object that is printed by printResponse
		getResponse(secret,guess).printResponse();

		// move to next guess
		numIterations++;
	}
	
	// shame losers for losing
	if(numIterations == guesses)	{ cout << "You have had 10 guesses, now you lost.\n"; }
	
	return;
}

void Mastermind::playSeries()
{
	int playGameAgain=1; // whether or not to continue playing
	
	while(playGameAgain)
	{
		// play a game
		playGame();
		
		// prompts user to play again
		cout << "Do you want to play again? 1 = yes, 2 =no.\n";
		
		// receive the response for the user
		cin >> playGameAgain;
		
		// switch case on the decision of playing again or not
		switch (playGameAgain)
		{
		case 1: // they want to play again	
			// prints out that the happiness that is the user playing again and end case
			cout << "YAYAY try again. \nRestarting game, Creating new Secret code!\n";	break;
			

		case 2: // the user wants to stop playing
			// prints out the saddiness that is the game being quit
			cout << "OK fine you had enough, game quitting.\n";
			// change response to boolean false and end case
			playGameAgain =  0; break;
			
			
		default: // an inappropriate response was given
			//prompts user that the input was invalid and end case
			cout << "That is not a correct input, try again.\n"; break;
		
		}
	}	
	// return when finished
	return;
}

Mastermind::~Mastermind() {
	/// TODO Auto-generated destructor stub
}
