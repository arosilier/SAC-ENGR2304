/******************************************************************************
 Mortgage class
 Implementation
 Filename: Mortgage.cpp

*******************************************************************************/
#include "Mortgage.h"
#include <cmath>
#include <iostream>

// constructors
Mortgage::Mortgage() {
    loanAmt = 0;
    interestRate = 0;
    years = 0;
    
    monthlyRate = 0;
    payment = 0;
    numPayments = 0;
}

Mortgage::Mortgage(double l, double i, int y) {
    loanAmt = l;
    interestRate = i;
    years = y;
    
    monthlyRate = (interestRate/100)/12;
    numPayments = years * 12;
    payment = loanAmt*(monthlyRate*pow(1+monthlyRate, numPayments)) / (pow(1+monthlyRate, numPayments)-1);
}

double Mortgage::getInterestPaid(int n) {
    return (payment * n) - (loanAmt - getBalance(n));
}

double Mortgage::getPrincipalPaid(int n) {
    return (loanAmt - getBalance(n));
}

double Mortgage::getBalance(int n) {
    return loanAmt * (pow(1+monthlyRate, numPayments) - 
          pow(1+monthlyRate, n))/(pow(1+monthlyRate, numPayments)-1);
}
