// ENGR 23004 - Class Example 
// Week 5 - Streams & File I/O
//
// checkcase.c
// This program will get a letter from the user and then print whether
// the letter is uppercase or lowercase

#include <iostream>

using namespace std;

int main()
{   
   /*  Declare variables.  */  
   char letter;
   int value;

   /* Get a character from the user */
   cout << "Please enter a character: ";
   cin >> letter;
   
   /* Convert to integer value of character & save */
   value = (int) letter;

   /* Check value against ranges of upper- versus lowercase */
   if (value >= 65 && value <= 90) {
       cout << "This is an uppercase letter.";
   } else if (value >= 97 && value <= 122) {
       cout << "This is a lowercase letter.";  
   } else {
       cout << "This isn't a letter at all!";
   }

   /*  Exit program.  */   
   return 0;
}
