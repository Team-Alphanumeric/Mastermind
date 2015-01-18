//============================================================================
// Name        : masterMindMine.cpp
// Author      : Alex Agudelo, Thurston Brevett
// Version     :
// Copyright   : Your copyright notice
// Description : Mastermind: User has 10 tries to guess a 4 digit code
//============================================================================

#include <iostream>
using namespace std;
#include "Mastermind.h"

int main()
{
	// create a mastermind object
	Mastermind game1;
	// calls playGame to play a single game until the user quits
	game1.playSeries();
	// return no error
	return 0;
}
