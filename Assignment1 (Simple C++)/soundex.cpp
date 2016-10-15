#include <iostream>
#include "gwindow.h"
#include "simpio.h"
#include "error.h"
#include "vector.h"
#include <cctype>
#include <stdio.h>

using namespace std;

Vector<string> table;

void initTable(Vector<string> &vec);
string soundexCode(string str);
string convertToCode(char s, Vector<string> &vec);

int main()
{
    string surname = "";


    initTable(table);

    while(true) {
        //cout << "Enter surname (RETURN to quit): ";
        //cin >> surname;
        surname = getLine("Enter surname (RETURN to quit): ");
        if (surname == "") break; // return -> send string, \n
        cout << "The hash code for your name is " << soundexCode(surname) << endl;
    }
    return 0;
}

/* Construct a map between chars & code(0,1,2,3,...) */
void initTable(Vector<string> &vec) {
    vec.add("AEIOUHWY");
    vec.add("BFPV");
    vec.add("CGJKQSXZ");
    vec.add("DT");
    vec.add("MN");
    vec.add("L");
    vec.add("R");
}

/* Convert str to code except for the first char of str */
string soundexCode(string str) {
    //char firstLetter = char(str[0]);

    //string code = to_string(str[0]);// std::toupper(), std::to_string()
    string code = to_string(str.at(0));

    for(int i=1; i<str.length(); i++) {
        if(isalpha(str[i]))
            code += convertToCode(str[i], table); // @TODO nest function
    }

    /** Remove cosective duplicate code;
        Remove 0s
    */
    for(int j=1; j<code.length(); j++) {
        if(code[j] == code[j-1] || code[j] == 0) code.erase(j);
    }

    while(code.length() <4) {
        code += "0";
    }


    if(code.length() > 4) code = code.substr(0, 4);




    return code;
}

/* Convert one char to a specific code */
string convertToCode(char s, Vector<string> &vec) {
    string code = "";
    string letters = "";


    s = toupper(s);
    for(int i=0; i<vec.size(); i++) {
        letters = vec.get(i);
        for(int j=0; j<letters.length(); j++) {
            if (letters[j] == s) {
                code = to_string(i); // to_string(i); @ToDo
                break;
            }
        }
        if(code != "") break; // @ToDO relay break
    }

    return code;
}
