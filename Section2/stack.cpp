/**
 * stack.cpp
 *
 * usage: browser history
 */
#include <iostream>
#include "stack.h"
#include "simpio.h"

using namespace std;


void reverseStack() {
	Stack<char> stack;

	cout << "Enter a string for stack: " 
	string response = getLine();

	for(int i=0; i<response.length(); i++) {
		stack.push(response[i]);
	}

	/**
	 * patt: iterator for stack
	 *
	 * 		while(!stack.isempty()) {
	 * 			stack.pop();
	 * 		}
	 */
	while(!stack.isEmpty()) {
		cout << stack.pop() << " ";
	}
	cout << endl;
}

int main()
{	
	reverseStack();

	return 0;
}
