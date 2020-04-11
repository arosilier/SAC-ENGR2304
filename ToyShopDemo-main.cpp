/*----------------------------------------------------*/
/* Name: Prof Rosilier                                */
/* Class: ENGR-2304                                   */
/* Week 11 Video Demo - Ball class                    */
/*----------------------------------------------------*/

// Preprocessor directives
#include <iostream>
#include "Ball.h"  // must be included to use Ball class
#include "Location.h" // must be inculded to use Location class

// Using directive
using namespace std;

/* Here is the example output I want to recreate:

Welcome to my toy shop! I am demonstrating the use of the class ball with this driver program.

Test 1: Use the default constructor
No Name says... 
I am a ball with a diameter of 0 inches. 
I am unknown in color and my material is unknown.
My price is $0.00.
I am located in aisle X on shelf 0.

Test 2: Use the parameterized constructor
Ball 2 says... 
I am a ball with a diameter of 4 inches. 
I am blue in color and my material is rubber.
My price is $0.99.
I am located in aisle A on shelf 4.

Test 3: Use mutator and accessor methods
Ball 1's diameter is now 2 inches.
Ball 1's color is now green.
Ball 1's material is now plastic.
Ball 1's price is now $1.50.
Ball 1's location is now aisle B on shelf 12.

Test 4: Test the < operator
Ball 1 < Ball 2 is true
Ball 2 < Ball 1 is false

*/


// Main function
int main()
{
    cout << "Welcome to my toy shop! I am demonstrating the use of the class ball with this driver program." << endl;
    

    cout << "\nTest 1: Use the default constructor" << endl;
    Ball ball1;
    ball1.display();
    
    cout << "\nTest 2: Use the parameterized constructor" << endl;
    Location location2('A', 4);
    Ball ball2("Ball 2", 0.99, location2, 4, "blue", "rubber");
    ball2.display();
    
    cout << "\nTest 3: Use mutator and accessor methods" << endl;
    ball1.setName("Ball 1");
    ball1.setDiameter(2);
    ball1.setColor("green");
    ball1.setMaterial("plastic");
    ball1.setPrice(1.5);
    Location location1('B', 12);
    ball1.setLocation(location1);
    ball1.display();

    cout << "\nTest 4: Test the < operator" << endl;
    if (ball1 < ball2) 
        cout << "Ball 1 < Ball 2 is true" << endl;
    else 
        cout << "Ball 1 < Ball 2 is false" << endl;    
        
    if (ball2 < ball1) 
        cout << "Ball 2 < Ball 1 is true" << endl;
    else 
        cout << "Ball 2 < Ball 1 is false" << endl;    
     
    return 1;
}

