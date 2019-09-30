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
  cout << "1: the value of b is "<< b << endl;

  int b = 10;

  cout << "2: the value of b is "<< b << endl;

  for (int b=5; b<10; b++) { 
    cout << "3: the value of b is "<< b << endl;
  }

  cout << "4: the value of b is "<< b << endl;

  someFunction(b);

  cout << "7: the value of b is "<< b << endl;

  anotherFunction();

  cout << "9: the value of b is "<< b << endl;
  
  b = yetAnotherFunction(b);
  
  cout << "12: the value of b is "<< b << endl;
  
  return 0;
}

// function definitions

void someFunction(int b) {

  cout << "5: the value of b is "<< b << endl;

  b = 20;
  
  cout << "6: the value of b is "<< b << endl;

  return;
}

void anotherFunction() {
  cout << "8: the value of b is "<< b << endl;

  return;
}

int yetAnotherFunction(int b) {
  
  cout << "10: the value of b is "<< b << endl;

  b = 20;
  
  cout << "11: the value of b is "<< b << endl;

  return b;
}
