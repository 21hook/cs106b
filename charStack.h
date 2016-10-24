/**
 * charStack.h
 *
 * topics:
 * 		1. classes definition
 * 		2. constructors & methods declaration
 * 		
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
 			public methods for instance variables
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