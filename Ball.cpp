/*----------------------------------------------------*/
/* Name: Prof Rosilier                                */
/* Class: ENGR-2304                                   */
/* Week 11 Video Demo - Ball class                    */
/*----------------------------------------------------*/

// Preprocessor directives
#include <iostream>  // Required for cout
#include "Ball.h"  // must be included to use Ball class

// Using directive
using namespace std;

// constructors
Ball::Ball() : location() {
    
    name = "No Name";
    price = 0;
    color = "unknown";
    material = "unknown";
    diameter = 0;
    
}

Ball::Ball(string n, float p, Location l, float d, string c, string m) : location(l) {
    
    name = n;
    price = p;
    color = c;
    material = m;
    diameter = d;
    
}
  
// operators
bool Ball::operator <  (Ball& right) {
    return diameter < right.diameter;
}

bool Ball::operator > (Ball& right) {
    return diameter > right. diameter;
} 
  
// mutators
void Ball::setName(string n) {
    name = n;
}

void Ball::setPrice(float p) {
    price = p;
}

void Ball::setLocation(Location l) {
    location = l;
}

void Ball::setDiameter(float d) {
    diameter = d;
}

void Ball::setMaterial(string m) {
    material = m;
}

void Ball::setColor(string c) {
    
}
  
// other methods
void Ball::display() {
    
    cout << name << " says..." << endl;
    cout << "I am a ball with a diameter of " << diameter<< " inches." << endl;
    cout << "I am  " << color<< " in color and my material is " << material << endl;
    cout << "My price is $" << price << endl;
    cout << "I am located in aisle " << location.getAisle() << " and shelf " << location.getShelf() << "." << endl;

}