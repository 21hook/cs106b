/**
 * soundex.cpp
 *
 * Convert names of type string to soudex code.
 * file:///F:/%E6%9C%AC%E5%9C%B0%E4%B8%8B%E8%BD%BD/pdf/Programming/Programming%20Abstractions/ProgrammingAbstractions/materials/icspacs106b/H09-Assign1SimpleC++.pdf
 *
 * topics:
 *     1. coding style:
 *     2. (per & hie) AND (per & alg)
 *     3. needs: data structure
 *     4. APIs: string, Vector
 *     5. scope:   local varibbles;
 *                 gobal variables, its placment;
 *                 pass reference(value) parameter in function calls
 *                 (!!NOTE: no scope chains)
 *
 *
 * Good luck!
 */

#include <iostream> // for cin, cout
#include "simpio.h"
#include <cctype> // for islower, toupper http://www.cplusplus.com/reference/cctype/
#include "vector.h" // for Vector class
#include "gwindow.h"

using namespace std;

/*
 * needs: a cooresponding table, static,
 */

void initialTable(Vector<string> &table);
void readName(string &name);
void convertToCode(string &name, string &code, Vector<string> &table);
void findDuplicateCode(string &code);
void removeAny0(string &code);
void makeCodeLength4(string &code);
void displayName(string &name, string &code);

int main()
{
    string name = ""; // @todo 优先初始化，如果之后有初始化， 可以省略
    string code = "";
    Vector<string> table;

    initialTable(table);

    while(true) {
        readName(name);
        if(name == "") break;
        /*
         * per & alg:
         *     convert the capital wrod if necessary
         *     convert all other letters in the `name`
         *     remove any consecutive duplicate digits(1.e. A122235 -> A1235)
         *     remove any 0s
         *     turncate or pad with 0s to make it length 4 if necessary
         */
        convertToCode(name, code, table);
        findDuplicateCode(code);
        removeAny0(code);
        makeCodeLength4(code = name[0] + code); // @todo code + "s" -> &const
        displayName(name, code);
    }




    return 0;
}

void initialTable(Vector<string> &table) {
    table.add("AEIOUHWY");
    table.add("BFPV");
    table.add("CGJKQSXZ");
    table.add("DT");
    table.add("MN");
    table.add("L");
    table.add("R");
}

/**
 * hie a:
 *     read a name,  convert the name, display the name
 */

void readName(string &name) {
    cout << "Enter surname (RETURN to quit): ";
    name = getLine();
}

void convertToCode(string &name, string &code, Vector<string> &table) {
    /*
     * diagram & alg:
     *     on paper
     */
    /**
     * needs: data objects
     *     1. encapsulation
     */
    char firstLetter = name[0];
    string leftLetters = name.substr(1); // p101 <<Programming Abstraction in C++>>
    string rowOfTable = "";
    char upperLetter = ' '; // @todo char ch = ''; x -> char ch = ' '


    code = ""; // empyt code

    if(islower(firstLetter)) firstLetter = toupper(firstLetter);
    for (int i = 0; i < leftLetters.length(); ++i)
    {
        /**
         * hie b: iteration, iteration, ccompare
         */
        upperLetter = toupper(leftLetters[i]);

        for (int j = 0; j < table.size(); ++j)
        {
            bool found = false;
            rowOfTable = table.get(j); // @todo vec.get(); vec.size()
            for (int m = 0; m < rowOfTable.length(); ++m)
            {

                if(upperLetter == rowOfTable[m]) {
                    found = true;
                    break;
                }
            }
            if(found) { // @todo relay break; condition testing for relay break
                code += to_string(j); //@todo local variables; scope p11
                break; // @todo int -> string ; explicit coversions
            }
        }
        continue;
    }
}

void findDuplicateCode(string &code) {
    /*
     * good dec: lookup, remove
     */
    for (int i = 1; i < code.length(); ++i)
    {
        if (code[i] == code[i-1]) code[i] = '0'; //@todo 0 -> '0'; implicit conversions
    }
}

void removeAny0(string &code) {
    string str = "";

    for (int i = 0; i < code.length(); ++i)
    {
        if(code[i] != '0') str += code[i]; // @todo index consistent when update, remove
    }

    code = str;
}

void makeCodeLength4(string &code) {
    if(code.length() < 4) {
        /**
         * patt: repeate-sentinel
         */
        while(true) {
            code += "0";
            if(code.length() == 4) break;
        }
    } else if(code.length() > 4) { //@todo str.length()
        /**
         * dec: truncate
         */
        code = code.substr(0, 4);
    }
}

void displayName(string &name, string &code) {
    cout << "Soundex code for " << name << " is " << code << endl;
}



