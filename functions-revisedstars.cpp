// ENGR 2304 - Class Example 
// Week 6 - Functions
//
// functions-revisedstars.cpp
// This program will ask the user to enter five numbers and then
// print five rows of stars corresponding to the numbers entered.
// This is the resulting program after "functionalizing" the original 
// version which is in functions-originalstars.cpp

#include <iostream>

using namespace std;

/* Function Prototypes --------------------------------- */
void printStars(int number);

/* Main function  --------------------------------- */
int main() {

    int number1, number2, number3, number4, number5;
    
    cout << "Please enter 5 integers: ";
    cin >> number1 >> number2 >> number3 >> number4 >> number5;
    
    printStars(number1);
    printStars(number2);
    printStars(number3);
    printStars(number4);
    printStars(number5);
    
    return 0;
}

/* Programmer defined functions  --------------------------------- */

// Function: printStars
// Job: print a line of stars corresponding to the number sent as input
// Input: single integer
// Output: none
void printStars(int number) {

	// Fill in this code block with the function definition

}
