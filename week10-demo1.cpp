/*----------------------------------------------------*/
/* Name: Prof Rosilier                                */
/* Class: ENGR-2304                                   */
/* Week 10 Video Demo - Complex number class          */
/*----------------------------------------------------*/

// Preprocessor directives
#include <iostream>
#include "ComplexNum.h"  // must be included to use ComplexNum class

// Using directive
using namespace std;


// Main function
int main()
{
    ComplexNum num1;
    ComplexNum num2(-5, 6);
    
    cout << "printing num1: ";
    num1.print();
    cout << endl;
    
    cout << "printing num2: ";
    num2.print();
    cout << endl;
    
    // testing the mutators
    num1.setReal(2);
    num1.setImaginary(5);
    
    // testing the accessors
    cout << "The real part of num1 is now " << num1.getReal() << endl;
    cout << "The imaginary part of num1 is now " << num1.getImaginary() << endl;
    
    // test addition
    cout << "The addition result is ";
    ComplexNum result;
    result = num1 + num2;
    result.print();
    cout << endl;

    // test substraction
    cout << "The subtraction result is ";
    result = num1 - num2;
    result.print();
    cout << endl;
    
        // Try all of the hand example variations
    // 1+2i : normal case
    // 1-2i : if imaginary part is negative, don't print the + sign
    // 2i  or -2i : if the real part is zero, don't print the real part or the + sign
    // 1+i  or 1-i: if the imaginary part is 1 or -1 don't print the number (only i)
    // 1 : if the imaginary part is 0 don't print the + sign or the imaginary part
    // 0 : if both parts are zero then just print a 0
    
    cout << "Testing format variations" << endl;
    num1.setReal(1);
    num1.setImaginary(2);
    num1.print();
    cout << endl;
    
    num1.setReal(1);
    num1.setImaginary(-2);
    num1.print();
    cout << endl;
    
    num1.setReal(0);
    num1.setImaginary(2);
    num1.print();
    cout << endl;
    
    num1.setReal(0);
    num1.setImaginary(-2);
    num1.print();
    cout << endl;
    
    num1.setReal(1);
    num1.setImaginary(1);
    num1.print();
    cout << endl;
    
    num1.setReal(1);
    num1.setImaginary(-1);
    num1.print();
    cout << endl;
    
    num1.setReal(1);
    num1.setImaginary(0);
    num1.print();
    cout << endl;
    
    num1.setReal(0);
    num1.setImaginary(0);
    num1.print();
    cout << endl;

}

