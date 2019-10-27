/******************************************************************************
 Dog class
 Implementation
 Filename: Dog.cpp

*******************************************************************************/
#include <iostream>
#include "Dog.h"  // must be included to use Employee class

using namespace std;

Dog::Dog() {
    name = "No name";
    breed = "No breed";
    age = 0;
    weight = 0;
}

Dog::Dog(string n) {
    name = n;
    breed = "No breed";
    age = 0;
    weight = 0;    
}

Dog::Dog(string n, string b) {
    name = n;
    breed = b;
    age = 0;
    weight = 0;     
}

Dog::Dog(string n, string b, int a) {
    name = n;
    breed = b;
    age = a;
    weight = 0; 
}

Dog::Dog(string n, string b, int a, double w) {
    name = n;
    breed = b;
    age = a;
    weight = w;     
}

Dog::Dog(string n, int a) {
    name = n;
    breed = "No breed";
    age = a;
    weight = 0;     
}

Dog::Dog(string n, double w) {
    name = n;
    breed = "No breed";
    age = 0;
    weight = 2;     
}

Dog::Dog(string n, int a, double w) {
    name = n;
    breed = "No breed";
    age = a;
    weight = w;     
}
  
void Dog::print() {
    cout << "Details about this dog: " << endl;
    cout << "\tName: " << name << endl;
    cout << "\tBreed: " << breed << endl;
    cout << "\tAge: " << age << endl;
    cout << "\tWeight: " << weight << endl;
    cout << endl;
}