/*********************************
 * Lab 02
 * Created by Masaki Takahashi
 *********************************/

#include <iostream>
using namespace std;

#include "Bushel.h"

// Main program

void main()
{ class bushel a,b,c;

// Initialize bushels

  a = bushel(3,8);
  b = bushel(2,6);

// initialize input 

  int input = 0;

// Get bushels

  cout << "Enter bushel A (apples,oranges):";
  a.get(cin);
  cout << "Enter bushel B (apples,oranges):";
  b.get(cin);


// Output bushels

  cout << "A: ";  a.put(cout);  cout << endl;
  cout << "B: ";  b.put(cout);  cout << endl;


// Bushel compare 1

  if(a==b)
    cout << "Bushel A == B" << endl;
  else
    cout << "Bushel A != B" << endl;

// Bushel compare 2

  if(a.lesser(b))
    cout << "Bushel A < B" << endl;
  else if(a.greater(b))
    cout << "Bushel A > B" << endl;
  else
    cout << "Bushel A ? B" << endl;

// ask user for input 
  cout << "Enter Total: ";
  cin >> input; 

// Bushel Compare to Int Input 
  if (a != input)
	  cout << "Bushel A != " << input << endl;
  if (a > input)
	  cout << "Bushel A > " << input << endl; 
  if (b != input)
	  cout << "Bushel B != " << input << endl;
  if (b < input)
	  cout << "Bushel B < " << input << endl;
	  }