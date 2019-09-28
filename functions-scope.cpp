// ENGR 2304 - Class Example 
// Week 6 - Functions
//
// functions-scope.cpp
// This program illustrates the different scope for local variables

#include <iostream>

using namespace std;

int main()
{
    int x;
    
    for (x=0; x<5; x++) {  
        cout << "the value of x is "<< x << endl;
        
    }
    cout << "after the for loop, the value of x is " << x << endl;
    
    for (int y=0; y<5; y++) {  
        cout << "the value of y is "<< y << endl;
        
    }
//    cout << "after the for loop, the value of y is " << y << endl;
// the above line will cause a compilation error due to the scope
// of variable y being limited to the for loop


    return 0;
}
