#ifndef MORTG_H
#define MORTG_H

/******************************************************************************
 Mortgage class
 Declaration
 Filename: Mortgage.h

*******************************************************************************/

using namespace std;

class Mortgage {
    
    private:
    double loanAmt;
    double interestRate;
    int years;
    
    double monthlyRate;
    double payment;
    double numPayments;
    
    public:
    Mortgage();
    Mortgage(double l, double i, int y);
    double getInterestPaid(int n);
    double getBalance(int n);
    double getPrincipalPaid(int n);
    int getNumPmts() { return numPayments; }
    
};

#endif