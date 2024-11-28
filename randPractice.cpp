/******************************************************************************

Carson Angell
Period 1
11/17/22

This program will do the following:

*******************************************************************************/
#include <iostream> // this is input/output library
#include <cstdlib>  // rand() and srand()
#include <ctime>    // time()

using namespace std; // allows less code

// main function
int main()
{  /*                // open curly bracket
   srand(time(0)); // seed the random number from the clock
   int num;
   cout << "Modulus operator 11 % 4\n"; // using modulus operator
   num = 11 % 4;
   cout << num << endl;
   // demo modulus
   cout << "modulus operator using 5 as divisor\n";
   num = 10 % 5;
   cout << num << endl;
   num = 11 % 5;
   cout << num << endl;
   num = 12 % 5;
   cout << num << endl;
   num = 13 % 5;
   cout << num << endl;
   num = 14 % 5;
   cout << num << endl;
   num = 15 % 5;
   cout << num << endl;
   num = 16 % 5;
   cout << num << endl;

   // create a random number
   num = rand();
   cout << endl
        << "random number = " << num;

   // create a random number with modulus
   num = rand() % 100;
   cout << endl
        << "random number using modulus operator = " << num;
*/
   //flip a coin 1000 times
   int heads = 0, tails = 0;

   for (int i = 0; i < 1000; i++){
      int flip = rand() % 2;//possible 0 or 1
      if (flip == 0) heads++;//stores result
      else tails++;
   }
   //display results
   cout << "I will flip a coin 1000 times and tell you the results" << endl;
   cout << "Heads = " << heads << endl;
   cout << "Tails = " << tails << endl;
   //print 20 random numbers down the left side of the screen 1 - 200
   cout << "20 random numbers on the left side of the screen 1 - 200" << endl;
   for (int i = 0; i < 20; i++){
      cout << 1 + (rand() % 200) << endl;
   }
   return 0;
} // closed curly bracket
