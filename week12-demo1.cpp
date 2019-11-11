/*----------------------------------------------------*/
/* Name: Prof Rosilier                                */
/* Class: ENGR-2304                                   */
/* Week 12 Video Demo - Grade Analysis                */
/*----------------------------------------------------*/

// Preprocessor directives
#include <iostream>  // Required for cout
#include <fstream>

// Using directive
using namespace std;

/* Main function ------------------------------------------------ */
int main()
{
    int qty;
    float grade;
    
    // Ask user for loan information
    cout << "Welcome to my Grade Analyzer!" << endl;
    cout << "Please enter the number of grades to enter: ";
    cin >> qty;
    
    // Open an output file to write data
    string filename = "grades.dat";
    ofstream output(filename);
    if (output.fail()) {
        cerr << "ERROR: could not open file " << filename << endl;
        exit(1);
    }

    for (int i=0; i < qty; i++) {
        cout << "Please enter grade " << i+1 << ": ";
        cin >> grade;
        output << grade << endl;
    }

    cout << "File complete." << endl;

    return 0;
}
