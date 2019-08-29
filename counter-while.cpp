// ENGR 23004 - Class Example 
// Week 4 - Repetition
//
// counter-while.c
// This program will ask the user to enter 5 integers and calculate the sum
// using a while loop and a counter.

#include <iostream>

using namespace std;

int main() {
    
  int number = 0;
  int counter = 0;
  int sum = 0;

  while (counter < 5) {
    cout << "Please enter an integer: ";
    cin >> number;
  
    sum = sum + number;
    counter = counter + 1; // increment counter
  } // end while

  cout << "The final sum is " << sum;
}
