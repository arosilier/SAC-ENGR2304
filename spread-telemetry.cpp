// ENGR 2304 - Mini Program
// Week 13 - Spreadsheets
//
// spread-telemetry.cpp
// This program reads an input file of the following format and converts
// the data to a CSV file suitable for import into a speadsheet program
// current: 0.00 Peak Current: 31.89 Voltage: 40.52 Watts :0.00

// Preprocessor directives
#include <iostream>
#include <string>
#include <fstream> 

// Using directive
using namespace std;

// Main function
int main()
{
    // Ask user for loan information
    cout << "Getting ready to convert your telemetry data file to CSV." << endl;

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
    filename += ".csv";
    ofstream output(filename);
    if (output.fail()) {
        cerr << "ERROR: could not open file " << filename << endl;
        exit(1);
    }

    cout << "Reading data from input file." << endl;
    string str;
    char ch;
    double current, pcurrent, voltage, watts;
    
    do {
        // TO DO: Add statements to read data from the input file into the
        // appropriate variables. Write only the data values to the output file
        // Be sure to include an end of line character at the end of each line 
        // of data 
        
        // Format of input data file is below...
        // current: 0.00 Peak Current: 31.89 Voltage: 40.52 Watts :0.00
        
        // Hint: using the >> operator with the input file will ignore whitespace
        // and return either a string or a numerical value depending on which
        // types of variables you use with the operator. The strings between data
        // values can be read into a temporary string variable and then discarded. 
        // The one complication is the last data value, because there is no space 
        // between the : and the data value. To solve this you can read a single
        // character before the watts value and discard it.
  
    } while (!input.eof());      

    cout << "File complete." << endl;

}    