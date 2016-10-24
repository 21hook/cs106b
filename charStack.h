/**
 * charStack.h
 *
 * topics:
 * 		1. definition for classes
 * 		2. declaration for constructors
 * 	Note: interface file name => class name => constructor name
 * 		  comma for class; comma for enum
 */

#ifndef _charstack_h
#define _charstack_h

 class CharStack {
 	public:
 		CharStack();
 		~CharStack();

 		/*
 			public methods of instance variables
 		 */
 		int size();
 		bool isEmpty();
 		void clear();
 		char push(char ch);
 		char pop();
 		char peek();


 	private: 
 		/*
 			private instance variables
 		 */

 };

 #endif