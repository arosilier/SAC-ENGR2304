// ENGR 2304 - Class Example 
// Week 6 - Functions
//
// functions-scopePractice.cpp
// This program is used for the practice activity on scope

#include <iostream>

using namespace std;

// global variables
int b = 5;

// function prototypes
void someFunction(int b);
void anotherFunction();
int yetAnotherFunction(int b);

// main function
int main()
{
  cout << "the value of b is "<< b << endl;

  int b = 10;

  cout << "the value of b is "<< b << endl;

  for (int b=5; b<10; b++) { 
    cout << "the value of b is "<< b << endl;
  }

  cout << "the value of b is "<< b << endl;

  someFunction(b);

  cout << "the value of b is "<< b << endl;

  anotherFunction();

  cout << "the value of b is "<< b << endl;
  
  b = yetAnotherFunction(b);
  
  cout << "the value of b is "<< b << endl;
  
  return 0;
}

// function definitions

void someFunction(int b) {

  cout << "the value of b is "<< b << endl;

  b = 20;
  
  cout << "the value of b is "<< b << endl;

  return;
}

void anotherFunction() {
  cout << "the value of b is "<< b << endl;

  return;
}

int yetAnotherFunction(int b) {
  
  cout << "the value of b is "<< b << endl;

  b = 30;
  
  cout << "the value of b is "<< b << endl;

  return b;
}
