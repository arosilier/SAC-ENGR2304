#ifndef ADDR_H
#define ADDR_H

/******************************************************************************
 Address class
 Declaration
 Filename: Address.h

*******************************************************************************/
#include <string>

using namespace std;

class Address {

  // declaration statements for class properties
  private:
  string street;
  string city;
  string statezip;
 
  // declaration statements for the class methods
  public:
  
  // constructors
  Address();
  Address(string fullAddress);
  
  // accessor methods
  string getSteet() { return street; }
  string getCity() { return city; }
  string getStateZip() { return statezip; }
  string getFullAddress();
  
  // mutator methods
  void setAddress(string s);
  
};

#endif