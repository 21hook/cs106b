/*
 *  File: lecture.cpp
 *  ------------------
 * Snippets from the live coding part of Wed 1/16 lecture
 * showing some simple use of fstream.
 */

#include "genlib.h"
#include <iostream>
#include <fstream>
#include "simpio.h"

int CountLines(ifstream &in) // &in by reference
{
	int count = 0;
	while (true) {
		string line;
		getline(in, line); // global free function; getline(ifstream in, string line);
		if (in.fail()) break; // bound-chacking for EOF, file IO error
		count++;
	}
	return count;
}


int main()
{
	ifstream in;
	while (true) { 
		cout << "Enter name: ";
		string s = GetLine();
		in.open(s.c_str()); // use c-style string for variables
		if (!in.fail()) break;
		cout << "Couldn't open file, try again!" << endl;
		in.clear(); // clear the error state for next open 
	}
	cout << "Num lines = " << CountLines(in) << endl; // '\n' of developers 
	return 0;
}