// ENGR 23004 - Class Example 
// Week 5 - Streams & File I/O
//
// alpha-easye.c
// This program will get two letters from the user and then put them into
// alphabetical by comparing their integer values. This is the easy method.

#include <iostream>

using namespace std;

int main()
{   
   /*  Declare variables.  */  
   char letter1, letter2;

   /* Get two characters from the user */
   cout << "Please enter two characters separated by spaces: ";
   cin >> letter1 >> letter2;
   
   if (letter1 == letter2) {
       cout << "The letters are the same.";
   } else if ((int) letter1 < (int) letter2) {
       cout << "Alphabetical order is: " << letter1 << letter2;
   } else {
       cout << "Alphabetical order is: " << letter2 << letter1;
   }

   /*  Exit program.  */   
   return 0;
}
