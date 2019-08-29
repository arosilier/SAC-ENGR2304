// ENGR 23004 - Class Example 
// Week 4 - Repetition
//
// sentinel-dowhile.c
// This program will ask the user to enter a series of integers 
// and calculate the sum using a do-while loop. A negative integer
// stops the input 

#include <iostream>

using namespace std;

int main() {

  int number = 0;
  int sum = 0;

  do {
    cout << "Please enter a positive integer (any negative integer to stop): ";
    cin >> number;
  
    if (number >= 0) {   // I only want to add the number if it's positive
      sum = sum + number;
    }
  } while (number >= 0); // repeat as long as the number was positive

  cout << "The final sum is " << sum;
  
}
