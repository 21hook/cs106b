/*
 * celsiusToFahrenheit.cpp
 *
 *
 * The sequence of .cpp files are intended for practicing theses basic concepts.
 *
 * requirement: a. relevant b. skilled
 *
 * topics:
 *      1. coding style: comments
 *      2. reference parameters
 *      3. good decompostion (fundamental programming stagety)
 *
 * Good luck!
 */
#include <iostream> // for cin, cout
#include "simpio.h" // for getInteger(prompt), getDouble(prompt)


void readCelsius(double &celsius);
void calculatefahrenheit(double celsius, double &fahrenheit);
void displayFahrenheit(double fahrenheit);

int main()
{
    double celsius;
    double fahrenheit;

    readCelsius(celsius);
    calculatefahrenheit(celsius, fahrenheit);
    displayFahrenheit(fahrenheit);

    return 0;
}

/*
 * dec: (nouns & verbs & quantifiers)
 *      hierarchy a: read a Celsius degree; calculate a Fahrenheit degree; display
 *      a Fahrenheit degree
 *      persudocode a as follows: ....
 */

/**
 * persudocode a(phase1):
 * Read a input value from users as a Celsius degree
 */
void readCelsius(double &celsius) {// reference parameter: return to double celsius
    cout<< "Enter a a Celsius degree: " << endl;// coding style: C++ way print
    celsius = getDouble();
}


/**
 * persudoceode a(phase b):
 * Calculate the value of a Fahrenheit degree according the Celsius degree
 */
void calculatefahrenheit(double celsius, double &fahrenheit) {// reference parameter: return to double fahrenheit
    fahrenheit = 9/5 * celsius + 32;
}


/**
 * persucode(phase c):
 * Include the value of the Fahrenheit degree as the output display
 */
void displayFahrenheit(double fahrenheit) {
    cout << "The Fahrenheit degree is " << fahrenheit << "." << endl;
}
