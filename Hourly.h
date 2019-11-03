#ifndef HOURLY_H
#define HOURLY_H

/******************************************************************************
 Hourly class
 Declaration
 Filename: Hourly.h

*******************************************************************************/
#include "Employee.h"

using namespace std;

class Hourly : public Employee {

    // declaration statements for class properties
    private:
    double rate;
    
    // declaration statements for the class methods
    public:
    
    // constructors
    Hourly();
    Hourly(string empName); 
    Hourly(string empName, double empRate); 
    Hourly(string empName, string empAddr, double empRate); 
    
    // accessors
    double getRate() { return rate; } 
    
    // mutators
    void setRate(double r) { rate = r; }
    
    // other methods
    double calcPay(double hours);
    void printRate();
    
};

#endif