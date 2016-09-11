#include <iostream>

using namespace std;

int main(){
    string text0 = "Stanford University";
    string remove0 = "nt";
    string text1 = "Llamas like to laugh";
    string remove1 = "la";


    cout << "Passing by value" << endl;
    cout << CensorString1(text0, remove0) << endl;
    cout << CensorString1(text1, remove1) << endl;
    cout << "Passing by reference" << endl;
    CensorString2(text0, remove0);
    CensorString2(text1, remove1);
    cout << text0 << endl;
    cout << text1;

    return 0;
}

/*
 * This function return `text` with all chars represent in `remove` removed by using pass by value
 */
string CensorString1(string text, string remove) // @ToDo string; ctrl+s -> error-checking
{
    for(int i=0; i<remove.length(); i++)
        for(int j=0; j<text.length(); j++)
            if (remove[i] == text[j]) text = text.substr(0, j) + text.substr(j+1);

    return text;
}

/*
 * This function return `text` with all chars represent in `remove` removed by using pass by reference
 */
void CensorString2(string &text, string remove)
{
    for(int i=0; i<remove.length(); i++)
        for(int j=0; j<text.length(); j++)
            if (remove[i] == text[j]) text.replace(j, 1, "");
}


