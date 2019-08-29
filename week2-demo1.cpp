/*----------------------------------------------------*/
/* Name: Prof Rosilier                                */
/* Class: ENGR-2304-003 Fall 2019                     */
/* Assignment #: Week 2 demo                          */
/* Due Date: n/a                                      */
/*                                                    */
/* converting Farenheit to Celsius                    */
/*                                                    */

// Preprocessor directives
#include <iostream>  //Required for cout
#include <iomanip>   // required for manipulators

// Using directive
using namespace std;

// Main function
int main()
{

  // variable declartions
  double temp_in_F = 0;
  double temp_in_C = 0;
 
  // get input from user
  cout << "Please enter a temperature in Farenheit: ";
  cin >> temp_in_F;
  
  // calcuate conversion to Celsius
  temp_in_C = (temp_in_F - 32) * 5 / 9;
  
  // print the result for the user
  cout << fixed << setprecision(2);
  cout << "The temperature is converted to " << temp_in_C << " degrees Celsius" << endl;

  // Exit program
  return 0;
}
/*----------------------------------------------------*/