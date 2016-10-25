/**
 * charStack.cpp
 *
 * This file is the class implementation for CharStack.h.
 * 
 */

#include "genlib.h"
#include "charStack.h"


/**
 * Implementation for constructors
 */
CharStack::CharStack() {
	count = 0;
}

CharStack::~charStack() {
	// empty
}


/**
 * Implementation for member functions
 */

int CharStack::size() {
	return count;
}

bool CharStack::isEmpty() {
	return count == 0;
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

char CharStack::peek() {
	// specific operations 
}