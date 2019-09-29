// ENGR 2304 - Class Example 
// Week 6 - Functions
//
// functions-getnumberinrange.c
// This program will ask the user to enter a number and check that it is
// within a specified range. If it's not, the user is asked to try again.
// This is the resulting program after we "functionalized" the original version
// which is in functions-originalgetnumber.c

#include <iostream>

using namespace std;

/* Function Prototypes --------------------------------- */
int getNumberInRange(int a, int b);

/* Main function --------------------------------- */
int main() {

  int number;

  number = getNumberInRange(10, 20); 
  cout << "Thanks you entered " << number;

}

/* Programmer defined functions --------------------------------- */

// Function: getNumberInRange
// Job: ask the user for an integer in a specified range; if the number entered
// is out of range, print an error and repeat
// Input: integers representing the low and high end of the desired range (inclusive)
// Output: the validated integer entered by the user
int getNumberInRange(int a, int b) {

  int num;
  int flag;

  do {
    flag = 0; // reset sentinel to assume valid input

    cout << "Please enter a number between " << a << " and " << b << " (inclusive):";
    cin >> num;

    if (num < a) { 
      cout << "That's too low" << endl;
      flag = 1; // set sentinel to trigger repeat
    } else if (num > b) {
      cout << "That's too high" << endl;
      flag = 1; // set sentinel to trigger repeat
    }

  } while ( flag ); // repeat if number is out of range
  
  return num;

}

