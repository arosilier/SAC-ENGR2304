// ENGR 2304 - Class Example 
// Week 9 - Pointers
//
// pointers-comparison.cpp
// This program illustrates using assignment and comparison with pointers

#include <iostream>  // Required for cout
#include <string>

using namespace std;

int main () {

  int a=1, b=2;
  float c=5.5, d=150.75;
  
  int *intPtr1=nullptr, *intPtr2=nullptr;

  intPtr1 = &a;
  cout << "The address in intPtr1 is " << intPtr1 << endl;
  cout << "The value intPtr1 points to is " << *intPtr1 << endl;
 
  intPtr2 = &b;
  cout << "The address in intPtr2 is " << intPtr2 << endl;
  cout << "The value intPtr2 points to is " << *intPtr2 << endl;
   
  if (intPtr1 < intPtr2) {
    cout << "intPtr1 points to a location BEFORE that of intPtr2" << endl;
  } else if (intPtr1 > intPtr2) {
    cout << "intPtr1 points to a location AFTER that of intPtr2" << endl;
  } else {
    cout << "intPtr1 and intPtr2 point to the SAME memory location" << endl;
  }
  
  cout << "Take two..." << endl;
  intPtr1 = intPtr2;
  cout << "The address in intPtr1 is " << intPtr1 << endl;
  cout << "The value intPtr1 points to is " << *intPtr1 << endl;
  cout << "The address in intPtr2 is " << intPtr2 << endl;
  cout << "The value intPtr2 points to is " << *intPtr2 << endl;

  if (intPtr1 < intPtr2) {
    cout << "intPtr1 points to a location BEFORE that of intPtr2" << endl;
  } else if (intPtr1 > intPtr2) {
    cout << "intPtr1 points to a location AFTER that of intPtr2" << endl;
  } else {
    cout << "intPtr1 and intPtr2 point to the SAME memory location" << endl;
  }

}
	