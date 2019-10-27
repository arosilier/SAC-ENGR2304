/******************************************************************************
 Dog class
 Driver program
 Filename: main-driverDog.cpp

*******************************************************************************/
#include <iostream>
#include "Dog.h"

using namespace std;

int main () {

    Dog dog1;
    dog1.print();
    
    Dog dog2("Jake");
    dog2.print();
    
    Dog dog3("Buddy", 2);
    dog3.print();

    Dog dog4("Tiger", 2.0);
    dog4.print();

    Dog dog5("Princess", 3, 2.0);
    dog5.print();

    Dog dog6("Oreo", "dalmation", 1, 10.5);
    dog6.print();

    Dog dog7("Fluffy", "chow");
    dog7.print();

    Dog dog8("Shorty", "mutt", 6);
    dog8.print();

    return 0;
}
