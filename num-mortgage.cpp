// ENGR 2304 - Mini Program
// Week 12 - Numerical Computing
//
// num-mortgage.cpp
// This program asks the user to enter information about a mortgage and
// calculates the interest and principal balances for a 30 year loan.
// The program will open an output data file and write interest and principal 
// information to the file in order to be plotted on Octave Online

// Preprocessor directives
#include <iostream>
#include <string>
#include <fstream> 
#include "Mortgage.h"

// Using directive
using namespace std;

// Main function
int main()
{
    // Ask user for loan information
    cout << "Welcome to the loan calculator!" << endl;
    cout << "Please enter the loan amount in dollars: ";
    double loan;
    cin >> loan;
    
    cout << "Please enter your interest rate in percentage: ";
    double rate;
    cin >> rate;
    
    cout << "Got it. Writing data to output file..." << endl;
    
    // Open an output file to write data
    string filename = "mortgageData.txt";
    ofstream output(filename);
    if (output.fail()) {
        cerr << "ERROR: could not open file " << filename << endl;
        exit(1);
    }

    // Instantiate Mortgage object
    const int TERM = 30; // we are assuming a 30 year mortgage 
    Mortgage mortgage(loan, rate, TERM);
    
    // Calculate payment and principal info and write to data file
    int numPayments = mortgage.getNumPmts();  
    double interest=0, principal=0, balance=0;
    
    for (int i=0; i <= numPayments; i++) {
        
        // TO DO: Add statements to get the values for the following
        // totals after each payment (i):
        //      interest - total interest paid
        //      principal - total principal paid
        //      balance - principal balance
        // then write the data to the output file in the expected format 
        
     }

    cout << "File complete." << endl;

}    