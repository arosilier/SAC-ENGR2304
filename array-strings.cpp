// ENGR 2304 - Class Example 
// Week 8 - Arrays
//
// arrays-strings.cpp
// This program illustrates using a string objects

#include <iostream>  // Required for cout
#include <string>

using namespace std;

int main () {

  string firstName, lastName, fullName;

  firstName = "John";
  lastName = "Doe";
  fullName = firstName + " " + lastName;

  if (fullName.empty()) {
    cout << "Oops, something went wrong!";
  } else {
    cout << "Hello there, " << fullName << endl;
    cout << "You have " << firstName.size() << " letters in your first name ";
    cout << "and " << lastName.size() << " letters in your last name." << endl;
  }
  
  // range-based for loop with strings...
  string name = "Ashley";
    
  for (char letter : name) {
    cout << letter << ' '; 
  }

}
	