/**
 * scanner.cpp
 *
 * topics:
 * 		1. notation
 * 		2. APIs
 * 		3. logics
 * 		4. patt
 */

#include <iostream>
#include "simpio.h"
#include "scanner.h" // for Scanner class

using namespace std;

/**
 * logics: import, declare, init a token string, ...
 * patt: iterator for items
 */
void countTokens()
{
	Scanner scanner; // uppercamelcase for Class

	cout << "Enter a sentence as a token string: ";
	scanner.setInput(getLine()); // scanner.setInput(string str)

	while(scanner.hasMoreToken()) { // bool scanner.hasMoretoken()
		cout << scanner.nextToken() << " "; // string scanner.nextToken()
	}
	cout << endl;
}

int main()
{
	 
	countTokens();

	return 0;
}
