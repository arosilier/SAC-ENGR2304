/******************************************************************************
 Hourly class
 Implementation
 Filename: Hourly.cpp

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include "Hourly.h"

// constructors

Hourly::Hourly() {
    // implicit call to default Employee constructor
    rate = 0;
}

Hourly::Hourly(string empName) : Employee(empName), rate(0) {
    // explicit call to Employee paramaterized constructor in initialization list
    // rate set in initialization list also
}

Hourly::Hourly(string empName, double empRate) : Employee(empName) {
    // explicit call to Employee paramaterized constructor in initialization list
    rate = empRate;
}


Hourly::Hourly(string empName, string empAddr, double empRate) : Employee(empName, empAddr) {
    // explicit call to Employee paramaterized constructor in initialization list
    rate = empRate;
}
    
// other methods
double Hourly::calcPay(double hours) {
    return hours * rate;
}

void Hourly::printRate() {
    cout << fixed << setprecision(2);
    cout << "$" << rate << " per hour";
}
