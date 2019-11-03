/******************************************************************************
 Address class
 Implementation
 Filename: Address.cpp

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include "Address.h"

// constructors
Address::Address() {
    street = "No street";
    city = "No city";
    statezip = "No state and zip";
}      

Address::Address(string fullAddress) { 
    setAddress(fullAddress);
} 
  
// accessor methods

string Address::getFullAddress() { 
    string fullAddress = street;
    if (!city.empty()) fullAddress += ", " + city;
    if (!statezip.empty()) fullAddress += ", " + statezip;
    return fullAddress;
}

// mutator methods
void Address::setAddress(string s) { 
      
    street = "";
    city = "";
    statezip = "";
      
    // Parse the full string character by character into components
    // Requires the following comma-separated format:
    // full street address,city name,state zip
    // If no commas, put string in street field
      
    string ch, temp = "";
    for (int i=0; i<=s.size(); i++) {
        ch = s.substr(i, 1);
        if (ch == ",") {
            if (street.empty()) 
                street = temp;
            else if (city.empty())
                city = temp;
            temp = "";
        } else {
            temp += ch;
        }    
    }      
    if (street.empty()) street = temp;
    else statezip = temp;
}
