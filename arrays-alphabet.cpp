// ENGR 2304 - Class Example 
// Week 8 - Arrays
//
// arrays-alphabet.cpp
// This program illustrates how to use for loops to access arrays
// using abstraction

#include <iostream>

using namespace std;

// global constants
const int ALPHABET_SIZE=26;

int main () {

  int i; 
  char alphabetArray[ALPHABET_SIZE];

  // set array to lowercase alphabet
  for (i = 0; i < ALPHABET_SIZE; i++ ) {
    alphabetArray[i] = (char)(97 + i); 
  }

  // print array to standard output
  cout << "Here is the alphabet:" << endl;
  for (i = 0; i < ALPHABET_SIZE; i++ ) {
    cout << alphabetArray[i];
  }
  cout << endl << endl;

  // set array to uppercase alphabet
  for (i = 0; i < ALPHABET_SIZE; i++ ) {
    alphabetArray[i] -= 32; 
  }

  // print array to standard output
  cout << "Here is the alphabet:" << endl;
  for (i = 0; i < ALPHABET_SIZE; i++ ) {
    cout << alphabetArray[i];
  }

}