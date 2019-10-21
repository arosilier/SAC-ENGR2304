// ENGR 2304 - Class Example 
// Week 9 - Pointers
//
// pointers-sizeof.cpp
// This program illustrates using the sizeof operator to check sizes of
// built in data types for a particular compiler

#include <iostream>  // Required for cout
#include <string>

using namespace std;

int main() { 

    cout << "Size of char: " << sizeof(char) << " byte" << endl; 
    cout << "Size of int: " << sizeof(int) << " bytes" << endl; 
    cout << "Size of float: " << sizeof(float) << " bytes" <<endl; 
    cout << "Size of double : " << sizeof(double) << " bytes" << endl; 

    return 0; 
} 
	