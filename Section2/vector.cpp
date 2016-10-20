/**
 * vector.cpp
 *
 * topics:
 * 		1. notaion
 * 		2. APIs
 * 		3. parameter, assignment by value
 * 		4. usage: a list of items; dynamic size; bound-checking; get, setAt; 
 *
 * Good luck!
 */
#include <iostream>
#include "vector.h"
#include "simpio.h"
#include "random.h" // for randomInteger(int low, int high)

using namespace std;

/**
 * Vector as parameter(pass by value)
 */
Vector randomVector(int size) {
	Vector<int> vec; // Vectot<int> name; => Vector<primitives> name;

	for(int i=0; i<size; i++) { // automatic bound-checking
		vec.add(randomInteger(1, 100));	
	}
	return vec;
}

/**
 * vector as parameter(pass by reference)
 * @param vec [description]
 */
void printVector(Vector &vec) {
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}
}


int main()
{
	Vector<int> numList = randomVector(); // assignment; deep copy(copy all items by value)
	printVector(numList);

	return 0;
}