/**
 * isVowel.cpp
 *
 * topics: 
 * 		switch: primitivies(char)
 * 				type(enum monthT)
 */


bool isVowel(char ch) {
	switch(ch) { // switch char
		case 'A': case 'E': case 'I': case 'O': case 'U':
		case 'a': case 'e': case 'i': case 'o': case 'u':
			return true;
		default:
			return false;
	}	
}
