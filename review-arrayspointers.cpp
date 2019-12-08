// ENGR 2304 
// Week 15 - Review
//
// review-pointers.cpp
// This program illustrates using pointers to work with arrays

#include <iostream>

using namespace std;

int main()
{
    const int SIZE=5;
    int theArray[SIZE] = {0, 1, 2, 3, 4};
    
    cout << "&theArray[0] is " << &theArray[0] << endl;
    cout << "&theArray[1] is " << &theArray[1] << endl;
    cout << "&theArray[2] is " << &theArray[2] << endl;
    cout << "&theArray[3] is " << &theArray[3] << endl;
    cout << "&theArray[4] is " << &theArray[4] << endl;
    cout << "theArray is " << theArray << endl;
    
    // array offset notation
    for (int i=0; i<SIZE; i++) {
        cout << "theArray[" << i << "] is " << theArray[i] << endl;
    }

    cout << endl;
    
    // pointer arithmetic notation
    for (int i=0; i<SIZE; i++) {
        cout << "*(theArray +" << i << ") is " << *(theArray+i) << endl;
    }
    
    cout << endl;
    
    int *arrayPtr = nullptr; // always a good idea to initialize pointers to nullptr
    
    arrayPtr = theArray; // Set the pointer to point to the start of the array
    
    for (int i=0; i<SIZE; i++) {
        cout << "arrayPtr is " << arrayPtr << " and *(arrayPtr) is " << *(arrayPtr) << endl;
        arrayPtr++;
    }

    return 0;
}
