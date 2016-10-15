const int AlphabetSize = 26;


/*
 * Open a file, then count the number of each word(alphabet)
 */
void countLetters() {
    Vector<int> alphabet;
    ifstream in; // File input stream


    for(int i=0; i<AlphabetSize; i++)
        alphabet.add(0);


    in.open("data/letters.txt");
    if (in.fail()) error("Could not open files.");
    in.clear() // clear error state

    int num;
    while(true) {
        num = in.get(); // @ToDo single; formated stream input; line by line
        if (in.fail()) break;
        if (isalpha(num)) {
            num = tolower(num);
            alphabet[num-'a'] += 1 ;
        }
    }

    in.close();

    for(int i=0; i<AlphabetSize; i++)
        cout << (char)(i+'a') << ": " << alphabet[i] << endl;

}