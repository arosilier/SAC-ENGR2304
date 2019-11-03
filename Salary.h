#ifndef SALARY_H
#define SALARY_H

/******************************************************************************
 Salary class
 Declaration
 Filename: Salary.h

*******************************************************************************/
#include "Employee.h"

using namespace std;

class Salary : public Employee {

    // declaration statements for class properties
    private:
    double rate;
    
    // declaration statements for the class methods
    public:
    
    // constructors
    Salary();
    Salary(string empName); 
    Salary(string empName, double empRate); 
    Salary(string empName, string empAddr, double empRate); 
    
    // accessors
    double getRate() { return rate; } 
    
    // mutators
    void setRate(double r) { rate = r; }
    
    // other methods
    double calcPay(double hours);
    void printRate();
    
};

#endif