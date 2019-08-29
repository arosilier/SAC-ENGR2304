// ENGR 23004 - Class Example 
// Week 3 - Selection
//
// selection-switch.c
// This program asks the user to enter an integer and then prints
// their fortune.

#include <iostream>

using namespace std;

int main() {

  int fortuneNum;
  cout << "Enter an integer number to get your fortune!" << endl;
  cin >> fortuneNum;

  switch(fortuneNum) {
    case 1: 
      cout << "You will find true love.\n";
      break; 
    case 2 :
      cout << "You will have an wonderful surprise.\n";
      break;
    case 3 :
      cout << "You will become a millionaire.\n";
      break;
    default :
      cout << "The stars are not clear. Try again.\n";
  }

}
