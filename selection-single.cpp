// ENGR 23004 - Class Example 
// Week 3 - Selection
//
// selection-single.c
// This program illustrates using single selection to compare two
// integers

#include <iostream>

using namespace std;

int main() {
  int a=5, b=6;

  if (a == 5) 
    cout << “a is five!”;

  if (a > b) {
    cout << “a is greater than b\n”;
  }

  if (a < b) {
    cout << “a is less than b\n”;
  }

  if (a == b) {
    cout << “a and b are equal\n”;
    cout << “a is " << a << endl;
    cout << “b is " << b << endl; 
  }

  cout << "that's all!"
}
