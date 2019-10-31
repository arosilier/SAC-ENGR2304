/*----------------------------------------------------*/
/* Name: Prof Rosilier                                */
/* Class: ENGR-2304                                   */
/* Week 10 Video Demo - Complex number class          */
/*----------------------------------------------------*/

// Using directive
using namespace std;

class ComplexNum {
   private: 
   int real;
   int imaginary;
   
   public:
   
   // constructors
   ComplexNum();
   ComplexNum(int r, int i);
   
   // operators
   ComplexNum operator + (ComplexNum& right);
   ComplexNum operator - (ComplexNum& right);
   
   // accessors
   int getReal() const { return real; };
   int getImaginary() const { return imaginary; };
   
   // mutators
   void setReal(int r);
   void setImaginary(int i);
   
   // additional methods
   void print();
  
};