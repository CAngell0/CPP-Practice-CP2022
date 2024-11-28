#include <iostream> //Input/Output stream library
#include <cstdlib> //Random number library
#include <ctime> //Computer time library

using namespace std;

//prototypes
void correctFeedback();
void wrongFeedback();


int main(){
   srand(time(0));

   //Intro to program
   cout << "Welcome to my multiplication table program!\n";
   //Variable for user input
   int input = 0;
   //Varaible to store factors for equation
   int factor1 = 1;
   int factor2 = 1;
   
   bool sentCondition = true;

   //Sentinal
   do {
      //Get mulitplication factors for the equation
      factor1 = rand() % 10;
      factor2 = rand() % 10;
      do {
         //Prompt for product of equation
         cout << "What is " << factor1 << " X " << factor2 << ": ";
         cin >> input;
         //Prompt to try again and display whether the asnwer was correct
         if (input == factor1 * factor2) {
            correctFeedback();
            cout << " Would you like to try again? (0 for NO)  ";
            cin >> input;
            if (input == 0) sentCondition = false;
            break;
         } else {
            wrongFeedback();
            cout << " Please try again.\n";
         }
      }
      while(input != factor1 * factor2);
   }
   while (sentCondition);
   
   return 0;
}

//Creates a response for correct answers
void correctFeedback(){
   const int num = rand() % 5;
   switch (num){
      case 0: 
         cout << "\nGreat job!";
         break;
      case 1: 
         cout << "\nWay to go!";
         break;
      case 2: 
         cout << "\nYou did it!";
         break;
      case 3: 
         cout << "\nYou're amazing!";
         break;
      case 4: 
         cout << "\nNice Job!";
         break;
   }
}
//Creates a response for correct answers
void wrongFeedback(){
   const int num = rand() % 5;
   switch (num){
      case 0: 
         cout << "\nSo close!";
         break;
      case 1: 
         cout << "\nKeep trying!";
         break;
      case 2: 
         cout << "\nGive it another shot!";
         break;
      case 3: 
         cout << "\nDon't give up!";
         break;
      case 4: 
         cout << "\nYou're almost there!";
         break;
   }
}
