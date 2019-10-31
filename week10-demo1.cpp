/*----------------------------------------------------*/
/* Name: Prof Rosilier                                */
/* Class: ENGR-2304                                   */
/* Week 10 Video Demo - Complex number class          */
/*----------------------------------------------------*/

// Preprocessor directives
#include <iostream>
#include "ComplexNum.h"  // must be included to use Employee class

// Using directive
using namespace std;


// Main function
int main()
{
    
    // Hand example
    // 2 + 5i
    // -5 + 6i
    // The addition result is (2 + -5) + (5 + 6)i = -3 + 11i
    // The subtraction result is (2 - -5) + (5 - 6)i = 7 + -1i

    ComplexNum num1;
    ComplexNum num2(-5, 6);
    ComplexNum result;
    
    // test mutators
    num1.setReal(2);
    num1.setImaginary(5);

    // test accessors
    cout << "The real part is " << num1.getReal() << endl;
    cout << "The imaginary part is " << num1.getImaginary() << endl;
        
    // test operator overloading with hand example
    result = num1 + num2;
    
    cout << "The addition result is:" << endl;
    num1.print();
    cout << " + ";
    num2.print();
    cout << " = ";
    result.print();
    cout << endl;
    
    result = num1 - num2;
    
    cout << "The subtraction result is:" << endl;
    num1.print();
    cout << " - ";
    num2.print();
    cout << " = ";
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
    
    return 1;
}

