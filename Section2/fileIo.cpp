/**
 * fileIo.cpp
 *
 * topics: negating logics, patt, notation, mechanism
 */

#include <fstream> // for ifstream, ofstream
#include <iostream> // for cin, cout
#include "simpio.h"
 #include "error.h" // for error function; lowerCamelCase

using namespace std;


int main()
{
	ifstream in; // input file stream 
	ofstream out; // output file stream

	/*
	 * IO ex checking(negating logics)
	 */
	
	in.open("data.txt");
	if(in.fail()) // file open ex
		error("Couldn't open the file.");

	/**
	 * mechanics: a sequence of characters seperated lines by '\n' , then EOF for the endpoint of the sequence.
	 */
	while(true) { 
		string line;
		getline(in, line); // notation: free funcions & global => no receivers
		if(in.fail()) break; // IO ex checking | EOF
		// some other operations
	}

	return 0;
}