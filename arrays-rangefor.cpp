// ENGR 2304 - Class Example 
// Week 8 - Arrays
//
// arrays-rangefor.cpp
// This program illustrates how to use a range-based for loop
// to access an array

#include <iostream>

using namespace std;

// global constants
const int ARRAY_SIZE=10;

int main () {

  int i; 
  int numberArray[ARRAY_SIZE];

  // initialize the array to be equal to the index value
  for (i = 0; i < ARRAY_SIZE; i++ ) {
    numberArray[i] = i; 
  }

  // print the array
  for (int num : numberArray) {
    cout << "[" << num << "]"; 
  }

  cout << endl;
  
  // add one to each array element
  for (int& num : numberArray) {
    num++;
  }

  // print the array
  for (int num : numberArray) {
    cout << "[" << num << "]"; 
  }
  
}