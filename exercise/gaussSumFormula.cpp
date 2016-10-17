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
 *      2. per & alg
 *
 * Good luck!
 */
#include <iostream> // for cin, cout
#include "simpio.h" // for getInteger(prompt), getDouble(prompt)

 int main()
 {

    /*
     * per & alg: algorithmic design

        while(true) {
            // Get a n for calculate the sum of 1 to n
            if (/*sentianl*///) break; // Stop to the loop of calculation
            /* Gauss Formula: (1+n) * n/2
             * Calculate the sum of 1 to n
             * Display the sum
             */
        //}


    int sum;
    int n;

    while(true) {
        n = getInteger("Enter a number to calculate from 1 to n: ");
        if(sum == " ") break;
        sum = (1 + n) * n/2;
        cout << "The sum of 1 to " << n << " " << sum << "." << endl;
    }


     return 0;
 }

