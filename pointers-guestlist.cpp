// ENGR 2304 - Class Example 
// Week 9 - Pointers
//
// pointers-guestlist.cpp
// This program illustrates using a dynamically allocated array

#include <iostream>  // Required for cout
#include <string>

using namespace std;

int main () {
  
  int numGuests = 0;

  cout << "How many guests do you want to invite to your party?" << endl;
  cin >> numGuests;

  // dynamically allocate the guest list array
  string *listPtr = nullptr;
  listPtr = new string[numGuests];

  // get the names from the user
  for (int i=0; i<numGuests; i++) {
    cout << "Enter the name for guest " << i+1 << ": "; 
    cin >> *(listPtr + i);
  }

  // print out the guest list
  cout << "Got it! Here is your guest list:" << endl;
  for (int i=0; i<numGuests; i++) {
    cout << *(listPtr + i) << endl; 
  }

  // release the memory
  delete [] listPtr;
  
}