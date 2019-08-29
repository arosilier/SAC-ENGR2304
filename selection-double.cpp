// ENGR 23004 - Class Example 
// Week 3 - Selection
//
// selection-double.c
// This program illustrates using double selection to check a grade

#include <iostream>

using namespace std;

int main() {
  int grade = 95;

  if (grade > 90) {
    cout << “You got an A\n”;
    cout << “Great job!\n”;
  } else {
    cout << “Sorry, not an A\n”;
  } //end if

  cout << “Keep working hard.”;
}
