/**
 * templateForStack.h
 *
 * topics:
 * 		1. non-template class into a template class
 * 		2.
 * 		
 */

#ifndef _stack_h
#define _stack_h

template <typename ElemType> // tmeplate<typename paraType>; befrore class definition

class Stack {
public:
	Stack();
	~Stack();

	// public method for ins vars
	int size();
	bool isEmpty();
	void clear();
	ElemType push(ElemType elem);
	ElemType pop();
	ElemType peek();
	

private:
	// ins vars


};

#endif