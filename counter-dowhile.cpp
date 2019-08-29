// ENGR 23004 - Class Example 
// Week 4 - Repetition
//
// counter-dowhile.c
// This program will ask the user to enter 5 integers and calculate the sum
// using a do-while loop

#include <iostream>

using namespace std;

int main() {

  int number = 0;
  int counter = 0;
  int sum = 0;

  do {
    cout << "Please enter an intger: ";
    cin >> number;
  
    sum = sum + number;
    counter = counter + 1; // increment counter
  } while (counter < 5); // end do-while

  cout << "The final sum is " << sum;
  
}
