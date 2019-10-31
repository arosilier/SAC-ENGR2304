/*----------------------------------------------------*/
/* Name: Prof Rosilier                                */
/* Class: ENGR-2304                                   */
/* Week 10 Video Demo - Complex number class          */
/*----------------------------------------------------*/

// Preprocessor directives
#include <iostream>  // Required for cout
#include "ComplexNum.h"  // must be included to use Employee class

// Using directive
using namespace std;

// constructors
ComplexNum::ComplexNum() {
    real = 0;
    imaginary = 0;
}

ComplexNum::ComplexNum(int r, int i) {
    real = r;
    imaginary = i;
}
   
// operators
ComplexNum ComplexNum::operator + (ComplexNum& right) {
    ComplexNum result;
    result.real = real + right.real;
    result.imaginary = imaginary + right.imaginary;
    return result;
}

ComplexNum ComplexNum::operator - (ComplexNum& right) {
    ComplexNum result;
    result.real = real - right.real;
    result.imaginary = imaginary - right.imaginary;
    return result;
}
   
// mutators
void ComplexNum::setReal(int r) {
    real = r;
}

void ComplexNum::setImaginary(int i) {
    imaginary = i;
}
   
// additional methods
void ComplexNum::print() {
    
    // this is the easy way
    // cout << real << "+" << imaginary << "i";
    
    if (real == 0 && imaginary == 0) {
        cout << 0;
    }
    
    if (real != 0) {
        cout << real;
    }
    
    if (imaginary != 0) {
        if (real != 0) {
            if (imaginary > 0) {
                cout << "+";
            } 
        }
        if (imaginary == -1) {
            cout << "-";
        } else if (imaginary != 1) {
            cout << imaginary;
        }
        cout << "i";
    }
    
    
}
  
