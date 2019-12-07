// ENGR 2304 
// Week 15 - Review
//
// review-pointers.cpp
// This program illustrates printing both the value and address of variables and pointers

#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int *aPtr = &a;
    
    cout << "The value of a is " << a << endl;
    cout << "The value of &a is " << &a << endl;
    cout << "The value of aPtr is " << aPtr << endl;
    cout << "The value of &aPtr is " << &aPtr << endl;
    cout << "The value of *aPtr is " << *aPtr << endl;
    cout << "The value of *a is INVALID" << endl;
    
    cout << "The value of *(&a) is " << *(&a) << endl;
    cout << "The value of &(*aPtr) is " << &(*aPtr) << endl;
    cout << "The value of *(&aPtr) is " << *(&aPtr) << endl;
    cout << "The value of &(*a) is INVALID" << endl;

    return 0;
}
