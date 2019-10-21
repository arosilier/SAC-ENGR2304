// ENGR 2304 - Class Example 
// Week 9 - Pointers
//
// pointers-variablesizes.cpp
// This program illustrates using the sizeof operator with variables

#include <iostream>  // Required for cout
#include <string>

using namespace std;

int main () {

  int a;
  cout << "Size of a: " << sizeof(a) << " bytes" << endl;
  cout << "Size of int: " << sizeof(int) << " bytes" << endl; // both should print the same value

  char name[] = "John Doe";
  string name2="John Doe";
  cout << "Size of name (C-style string): " << sizeof(name) << " bytes" << endl;
  cout << "Size of name (C++ string object): " << sizeof(name2) << " bytes" << endl;

  int b[5], numElements;
  numElements = sizeof(b) / sizeof(b[0]);   // should be 5
  cout << "Number of elements: " << numElements;

}
	