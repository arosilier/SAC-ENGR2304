// ENGR 23004 - Class Example 
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

/* Main function  --------------------------------- */
int main() {

    int number;

    number = getNumberInRange(10, 20);	
    cout << "Thanks you entered " << number;

}

/* Programmer defined functions  --------------------------------- */
int getNumberInRange(int a, int b) {

   int num; 

   do {
        cout << "Please enter a number between " << a << " and " << b << " (inclusive): ";
        cin >> num;

        if (num < a) {
            cout << "That's too low" << endl;
        } else if (num > b) {
            cout << "That's too high" << endl;
        }

    } while ( !(num >= a && num <= b));

    return num;
}

