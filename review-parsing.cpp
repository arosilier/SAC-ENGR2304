// ENGR 2304 
// Week 15 - Review
//
// review-parsing.cpp
// This is a template program for the File I/O parsing exercises

#include <iostream>
#include <string>
#include <fstream> 

// Using directive
using namespace std;

// Main function
int main()
{
    // Ask user input file name
    cout << "Getting ready to process your data file." << endl;

    // Open an output file to write data
    string filename;
    cout << "What is the name of your input file? ";
    cin >> filename;
    ifstream input(filename);
    if (input.fail()) {
        cerr << "ERROR: could not open file " << filename << endl;
        exit(1);
    }

    // Open an output file to write data
    filename = "out-" + filename;
    ofstream output(filename);
    if (output.fail()) {
        cerr << "ERROR: could not open file " << filename << endl;
        exit(1);
    }

    cout << "Reading data from input file..." << endl;

    // TO DO: You will need to create the appropriate variables to store
    // data read from the input file.
    
    do {

        // TO DO: You will need to add lines to read from the input file,
        // parse the data into variables, perform any calculations and theb
        // write data to the output file

    } while (!input.eof() && !input.fail());    
    
    if (input.fail()) {
        cerr << "ERROR: There was a problem parsing the input file." << endl;
    }

    cout << "Output written to " << filename << endl;

}    