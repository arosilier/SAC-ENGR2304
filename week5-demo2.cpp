// ENGR 2304 - Class Example 
// Week 5 - Streams & File I/O
//
// week5-demo2.cpp
// This program will open both an input and output data File
// then read integers from the input file that may contain commas
// the numbers are written to the output file with the commas removed

// Preprocessor directives
#include <iostream>  // Required for cout
#include <fstream>   // Required for file I/O
#include <string>    // Require to use strings 

// Using directive
using namespace std;

// Main function
int main()
{
  string filename;
  char character;
  
  // Get file name from user
  cout << "Please enter the filename to open: ";
  cin >> filename;

  // open input file
  ifstream input(filename);
  if (input.fail()) {
      cerr << "ERROR: could not open file " << filename << endl;
      exit(1);
  }

  // open output file
  ofstream output("new-" + filename);
  if (output.fail()) {
      cerr << "ERROR: could not open file " << "new-" << filename << endl;
      exit(1);
  }
  
  // read character from input file, remove comma, write to output
  character = input.get();
  while (!input.eof()) {
      if (character != ',') {
          output << character;
      }
      character = input.get();
  }
  
  // tell user we are done
  cout << "Ok, we are done!" << endl;
  
  input.close();
  output.close();

  // Exit program
  return 0;
}
/*----------------------------------------------------*/