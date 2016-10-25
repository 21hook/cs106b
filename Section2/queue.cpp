/**
 * queue.cpp
 *
 * usage: waiting line
 */

#include "queue.h"
#include "simpio.h"
#include <iostream>

void manageQueue() {
	Queue<string> queue;

	/**
	 * patt: loop & a half  &&  peek or endqueue
	 */
	 while(true) {
	 	string response = getLine("Enter a string for queue: ");

	 	/**
	 	 * predicate quantified statement for satck => ' ' | 'response' => response already exist!!!
	 	 * 		if(sentinel) break;
	 	 * 		if(p) {
	 	 * 			// operations you what
	 	 * 		}
	 	 * nested quantifiers & existential quantified statement for items of stack
	 	 * => 
	 	 * 		if() // " " ? -> stack ?
	 	 * 			if() { // items exist ?
	 	 * 			 
	 	 * 		  	} else { 
	 	 * 		
	 	 * 			}
	 	 * 		}
	 	 * 		
	 	 */
	 	if(response == " ") break; // sentinel: " " for user
	 	if(response == "next") { // retrive an item of queue
	 		if(queue.isEmpty()) {
	 			cout << "There is no itmes to print." << endl:
	 			cout << "You must enter a string before print out an item." << endl;
	 		} else {
	 			cout << queue.peek() << endl;
	 		}
	 	} else { // add an new item of queue
	 		queue.endqueue(response);
	 	}


	 }

}

int main()
{
		
	return 0;
}