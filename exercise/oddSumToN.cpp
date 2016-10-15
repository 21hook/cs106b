/*
 * oddSumToN.cpp
 *
 *
 * The sequence of .cpp files are intended for practicing theses basic concepts.
 *
 * requirement: a. relevant b. skilled
 *
 * topics:
 *      1. coding style: comments, descriptive names
 *      2. (per & alg) AND (hie & per)
 *      3. needs
 *
 *
 * Good luck!
 */

#include <iostream> // for cin, cout
#include "simpio.h" // for getInteger(prompt), getDouble(prompt)


int sumToN(int n);

int main()
{
    /**
     * needs:
     *      calculate, display,
     *      i.e. n = 4,  1 + 3 + 5 + 7
     *      4 is the numerical quantity of numbers
     */

    int n; // only declare; a positive number
    int sum;




    /**
     * alg & per:
     */
    while(true) {
        n = getInteger("Enter a number: ");
        if(n == 0) break;
        sum = sumToN(n);
        cout << "The sum of "<< n <<"-odd numbers is " << sum << "." << endl;
    }





    return 0;
}

/**
 * hie a: read a n, calculate a sum, display the sum
 */

/**
 * i.e. 1+ 3 + 5 + ... + n
 *
 * @param the max number you want to calculate
 */
int sumToN(int n) {
    int sum = 0;
    int s = 1;

    /**
     * alg & per:
     *      on paper
     */
    for (int i = 0; i < n; i++) // the numerical quantity of n
    {
        sum += s;
        s += 2;
    }

    return sum;
}


