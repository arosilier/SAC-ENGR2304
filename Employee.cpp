/******************************************************************************
 Employee class
 Implementation - v4
 Filename: Employee.cpp

*******************************************************************************/
#include <iostream>
#include "Employee.h"  // must be included to use Employee class

using namespace std;

// global variables
int employeeCount = 0; // used to track number of employees

// Default constructor
Employee::Employee() {

  employeeID = ++employeeCount; // add one to the current employeeCount and use as ID
  name = "No name yet entered.";
  address = "No address yet entered.";

}

// Parameterized constructor - name only
Employee::Employee(string empName) {

  employeeID = ++employeeCount; // add one to the current employeeCount and use as ID
  name = empName;
  address = "No address yet entered.";

}

// Parameterized constructor - name and address
Employee::Employee(string empName, string empAddr) {

  employeeID = ++employeeCount; // add one to the current employeeCount and use as ID
  name = empName;
  address = empAddr;

}

// Print out employee details
void Employee::print() {

  cout << "Employee ID is " << employeeID << endl;
  cout << "Employee name is " << name << endl;
  cout << "Employee address is " << address << endl;

}

// Overload < operator
bool Employee::operator < (Employee& right) {
    return name < right.name;
}

// Overload <= operator
bool Employee::operator <= (Employee& right) {
    return name <= right.name;
}

// Overload > operator
bool Employee::operator > (Employee& right) {
    return name > right.name;
}

// Overload >= operator
bool Employee::operator >= (Employee& right) {
    return name >= right.name;
}

// Overload == operator
bool Employee::operator == (Employee& right) {
    return name == right.name;
}

// mutator for name  
void Employee::setName(string n) {
    if (!n.empty()) { // don't change if the input string is empty
      name = n;
    }
}

// mutator for address
void Employee::setAddress(string a) {
    if (!a.empty()) { // don't change if the input string is emptystring = a;
      address = a;
    }
}
