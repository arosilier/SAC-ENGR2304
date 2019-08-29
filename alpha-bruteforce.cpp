// ENGR 23004 - Class Example 
// Week 5 - Streams & File I/O
//
// alpha-bruteforce.c
// This program will get two letters from the user and then put them into
// alphabetical order using a series of comparisons. This is the brute
// force method.

#include <iostream>

using namespace std;

int main()
{   
   /*  Declare variables.  */  
   char letter1, letter2;
   int value1, value2;


   /* Get two characters from the user */
   cout << "Please enter two characters separated by spaces: ";
   cin >> letter1 >> letter2;
   
   if (letter1 == lettter2) {
       cout << "The letters are the same."
   } else { 

     /* Put the letters in order based on the alphabet */
     switch (letter1) {
        case 'a':
        case 'A':
        
          switch (letter2) {
              default:
                cout << "Alphabetical order is: " << letter1 << letter2;
                break;
          }
          break;
        
        case 'b':
        case 'B':
        
          switch (letter2) {
              case 'a':
              case 'A':
                cout << "Alphabetical order is: " << letter2 << letter1;
                break;
              default:
                cout << "Alphabetical order is: " << letter1 << letter2;
                break;
          }
          break;
        
        case 'c':
        case 'C':
        
          switch (letter2) {
              case 'a':
              case 'A':
              case 'b':
              case 'B':
                cout << "Alphabetical order is: " << letter2 << letter1;
                break;
              default:
                cout << "Alphabetical order is: " << letter1 << letter2;
                break;
          }
          break;

        case 'd':
        case 'D':
        
          switch (letter2) {
              case 'a':
              case 'A':
              case 'b':
              case 'B':
              case 'c':
              case 'C':
                cout << "Alphabetical order is: " << letter2 << letter1;
                break;
              default:
                cout << "Alphabetical order is: " << letter1 << letter2;
                break;
          }
          break;

        // and so on for all letters up to Z....
      } 
    }

   /*  Exit program.  */   
   return 0;
}
