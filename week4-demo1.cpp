/*----------------------------------------------------*/
/* Name: Prof Rosilier                                */
/* Class: ENGR-2304-003 Fall 2019                     */
/* Assignment #:  Week 4 Demo - Repetition            */
/*                                                    */
/* This program will average a list of grades for the */
/* user; the user enters -1 to stop entering grades   */
/*                                                    */

// Preprocessor directives
#include <iostream>  // Required for cout
#include <iomanip>

// Using directive
using namespace std;

// Main function
int main()
{
  int grade;
  int runningTotal = 0;
  int gradeCount = 0;
  float average;

  cout << "Welcome to our grade program!" << endl;
  cout << "Enter grades one at a time (whole numbers only), enter -1 to stop" << endl;
  
  cout << "Enter the grade: ";
  cin >> grade;
  
  while (grade != -1) {
      runningTotal += grade;
      gradeCount++;
      
      cout << "Enter the grade: ";
      cin >> grade;
  }
  
  // calculate the averge as long as gradeCount is not zero
  if (gradeCount != 0) {
      average = (float) runningTotal / gradeCount;
      cout << fixed << setprecision(2);
      cout << "The average is " << average;
  } else {
      cout << "No grades to average." << endl;
  }

  // Exit program
  return 0;
}
/*----------------------------------------------------*/