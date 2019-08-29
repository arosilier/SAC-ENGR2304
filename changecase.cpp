// ENGR 23004 - Class Example 
// Week 5 - Streams & File I/O
//
// changecase.c
// This program will get a lowercase letter from the user and then 
// change it to upper case using the ASCII value

#include <iostream>

using namespace std;

int main()
{   
   /*  Declare variables.  */  
   char letter;
   int value;

   /* Get a character from the user */
   cout << "Please enter a lowercase character: ";
   cin >> letter;
   
   /* Convert to integer value of character & save */
   value = (int) letter;

   /* Check value against ranges of upper- versus lowercase */
   if (!(value >= 97 && value <= 122)) {
       cout << "This is NOT a lowercase letter. Exiting now...";  
       exit(1);
   } else {
       value -= 32;
   }

   /* Convert back to character */
   letter = (char) value;
   
   /* Print the uppercase version */
   cout << "The uppercase version is: " << letter;

   /*  Exit program.  */   
   return 0;
}
