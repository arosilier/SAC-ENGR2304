// ENGR 23004 - Class Example 
// Week 4 - Repetition
//
// sentinel-while.c
// This program will ask the user to enter a series of integers 
// and calculate the sum using a while loop. A negative integer
// stops the input 

#include <iostream>

using namespace std;

int main() {

  int number = 0; // setting my initial condition is very important here!!
  int sum = 0;

  while (number >= 0) {  // repeat as long as the number was positive
    sum = sum + number;  // because my initial value of 'number' is always zero, it doesn't hurt
                         // hurt to add it here the first time through. On future iterations 
                         // I will know that 'number' is positive because of my while condition
    
    cout << "Please enter a positive integer (any negative integer to stop): ";
    cin >> number;
  } 

  cout << "The final sum is " << sum;
    
}
