// Prof Rosilier
// Style Guide Example

#include <iostream>
#include <iomanip>

using namespace std;

int main () {

   // this section includes variable definitions
   int numGrades(3);
   int grade1, grade2, grade3;
   float average;

   // this section asks the user to enter three grades
   cout << "Please enter three grades: ";
   cin >> grade1 >> grade2 >> grade3;

   // this section calculates the average
   // it also illustrates how multiple lines can be
   // line up logically for very long statements
   average = (float) (grade1 + 
                      grade2 + 
                      grade3) / numGrades;

   // this section prints the average for the user
   cout << "The average is " << average <<endl;

   // this section prints if the grade is passing, and
   // if so also prints the letter grade
   // it illustrates how to use indentation with 
   // multiple blocks 
   if (average >= 70) {

      cout << "This is a passing grade." << endl;

      if (average >= 90) {
         cout << "Letter grade is A" << endl;
      } else if (average >= 80) {
         cout << "Letter grade is B" << endl;
      } else {
         cout << "Letter grade is C" << endl;
      } // end if

   } else {

      cout << "This is not a passing grade." << endl;

   } // end if

} // end main