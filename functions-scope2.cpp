// ENGR 2304 - Class Example 
// Week 6 - Functions
//
// functions-scope2.cpp
// This program illustrates how the same variable name can 
// be used in different scopes

#include <iostream>

using namespace std;

// global variables
int a = 1;

// function prototypes
void someFunction(int a);
void anotherFunction();

int main()
{
  cout << "1: the value of a is "<< a << endl;

  int a = 2;

  cout << "2: the value of a is "<< a << endl;

  for (int a=0; a<5; a++) { 
    cout << "3: the value of a is "<< a << endl;
  }

  cout << "4: the value of a is "<< a << endl;

  someFunction(a);

  cout << "6: the value of a is "<< a << endl;

  anotherFunction();

  cout << "8: the value of a is "<< a << endl;
  
  return 0;
}

void someFunction(int a) {
  a = 10;
  cout << "5: the value of a is "<< a << endl;

  return;
}

void anotherFunction() {
  cout << "7: the value of a is "<< a << endl;

  return;
}
