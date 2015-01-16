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
	cout << "The secret code is: " <<endl; secret.printSecret();
}
//This functino prompts the user to enter his guess which then stores it as a vector
void Mastermind::humanGuess()
{
	//creates the vector for the guess that stores
	int nums[4];
	printf("\nTake another guess!!\t");
	for(int i=0;i<4;i++)
	{
		scanf("%d", (nums+i));
	}
	// input the values into the Code object
	guess.setcode(nums); 
	return;
}
// activates iterative game play until the codebreaker or codemaker wins (after 10 guess)
void Mastermind::playGame()
{
	// print the secret code for testing purposes
	this.printSecret();
	
	const int cnt=10; // number of guesses in a game
	
	// determine if game has ended: if not, guess code and print response
	while(!(r1.checkWin()) && (cnt<10))
	{ this.humanGuess(); r1.printNumCorrect(); }
	
	// that's all folks!
	return;	
}
Mastermind::~Mastermind() {
	// TODO Auto-generated destructor stub
}

