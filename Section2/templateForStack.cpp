/**
* templateForStack.cpp 
*
/*
* File: stackimpl.cpp
* -------------------
* This file contains the array-based implementation of the
* Stack class.
*/
#ifdef _stack_h
/*
* Implementation notes: Stack constructor
* ---------------------------------------
* The constructor must allocate the array storage for the stack
* elements and initialize the fields of the object.
*/
template <typename ElemType>
Stack<ElemType>::Stack() {
	capacity = INITIAL_CAPACITY;
	elements = new ElemType[capacity];
	count = 0;
}

template <typename ElemType>
ElemType Stack<ElemType>::pop() {
	if (isEmpty()) {
		Error("pop: Attempting to pop an empty stack");
	}
return elements[--count];
}

template <typename ElemType>
ElemType Stack<ElemType>::peek() {
	if (isEmpty()) {
		Error("peek: Attempting to peek at an empty stack");
	}
	return elements[count - 1];
}
/*
* Implementation notes: expandCapacity
* ------------------------------------
* This private method doubles the capacity of the elements array
* whenever it runs out of space. To do so, it must allocate a new
* array, copy all the elements from the old array to the new one,
* and free the old storage.
*/
template <typename ElemType>
void Stack<ElemType>::expandCapacity() {
	capacity *= 2;
	ElemType *oldElements = elements;
	elements = new ElemType[capacity];
	for (int i = 0; i < count; i++) {
		elements[i] = oldElements[i];
	}
	delete[] oldElements;
}