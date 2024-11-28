/******************************************************************************

Carson Angell
Period 1
12/16/22

This program will do the following:
Intro to pointetrs and address of operations

*******************************************************************************/
#include <iostream> // this is input/output library

using namespace std; // allows less code

// main function
int main()
{ // open curly bracket
   int x = 2, y = 3, z;//local int variables
   int *q, *p; //in pointers
   p = &x;//sets to address of x
   q = &y;//sets to address of y

   cout << "The address of x = " << &x << " The values of x = " << x << endl;
   cout << "The value of p = " << p << " The value of *p = " << *p << endl;
   
   cout << "The address of y = " << &y << " The values of y = " << y << endl;
   cout << "The value of q = " << q << " The value of *q = " << *q << endl << endl;

   x = 12, y = 13, z = 14;
   int *r = &z;

   cout << "The address of y = " << &y << " The values of y = " << y << endl;
   cout << "The value of q = " << q << " The value of *q = " << *q << endl;
   cout << "The address of z = " << &z << " The values of z = " << z << endl;
   cout << "The value of r = " << r << " The value of *r = " << *r << endl;
   return 0;
} // closed curly bracket
