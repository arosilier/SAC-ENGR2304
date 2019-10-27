/******************************************************************************
 Employee class
 Declaration - v4
 Filename: Employee.h

*******************************************************************************/
#include <string>

using namespace std;

class Employee {

  // declaration statements for class properties
  private:
  int employeeID;
  string name;
  string address;
 
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
  
  int getEmployeeID() const {return employeeID;} // inline accessor for employeeID
  string getName() const {return name;} // inline accessor for name
  string getAddress() const {return address;} // inline accessor for address

  void setName(string n); // mutator for name
  void setAddress(string a); // mutator for address
  
  void print();    // print out employee details

};