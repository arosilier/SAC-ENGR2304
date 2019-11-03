/******************************************************************************
 Employee class
 Implementation - v5
 Filename: Employee.cpp

*******************************************************************************/
#include <iostream>
#include "Employee.h"  // must be included to use Employee class

using namespace std;

// global variables
int employeeCount = 0; // used to track number of employees

// Default constructor
Employee::Employee() : address("No address yet entered") {

  employeeID = ++employeeCount; // add one to the current employeeCount and use as ID
  name = "No name yet entered";

}

// Parameterized constructor - name only
Employee::Employee(string empName) : address("No address yet entered") {

  employeeID = ++employeeCount; // add one to the current employeeCount and use as ID
  name = empName;
    
}

// Parameterized constructor - name and address
Employee::Employee(string empName, string empAddr) : address(empAddr) {

  employeeID = ++employeeCount; // add one to the current employeeCount and use as ID
  name = empName;

}

// Print out employee details
void Employee::print() {

  cout << "Employee ID is " << employeeID << endl;
  cout << "Employee name is " << name << endl;
  cout << "Employee address is " << address.getFullAddress() << endl;

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

// accessor for employeeID
int Employee::getEmployeeID() {
    return employeeID;
}

// accessor for name
string Employee::getName() {
    return name;
} 

// accessor for address
string Employee::getAddress() {
    return address.getFullAddress();
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
        address.setAddress(a);
    }
}
