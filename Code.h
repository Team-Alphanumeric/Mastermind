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

class Code {
public:
	Code();

	Code(int arr[]);
	// set the code values
	void setCode(int arr[]);
	int checkcorrect(const Code gs); // check how many values are in tthe correct position
	int checkincorrect(const Code gs); // check how many values are in incorrect position
	// get the indexed values of a code
	int getVal(int a);
	virtual ~Code();
protected:
	vector <int> cd;
};

#endif /* CODE_H_ */


