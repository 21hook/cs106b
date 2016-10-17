#include <iostream> 
#include "simpio.h"
#include <cctype> 
#include "vector.h" 
#include "gwindow.h"

using namespace std;


void initialTable(Vector<string> &table);
void readName(string &name);
void convertToCode(string &name, string &code, Vector<string> &table);
void findDuplicateCode(string &code);
void removeAny0(string &code);
void makeCodeLength4(string &code);
void displayName(string &name, string &code);

int main()
{
    string name = ""; 
    string code = "";
    Vector<string> table;

    initialTable(table);

    while(true) {
        readName(name);
        if(name == "") break;
        convertToCode(name, code, table);
        findDuplicateCode(code);
        removeAny0(code);
        makeCodeLength4(code = name[0] + code); 
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

void readName(string &name) {
    cout << "Enter surname (RETURN to quit): ";
    name = getLine();
}

void convertToCode(string &name, string &code, Vector<string> &table) {
    char firstLetter = name[0];
    string leftLetters = name.substr(1); 
    string rowOfTable = "";
    char upperLetter = ' '; 


    code = ""; 

    if(islower(firstLetter)) firstLetter = toupper(firstLetter);
    for (int i = 0; i < leftLetters.length(); ++i)
    {
        upperLetter = toupper(leftLetters[i]);

        for (int j = 0; j < table.size(); ++j)
        {
            bool found = false;
            rowOfTable = table.get(j); 
            for (int m = 0; m < rowOfTable.length(); ++m)
            {

                if(upperLetter == rowOfTable[m]) {
                    found = true;
                    break;
                }
            }
            if(found) { 
                code += to_string(j); 
                break; 
            }
        }
        continue;
    }
}

void findDuplicateCode(string &code) {
    for (int i = 1; i < code.length(); ++i)
    {
        if (code[i] == code[i-1]) code[i] = '0'; 
    }
}

void removeAny0(string &code) {
    string str = "";

    for (int i = 0; i < code.length(); ++i)
    {
        if(code[i] != '0') str += code[i]; 
    }

    code = str;
}

void makeCodeLength4(string &code) {
    if(code.length() < 4) {
        while(true) {
            code += "0";
            if(code.length() == 4) break;
        }
    } else if(code.length() > 4) { 
        code = code.substr(0, 4);
    }
}

void displayName(string &name, string &code) {
    cout << "Soundex code for " << name << " is " << code << endl;
}