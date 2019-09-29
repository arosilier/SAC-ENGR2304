// ENGR 2304 - Class Example 
// Week 6 - Functions
//
// function-rightTriangles.cpp
// This program will display a table of different right triangle 
// dimensions by using a function to calculate the hypotenuse
// for different combinations of side measurements

#include <iostream> // required to read/write standard input and output
#include <iomanip>  // required for manipulators
#include <cmath>    // required to use the squareroot function

using namespace std;

// function prototypes
float findHypotenuse(float a, float b);

// main function
int main() {

    const int MAX=3;    // controls the max length for each side

    float side1, side2, hypotenuse;
    int i, j;
    
    // set precision to 2 for cout 
    cout << fixed << setprecision(2);
    
    // create a table of right triangles with each side ranging from
    // 1 to 3 centimeters
    
    cout << "Table of right triangle dimensions\n" << endl;
    cout << "Side 1\tSide 2\tHypotenuse" << endl;
    
    for (i=1; i <= MAX; i++) {     // side 1 goes from 1 to MAX 
        
        for (j=1; j<= MAX; j++) {  // side 2 goes from 1 to MAX 
        
            cout << i << "\t" << j;
            hypotenuse = findHypotenuse(i, j);
            cout << "\t" << hypotenuse << endl;   
        }
        
    }
    cout << endl;

}

// ------------------------------------------------------------------
// function: findHypotenuse
// job: calculate the length of the hypotenuse of a right triangles
// given the length of two sides
// input: 2 floats for each of the two sides of a right triangles
// output: float for the length of the hyptoenuse
// ------------------------------------------------------------------
float findHypotenuse(float a, float b) {
    
    float c;
    
    c = sqrt(a*a + b*b);
    
    return c;
}
