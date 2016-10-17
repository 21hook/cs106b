/**
 * vector.cpp
 *
 * topics: Vector class APIs
 */
#include <iostream>
#include "vector.h"


int main()
{
	Vector vec<int>;

	vec.add(10);
	vec.add(20);
	vec.add(30);
	vec.add(40);

	vec.insertAt(2, 25);
	vec.removeAt(0);

	cout << "[";
	for(int i=0; i<vec.size(); i++) {
		if(i>0) cout << ", ";
		cout << vec[i]; // <=> vec.get(i);
	}
	cout << "]" << endl;

	vec[0] = 1; // <=> vec.set(0, 1);
}