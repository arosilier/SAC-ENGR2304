// ENGR 2304 - Class Example 
// Week 6 - Functions
//
// functions-static.cpp
// This program illustrates how the effect of the static storage class

#include <iostream>

using namespace std;

// function prototypes
void countMe();

int main() {

  int j;

  for (j=0; j < 5; j++) {
    countMe();
  }

  return 0;

}

void countMe() {
  int count = 0;
// to see the effect of the static storage class, comment out the line 
// above and uncomment the line below...  
//  static int count = 0;
  
  count++;
  cout << "The count is " << count << endl;

  return;

}
