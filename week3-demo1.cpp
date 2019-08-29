/*----------------------------------------------------*/
/* Name: Prof Rosilier                                */
/* Class: ENGR-2304-003 Fall 2019                     */
/* Assignment #:  Week 3 Demo - Selection             */
/*                                                    */
/* This program asks the user to enter to numbers and */
/* then choose a calculation to perform from a menu   */
/*                                                    */

// Preprocessor directives
#include <iostream>  // Required for cout
#include <iomanip>   // Required for setprecision

// Using directive
using namespace std;

// Main function
int main()
{
  float number1, number2;
  char menuChoice;
  float result = 0;
  bool valid = true;
  
  cout << "Welcome! Please enter two numbers: ";
  cin >> number1 >> number2;
  
  cout << "Here are your choices, please enter one: " << endl;
  cout << "\ta - addition"<< endl;
  cout << "\tb - subtraction" << endl;
  cout << "\tc - multiplication" << endl;
  cout << "\td - division" << endl;
  cout << "\te - average" << endl;
  cin >> menuChoice;
  
  switch (menuChoice) {
      case 'a':                 // addition
      case 'A':
        result = number1 + number2;
        break;
      case 'b':                 // subtraction
      case 'B':
        result = number1 - number2;
        break;
      case 'c':                 // multiplication
      case 'C':
        result = number1 * number2;
        break;
      case 'd':                 // division
      case 'D':
        if (number2 != 0) {
            result = number1 / number2;
        } else {
            cout << "Oops! Can't divide by zero, sorry!" << endl;
            valid = false;
        }
        break;
      case 'e':                 // average
      case 'E':
        result = (number1 + number2) / 2.0;
        break;
      default:
        cout << "Oops... invalid choice!";
        valid = false;
  }
  
  if (valid) {
    cout << fixed << setprecision(2);
    cout << "Here is the result: " << result;
  }

  // Exit program
  return 0;
}
/*----------------------------------------------------*/