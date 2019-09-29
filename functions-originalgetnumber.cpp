// ENGR 2304 - Class Example 
// Week 6 - Functions
//
// functions-originalgetnumber.c
// This program will ask the user to enter a number and check that it is
// within a specified range. If it's not, the user is asked to try again.
// This is the original version of the program where everything is done in
// the main function and the range values are hardcoded to 10 and 20. We 
// "functionalized" this program and separated the range checking in the revised
// version which is in functions-getnumberinrange.c

#include <iostream>

using namespace std;

int main() {

  int number;
  int flag;

  do {
    flag = 0; // reset sentinel to assume valid input

    cout << "Please enter a number between 10 and 20 (inclusive):";
    cin >> number;

    if (number < 10) {
      cout << "That's too low" << endl;
      flag = 1; // set sentinel to trigger repeat
    } else if (number > 20) {
      cout << "That's too high" << endl;
      flag = 1; // set sentinel to trigger repeat
    }

  } while ( flag );  // repeat if number is out of range
  cout << "Thanks you entered " << number;

}


