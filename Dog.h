/******************************************************************************
 Dog class
 Declaration
 Filename: Dog.h

*******************************************************************************/
#include <string>

using namespace std;

class Dog
{
  // declaration statements for class properties
  private:
  string name;
  string breed;
  int age;
  double weight;

  // declaration statements for the class methods
  public:
  Dog();
  Dog(string n);
  Dog(string n, string b);
  Dog(string n, string b, int a);
  Dog(string n, string b, int a, double w);
  Dog(string n, int a);
  Dog(string n, double w);
  Dog(string n, int a, double w);
  
  void print();

};