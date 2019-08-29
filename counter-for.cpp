// ENGR 23004 - Class Example 
// Week 4 - Repetition
//
// counter-for.c
// This program will ask the user to enter 5 integers and calculate the sum
// using a for loop

#include <iostream>

using namespace std;

int main() {

  int number = 0;
  int sum = 0;

  for (int counter = 0; counter < 5; counter++) {
    cout << "Please enter an integer: ";
    cin >> number;

    sum = sum + number;
  } // end for

  cout << "The final sum is " << sum;
  
}
