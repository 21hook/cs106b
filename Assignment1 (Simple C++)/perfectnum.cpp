/*
 Program: perfectnum.cpp

 Program used to generate the perfect number.
 i.e 6 = 1+2+3, 28 = 1+2+4+7+14
 Nmubers N can be divided as divisor less than N itself.
*/

#include <iostream> // for cin, cout
#include "gwindow.h" // for GWindow
#include "simpio.h"  // for getLine
#include "error.h" // for error
using namespace std;


/*
 Return true If the integer is perfect numbers or false.
*/
bool isPerfect(int n) {
    int sum = 0;

    for(int i=1; i<n; i++) // i -> factor
        if(n%i == 0) sum += i;

    return n == sum ? true : false;
}

int main ()
{

    for (int i=1; i<=10000; i++)
        if( isPerfect(i) ) cout << i << endl; //bool isPerfect(int n); predicate function

    return 0;
}
