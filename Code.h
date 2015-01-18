/*
 * Code.h
 *
 *  Created on: Jan 15, 2015
 *      Author: alex
 */

#ifndef CODE_H_
#define CODE_H_
#include <vector>
using namespace std;

// stores, sets, returns, and checks code values
/*
Implements the code class which holds a mastermind code as an integer vector.
Includes methods to set the code, and check if and how well another code matches the code.
Notice: the stored code is assumed to be the secret, and the guess must be passed in.
*/

class Code 
{
	public:
		Code(); // create a code with random values
		Code(const int arr[]); // create a code with passed values
		void setCode(const int arr[]); // set the code values to the array values
		void setRandomCode(); // set random values for the code
		const int getVal(const int index); // get the indexed values in a code
		const void printCode(); // print the digits in the code
		const int checkCorrect(Code gs); // check how many values are in the correct position
		const int checkIncorrect(Code gs); // check how many values are in incorrect position
		virtual ~Code(); // deconstructor stub
	protected:
		std::vector<int> cd; // code vector
};

#endif /* CODE_H_ */



