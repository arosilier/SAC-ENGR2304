// ENGR 2304 - Mini Program
// Week 11 - OOP Applications
//
// oop-vectordata.cpp
// This program will open both an input and output data File
// Data from the input file will be read into a vector, sorted, and
// then written to the output file. 

#include <iostream>
#include <fstream>   // Required for file I/O
#include <vector>
#include <algorithm>

using namespace std;

// function prototuypes
void printVector(vector<double> v);

// main() function
int main() {

    // open input file
    string filename = "input.txt";
    ifstream input(filename);
    if (input.fail()) {
        cerr << "ERROR: could not open file " << filename << endl;
        exit(1);
    }

    // open output file
    filename = "output.txt";
    ofstream output(filename);
    if (output.fail()) {
        cerr << "ERROR: could not open file " << filename << endl;
        exit(1);
    }
  
    // read from input file, remove comma, write to output
    double number;
    vector<double> v;
  
    cout << "Reading list of numbers from input file." << endl;
    do {

        // TO DO: insert code here to read a number from the input file and
        // add it to the vector v

    } while (!input.eof());
   
    cout << "Original list of numbers..." << endl; 
    printVector(v);

    // TO DO: insert code to sort the vector using a function from the STL
  
    cout << "Sorted list of numbers..." << endl; 
    printVector(v);
  
    cout << "Printing sorted list to output file." << endl;
  
    // TO DO: insert code to write the sorted vector to the output file

    // close input and output files
    input.close();
    output.close();

    return 0;
}

// function definitions

void printVector(vector<double> v) {
    
	// TO DO: insert code to print the vector to standard output
  
}
