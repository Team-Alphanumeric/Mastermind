/*
 * Mastermind.cpp
 *
 *  Created on: Jan 15, 2015
 *      Author: alex
 */

#include <iostream>
#include "Mastermind.h"
using namespace std;
#include "Code.h"
#include "Response.h"
#include <vector>

//constructor method
Mastermind::Mastermind()
{

}
//This function prints out the secret code from the code class
void Mastermind::printSecret()
{
	//prints out the secret code to the user
	secret.printCode();
}
//This function prompts the user to enter his guess which then stores it as a vector
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
	cout << "These are the 4 digits that you entered ";
	for(i=0;i<4;i++)
	{
		cout << tempArr[i];
	}
	cout << ".\n";
	//This passes the array of the 4 digits that the user entered into the setCode function of the guess object that will store the human guess as a vector
	guess.setCode(tempArr);
}
//this function is passed the secret and the guess and run the check correct, and check incorrect and returns the response which is the number correct and the num incorrect
//this returns a bool to main which decides whether the human guessed the write code or has to guess again
bool Mastermind::getResponse()
{
	int curNumCorrect;
	int curNumIncorrect;
	//areSame is the return value of the checkSame function
	bool areSame;
	//didWin is the return value of the checkWin function
	bool didWin;
	//running the numCorrect to check the number of digits in the correct position
	curNumCorrect = secret.checkCorrect(guess);
	//running the numIncorrect to check the number of digits in the incorrect position
	curNumIncorrect = secret.checkIncorrect(guess);
	//set the number of correct and incorrect digits
	r1.setNumCorrect(curNumCorrect);
	r1.setNumIncorrect(curNumIncorrect);
	//run the function that checks the two responses and prints out the numCorrect and the numIncorrect if the numCorrect is less then 4
	areSame = r1.checkSame();
	//based off the results of the checkSame then the check win is called
	didWin = r1.checkWin();
	//returns didWin which is True if the game is won and false if the game has not been won
	return didWin;
}
void Mastermind::playGame()
{
	//gameWon boolean stays false until the user won the game by having all 4 digits correct
	bool gameWon;
	//playAgain determines whether the user wants to keep playing the game or not, when it turns false, the user wants to stop playing
	bool playAgain=1;
	int playGameAgain;
	bool switchCaseTest=true;
	//numIterations indicates how many guesses the user has entered
	int numIterations;
	while(playAgain)
	{
		//set random code to the secret code because each iteration of the game a new code needs to be given and unless the mastermind class gets deconstructed and reconstruced
		//the constructor class will not run to reinitalize the code
		secret.setRandomCode();
		//this sets the numIteratinos to 0 because the code has just been generated so it is a new game
		numIterations =0;
		//prints out the secret code to the screen for testing purposes
		cout << "The secret code is ";
		printSecret();
		while(!gameWon && numIterations <= 10)
		{
			//runs the humanGuess class
			humanGuess();
			//runs the get Response to see the outcome of the human guess
			gameWon = getResponse();
			//if the user hasn't won yet then add one to the numIterations which runs until 10 guesses have been made
			if(!gameWon)
			{
				numIterations++;
			}
		}
		//for the case that the while loop finished because the user hit 10 iterations, then they lost so the prompt is that they lost
		if(numIterations <=10)
		{
			cout << "You have had 10 guesses, now you lost.\n";
		}
		//while loop quits once the user enters an appropriate response
		switchCaseTest=true;
		while(switchCaseTest)
		{
			//prompts user to play again after the game is over
			cout << "Do you want to play again? 1 = yes, 2 =no.\n";
			//receives the response for the user
			cin >> playGameAgain;
			//switch case on the decision of playing again or not
			switch (playGameAgain)
			{
			//case 1 is that they want to play again
			case 1:
				//keeps the playAgain boolean as true so it repeats the game
				playAgain=true;
				//prints out that the happiness that is the user playing again
				cout << "YAYAY try again. Restarting game, Creating new Secret code!\n";
				//makes the switch case while loop false because an approrpriate response was given
				switchCaseTest=false;
				//break switch case
				break;
				//case 2 is that the user wants to stop playing
			case 2:
				//makes playAgain false so the program quits
				playAgain=false;
				//prints out the saddiness that is the game being quit
				cout << "OK fine you had enough, game quitting.\n";
				//makes the switch case while loop false because an approrpriate response was given
				switchCaseTest=false;
				//break switch case
				break;
				//default switch case if an inapporpriate response was given
			default:
				//prompts user that the input was invalid
				cout << "That is not a correct input, try again.\n";
				//break case
				break;
			}
		}
	}
}
Mastermind::~Mastermind() {
	/// TODO Auto-generated destructor stub
}

