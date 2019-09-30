// ENGR 2304 - Class Example 
// Week 6 - Functions
//
// functions-randRange.cpp
// This program illustrates how to use rand() to pick random numbers 
// in a desired range for both integers and floating point numbers

#include <iostream>
#include <cstdlib> // required for rand()
#include <ctime>   // required for time()

using namespace std;

int main() {
  int i, low, high, number;
  float f_number;

  // seed the random generator using the current time
  srand(time(0)); 
  
  cout << "Hello! I will pick some random numbers for you!" << endl;
  
  // ask the user for the low and high end of the desired range
  cout << "Please enter an integer for the low end of the range: ";
  cin >> low;
  cout << "Please enter an integer for the high end of the range: ";
  cin >> high;

  cout << endl;
  cout << "Here are some random numbers between " << low << " and " << high << endl;

  for (i=0; i<10; i++) {
   number = low + rand() % (high - low + 1);
   cout << "The random integer you got is " << number << endl;
  }
  
  cout << endl;
  
  for (i=0; i<10; i++) {
   f_number = low + (float) rand() / RAND_MAX * (high - low + 1);
   cout << "The random float you got is " << f_number << endl;
  }

}