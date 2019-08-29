// ENGR 23004 - Class Example 
// Week 5 - Streams & File I/O
//
// files-openclose.c
// This program will attempt to open both an input and ooutput file and will
// print an error message if it is unsuccessful

#include <iostream> // required to read/write standard input and output
#include <fstream> // required to read/write data files

using namespace std;

int main() {

  // Define file streams for input and output
  ifstream fin("inputdata.txt");
  ofstream fout("outputdata.txt");
  
  // Try and open the data files, report any errors
  if (fin.fail()) {
      cerr << "ERROR: Could not open the file inputdata.txt\n";
      exit(1);
  }
  if (fout.fail()) {
      cerr << "ERROR: Could not open the file outputdata.txt\n";
      exit(1);
  }
  
  cout << "Success! Was able to open both files." << endl;

}
