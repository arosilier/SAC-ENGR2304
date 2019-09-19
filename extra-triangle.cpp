// ENGR 2304 - Class Example 
// Week 4 - Repetition
//
// extra-triangle.c
// This program prints the following triangle shape using for loops
//
//    *
//   **
//  ***
// ****


#include <iostream>

using namespace std;

int main()
{
    int x, y;
    
    for (x=0; x<=3; x++) {
        
        // print spaces
        for (y=1; y<=3-x; y++) {
            cout << " ";
        }

        // print stars
        for (y=1; y<=x+1; y++) {
            cout << "*";
        }
        
        cout << endl;

    }

    return 0;
}
