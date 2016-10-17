/**
 * scope.cpp
 *
 * topics:
 * 		1.scopes: block scope; global scope
 * 		2.pass parameters btn fns
 * 		3.patt: bound-checking for relay break
 *
 * Good luck!
 */

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
        /**
         * scope: blcok scope
         */
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
            if(found) { // patt: found or not to relay
                code += to_string(j); // block scope
                break; 
            }
        }
        continue;
    }
}

/************************************************/
/**
 * pass parameter btn fns: main & fns 
 */
int main()
{
    string name = ""; // @todo 优先初始化，如果之后有初始化， 可以省略
    string code = "";
    Vector<string> table;
	
	
	convertToCode(name, code, table); // pass reference parameter btn function

	return 0;
}

/************************************************/
/**
 * scope: global scope, its plcaement, reference to globale varibales
 */
Vector<string> table; 

int main()
{
    string name = ""; // @todo 优先初始化，如果之后有初始化， 可以省略
    string code = "";
	
	convertToCode(name, code);

	return 0;
}

