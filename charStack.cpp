/**
 * charStack.cpp
 *
 * topics: 
 * 		1. class implementation
 * 		2. constructor & method implementation
 */

#include "genlib.h"
// Pull all definition & declaration into the file 
// -> Image as a whole file
#include "charStack.h" 

/*
	constructor implementation
 */
CharStack::CharStack() {
	count = 0;
}


CharStack::~CharStack() { // empty arguments for deconstructors
	// empty
}


/*
	method implementation
 */

int CharStack::size() {
	return count;
}


bool CharStack::isEmpty() {
	return count == 0; // count == 0 -> bool expression for return
}

void CharStack::clear() {
	count = 0;
}

void CharStack::push(char ch) {
	// specific operations 
}

char CharStack::pop() {
	// specific operations 
}

char CharStack::peak() {
	// specific operations 
}
