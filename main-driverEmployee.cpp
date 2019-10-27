/******************************************************************************
 Employee class
 Driver program - v4
 Filename: main-driverEmployee.cpp

*******************************************************************************/
#include <iostream>
#include "Employee.h"

using namespace std;

int main () {
    
   cout << "Creating three employees..." << endl;
   Employee jim, suzy("Suzy Smith"), beth("Beth Baker", "123 Main Street, San Antonio, TX 78222");
    
   cout << endl  << "Checking alphabetical order..." << endl;
   cout << "The first employee is:" << endl;;     
    if (jim <= suzy && jim <= beth) {
        jim.print();
    } else if (suzy <= jim && suzy <= beth) {
        suzy.print();
    } else if (beth <= jim && beth <= suzy) {
        beth.print();
    }
    cout << endl;
    
    cout << "The last employee is:" << endl;    
    if (jim >= suzy && jim >= beth) {
        jim.print();
    } else if (suzy >= jim && suzy >= beth) {
        suzy.print();
    } else if (beth >= jim && beth >= suzy) {
        beth.print();
    }
    
    cout << endl  << "Testing mutators..." << endl;
    jim.setName("Jim Jones");
    beth.setAddress("555 Elm Ave., San Antoino, TX 78201");
    cout << endl;

    cout << "Testing accessors..." << endl;
    cout << "Jim's name is now " << jim.getName() << endl;
    cout << "Beth's address is now " << beth.getAddress() << endl;
    cout << "Suzy's ID is " << suzy.getEmployeeID() << endl;
  
}
