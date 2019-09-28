// ENGR 2304 - Class Example 
// Week 6 - Functions
//
// functions-originalstars.cpp
// This program will ask the user to enter five numbers and then
// print five rows of stars corresponding to the numbers entered.
// This is the original version that is not using functions.

#include <iostream>

using namespace std;

int main() {

    int number1, number2, number3, number4, number5;
    int counter;
    
    cout << "Please enter 5 integers: ";
    cin >> number1 >> number2 >> number3 >> number4 >> number5;
    
    for (counter=0; counter < number1; counter++) {
        cout << "*";
    }
    cout << endl;
        
    for (counter=0; counter < number2; counter++) {
        cout << "*";
    }
    cout << endl;    
    
    for (counter=0; counter < number3; counter++) {
        cout << "*";
    }
    cout << endl;    
    for (counter=0; counter < number4; counter++) {
        cout << "*";
    }
    cout << endl;
    
    for (counter=0; counter < number5; counter++) {
        cout << "*";
    }
    cout << endl;
    
    return 0;
}
