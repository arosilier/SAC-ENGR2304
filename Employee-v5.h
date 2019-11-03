#ifndef EMPLOYEE_H
#define EMPLOYEE_H

/******************************************************************************
 Employee class
 Declaration - v5
 Filename: Employee.h

*******************************************************************************/
#include <string>
#include "Address.h"

using namespace std;

class Employee {

  // declaration statements for class properties
  private:
  int employeeID;
  string name;
  Address address;
 
  // declaration statements for the class methods
  public:
  Employee();      // default constructor
  Employee(string empName); // parameterized constructor - name only
  Employee(string empName, string empAddr); // parameterized constructor - name & address
  
  bool operator < (Employee& right); // overload < operator
  bool operator <= (Employee& right); // overload <= operator
  bool operator > (Employee& right); // overload > operator
  bool operator >= (Employee& right); // overload >= operator
  bool operator == (Employee& right); // overload = operator
  
  int getEmployeeID(); // accessor for employeeID
  string getName(); // accessor for name
  string getAddress(); // accessor for address
  
  void setName(string n); // mutator for name
  void setAddress(string a); // mutator for address
  
  void print();    // print out employee details
  
  virtual void printRate() {}; // virtual method to print pay rate

};

#endif