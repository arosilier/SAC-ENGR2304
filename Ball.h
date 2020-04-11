/*----------------------------------------------------*/
/* Name: Prof Rosilier                                */
/* Class: ENGR-2304                                   */
/* Week 11 Video Demo - Ball class                    */
/*----------------------------------------------------*/

/*We use the following compiler directives to avoid */
/*including the Card.h file muliple times. */
/*It is a good idea to always use these directives */
/*in custom header files. */
#ifndef BALL_H
#define BALL_H

#include "Location.h" // must be inculded to use Location class

// Using directive
using namespace std;

class Ball {
 
  // declaration statements for class properties
  private:
  
  // all toys have these...
  string name;
  float price;
  Location location;
  
  // specific to balls...
  float diameter;
  string color;
  string material;

  // declaration statements for the class methods
  public:
  
  // constructors
  Ball();
  Ball(string n, float p, Location l, float d, string c, string m);
  
  // operators
  bool operator <  (Ball& right);
  bool operator > (Ball& right);
  
  // accessors
  string getName() const { return name; }
  float getPrice() const { return price; }
  Location getLocation() const { return location; }
  float getDiameter() const { return diameter; }
  string getMaterial() const { return material; }
  string getColor() const { return color; }
  
  // mutators
  void setName(string n);
  void setPrice(float p);
  void setLocation(Location l);
  void setDiameter(float d);
  void setMaterial(string m);
  void setColor(string c);
  
  // other methods
  void display();
    
};

#endif //end compiler directive ifndef