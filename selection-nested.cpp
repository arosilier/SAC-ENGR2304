// ENGR 23004 - Class Example 
// Week 3 - Selection
//
// selection-nested.c
// This program illustrates using nested selection to check a grade

#include <iostream>

using namespace std;

int main() {
  int grade = 95;

  if ( grade >= 90 ) {
     cout << "A" << endl;
  } else if ( grade >= 80 ) {
     cout << "B" << endl;
  } else if ( grade >= 70 ) {
     cout << "C" << endl;
  } else if ( grade >= 60 ) {
     cout << "D" << endl;
  } else {
     cout << "F" << endl;
  }

}
