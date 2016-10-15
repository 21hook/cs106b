#include <iostream> // for cin, cout
#include "simpio.h" // for getLine
#include "gwindow.h" // for GWindow
#include "random.h" // for randomChance
#include "error.h" // for error

using namespace std;


const int TOTAL_SIMULATION = 500;
/*
 Simulate a voting election with the specific propability by `errChance`
*/
double simulation(double errChance) {
    int invalidNumElection = 0;

    for(int i=0; i<TOTAL_SIMULATION; i++)
        if(randomChance(errChance)) //invalid election
            invalidNumElection++;

    return double(invalidNumElection)/TOTAL_SIMULATION * 100; //@ToDO int/int -> double
}

int main ()
{
    int numVoter;
    double spreadPercent, errorPercent, invalidElectionChance;


    /*Foramtted stream */
    cout << "Enter number of voters: "; // std out stream <<;
    cin >> numVoter;// std in stream >>
    //cout << endl; // @ToDo
    cout << "Enter percentage spread between candidates: ";
    cin >> spreadPercent;
    cout << "Enter voting error percentage: ";
    cin >> errorPercent;
    cout << endl;

    invalidElectionChance = simulation(errorPercent);
    cout << "Chance of an invalid election result after" << TOTAL_SIMULATION <<" trials = " << invalidElectionChance << "%";

    return 0;
}
