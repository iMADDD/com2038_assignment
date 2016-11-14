// reading a text file
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <boost/tokenizer.hpp>
#include <iomanip>
using namespace std;
using namespace boost;

int main () {
	
  string name;
  string breed;
  string colour;
  string dad;
  string mom;
  
  
 
  ifstream myfile("test.csv");
  
  cout << "Name    |Breed   |Colour  |Dad     |Mom    " << endl;
  
  if (myfile.is_open()) 
  {
	  cout  << left;
	  
	  while (getline(myfile, name, ',')) {
		  cout << setw(8) << name << "|";
	  }
	  
	  while (getline(myfile, breed, ',')) {
		  cout << setw(8) << breed << "|";
	  }
	  
	  while (getline(myfile, colour, ',')) {
		  cout << setw(8) << colour << "|";
	  }
	  
	  while (getline(myfile, dad, ',')) {
		  if (dad.empty()) {
			  cout << setw(8) << "N/A" << "|";
		  } else {
			  cout << setw(8) << dad << "|";
		  }
	  }
	  
	  while (getline(myfile, mom)) {
		  if (mom.empty()) {
			  cout << setw(8) << "N/A" << "|";
		  } else {
			  cout << setw(8) << mom << "|";
		  }
	  }
  } 
  
  else cout << "Unable to open file";
  
  return 0;
  
  
  
 /**
  string data("test.csv");
  
  ifstream in(data.c_str());
  
  if (!in.is_open()) return 1;
  
  typedef tokenizer< escaped_list_separator<char> > Tokenizer;
  vector< string > vec;
  string line;
  
  cout << "Name | Breed | Colour | Dad | Mom" << endl;
  
  while (getline(in, line)) {
	  Tokenizer tok(line);
	  vec.assign(tok.begin(), tok.end());
	  
	 
	  
	  copy(vec.begin(), vec.end(), ostream_iterator<string>(cout, " "));
	  
	  cout << "\n-------------------------" << endl;
  }

  
  */

}