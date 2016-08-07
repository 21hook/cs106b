/*
 * Program: perfectnum.cpp
 *
 * Program used to generate the perfect number.
 * i.e 6 = 1+2+3, 28 = 1+2+4+7+14
 * Nmubers N can be divided as divisor less than N itself.
 */

#include <iostream>
#include "console.h" // for console
#include "gwindow.h" // for GWindow
#include "simpio.h"  // for getLine
#include "vector.h"  // for Vector
using namespace std;


/*
 * bool = IsPerfect(int n);
 *
 * Return true If the integer is perfect numbers.
 * Return false if not.
 */
bool IsPerfect(int n) {
    int x, sum;


    x = 1;
    sum = 0;
    while (x < n) {
        if (n%x == 0) sum += x;
        x++;
    }

    if (n == sum)
        return true;
    else
        return false;
}

int main ()
{

    cout << "In the range 1 to 10000, the perfect numbers are: ";
    for (int i=1; i<=10000; i++)
        if( IsPerfect(i) ) cout << i << " ";

    cout << endl;


    return 0;
}
