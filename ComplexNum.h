/*----------------------------------------------------*/
/* Name: Prof Rosilier                                */
/* Class: ENGR-2304                                   */
/* Week 10 Video Demo - Complex number class          */
/*----------------------------------------------------*/

// Using directive
using namespace std;

class ComplexNum {
 
  // declaration statements for class properties
  private:
  int real;
  int imaginary;

  // declaration statements for the class methods
  public:
  
  // constructors
  ComplexNum();
  ComplexNum(int r, int i);
  
  // operators
  ComplexNum operator + (ComplexNum& right);
  ComplexNum operator - (ComplexNum& right);
  
  // accessors
  int getReal() const;
  int getImaginary() const;
  
  // mutators
  void setReal(int r);
  void setImaginary(int i);
  
  // other methods
  void print();
    
};