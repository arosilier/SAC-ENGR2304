// ENGR 2304 - Class Example 
// Week 6 - Functions
//
// functions-parameters.cpp
// This program will illustrates the difference between pass
// by reference and pass by value

#include <iostream>

// function prototypes
void someFunction(int x);
void anotherFunction(int& y);

using namespace std;

int main () {
  int a = 5;
  
  cout << "Pass by value..." << endl;
  someFunction(a);
  cout << "The variable a has the value " << a << endl;

  cout << "\nPass by reference..." << endl;
  anotherFunction(a);
  cout << "The variable a has the value " << a << endl;

  return 0;
}

void someFunction(int x) {
  cout << "The variable x has the value " << x << endl;
  x = 10;
  cout << "The variable x has the value " << x << endl;
}

void anotherFunction(int& y) {
  cout << "The variable y has the value " << y << endl;
  y = 10;
  cout << "The variable y has the value " << y << endl;
}
