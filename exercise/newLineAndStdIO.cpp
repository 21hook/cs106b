/*
 * gaussSumFormula.cpp
 *
 *
 * The sequence of .cpp files are intended for practicing theses basic concepts.
 *
 * requirement: a. relevant b. skilled
 *
 * topics:
 *      1. coding style: comments
 *      2. APIs: Standard IO, cout, simpleio.h
 *
 * Good luck!
 */

#include <iostream>
#include "simpio.h"

int main() {

    cout << "The first line occupies a new line, but, the cout does not create a another new line.";
    cout << "It take up the same line as the preceeding line.";
    getInteger("The first line occupies a new line, and, the getInteger does create a another new line.");
    getInteger("It take up the another line.");

    /*
     * corollary:
     *     The shell create a new line after user input
     *     
     *     |
     *     v
     * coclusion: standard IO newlines(must create explicitly)
     *     1 shell 
     *     2 endl
     * 
     */
    cout << "The first line occupies a new line, but, the cout does not create a another new line." << endl;
    cout << "It take up the same line as the preceeding line."; << endl;
    getInteger("The first line occupies a new line, and, the getInteger does create a another new line.");
    getInteger("It take up the another line.");

    return 0;
}
