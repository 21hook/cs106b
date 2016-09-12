#include <iostream> // for ifstream, ofstream
#include "console.h"
#include "gwindow.h" // for GWindow
#include "simpio.h"  // for getLine
#include "error.h" // for Error

using namespace std;

struct exam {
    int min;
    int max;
    double average;
};

int main() {
    ifstream in; // File Input
    exam e; // Struct Type

    in.open("data/MidtermScores.txt");
    if (in.fail()) error("Could not open file.");

    int num;
    int min, max, cnt, result;
    cnt = result = 0;
    in >> min;
    in >> max;

    while(true) {
        in >> num ; // Loop read formatted strings from input stream
        if (in.fail()) break;

        if(min > num )
            min = num;
        if (max < num)
            max = num;

        result += num;
        cnt++;
    }

    in.close();

    e.average =(double)result / num;
    e.max = max;
    e.min = min;

    cout << "Max score: " << e.max << endl;
    cout << "Min score: " << e.min << endl;
    cout << "Average score: " << e.average;


    return 0;
}




