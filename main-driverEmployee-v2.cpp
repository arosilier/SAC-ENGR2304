/******************************************************************************
 Employee class with Inheritance and polymorphism
 Driver program
 Filename: main.cpp

*******************************************************************************/
#include <iostream>
#include "Employee.h"
#include "Hourly.h"
#include "Salary.h"

using namespace std;

int main () {
    
    int type, errFlag;
    const int HOURLY = 1, SALARY = 2;
    double rate;
    
    cout << "Please enter the employee full name: ";
    string name;
    getline(cin, name);

    cout << "Please enter the employee adress (on one line): ";
    string address;
    getline(cin, address);
    
    do {
      errFlag = 0;
      cout << "Please enter the pay type ("<< HOURLY << "=hourly " << SALARY << "=salary): ";
      cin >> type;
      if (type != HOURLY && type != SALARY) {
          cerr << "Invalid pay type." << endl;
          errFlag = 1;
      }
    } while (errFlag);
    
    cout << "Please enter the pay rate ";
    if (type == HOURLY)
        cout << "per hour: ";
    else if (type == SALARY)
        cout << "per year: ";
    cin >> rate;
    
    Employee *newEmployee = nullptr;
    if (type == HOURLY) {
        newEmployee = new Hourly(name, address, rate);
    } else if (type == SALARY) {
        newEmployee = new Salary(name, address, rate);
    }
    
    newEmployee->print();
    
    cout << "Employee pay rate is ";
    newEmployee->printRate();
    cout << endl;

}

