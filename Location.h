/*----------------------------------------------------*/
/* Name: Prof Rosilier                                */
/* Class: ENGR-2304                                   */
/* Week 11 Video Demo - Location class                */
/*----------------------------------------------------*/

/*We use the following compiler directives to avoid */
/*including the Card.h file muliple times. */
/*It is a good idea to always use these directives */
/*in custom header files. */
#ifndef LOCATION_H
#define LOCATION_H

// Using directive
using namespace std;

class Location {
 
  // declaration statements for class properties
  private:
  
  char aisle;
  int shelf;
  
   // declaration statements for the class methods
  public:
  
  // constructors
  Location() {
      aisle = 'X';
      shelf = 0;
  }
  
  Location(char a, int s) {
      aisle = a;
      shelf = s;
  }
  
  // accessors
  char getAisle() const { return aisle; }
  int getShelf() const { return shelf; }

  // mutators
  void setAisle(char a) { aisle = a; }
  void setShelf(int s) { shelf = s; }
 
  // other methods
  void display() {
      cout << "Aisle " << aisle << endl;
      cout << "Shelf " << shelf << endl;
  }
    
};

#endif //end compiler directive ifndef