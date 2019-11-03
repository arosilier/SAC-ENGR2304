/******************************************************************************
 Salary class
 Implementation
 Filename: Salary.cpp

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include "Salary.h"

// constructors

Salary::Salary() {
    // implicit call to default Employee constructor
    rate = 0;
}

Salary::Salary(string empName) : Employee(empName), rate(0) {
    // explicit call to Employee paramaterized constructor in initialization list
    // rate set in initialization list also
}

Salary::Salary(string empName, double empRate) : Employee(empName) {
    // explicit call to Employee paramaterized constructor in initialization list
    rate = empRate;
}


Salary::Salary(string empName, string empAddr, double empRate) : Employee(empName, empAddr) {
    // explicit call to Employee paramaterized constructor in initialization list
    rate = empRate;
}
    
// other methods
double Salary::calcPay(double year) {
    return year * rate;
}

void Salary::printRate() {
    cout << fixed << setprecision(2);
    cout << "$" << rate << " per year";
}
