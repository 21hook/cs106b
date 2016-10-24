/**
 * CharStack.h
 *
 * This interface defines the CharStack class.
 *
 * topics: 
 * 		1. definition(configuration) for class
 * 		2. declare for constructors, private instance variables, member functions(methods)
 * 
 * Note:
 * 		Put the class definition => in the interface file(.h)
 *   	Put the class implementation => in the corresponding .c file
 *   	
 *   	 
 */

#ifndef _charstack_h
#define _charstack_h

class CharStack {
	public:
		CharStack(); // constructor
		~CharStack(); // destructor; no arguments

		/**
		 * a sequence of methods you want to uset to the data of the object 
		 */
		int size(); 
		bool isEmpty();
		void clear();
		char push(char ch);
		char pop();
		char peek();



    private: 
    	// Only initialize the data  you want for the object

}; // comma for class

#endif



