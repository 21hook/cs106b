/**
 * pigLatin.cpp
 *
 * This function translate a word.
 * topics: 
 * 		1. string concatenation(string + string, string + char => str += code[i]; code += to_string(j);
 * 		2. string interface APIs
 */


string pigLatin(string word) {
	int vp = findFirstVowel(word); // vowel positions(a descriptive supplement for a shorthand name) 

	if (vp == -1) {
		return word;
	} else {
		return word + "way"; // concatenation: string + string
	} else {
		string head = word.substr(0, vp); // interface method: str.susstr(index, [len])
		string tail = word.substr(vp);
		return tail + head + 'h'; // concatenation: string + char
	}
}

int findFirstVowel(string word) {
	/**
	 * patt: 
	 * 		for(iterate to n) {
	 *   		if(as long as found) return i;
	 *   	}
	 *   	return -1;
	 */
	for (int i = 0; i < word.length(); ++i) // string interface -> str.length()
	{
		if(isVowel(word[i])) return i; // str[i]; -> a char i.e. 'c'
	}
	return -1; 
}


