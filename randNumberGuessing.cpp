/*************************************************************************
Name
Programming 1
Date
This program will use random numbers, loops, selection structures and functions 
in a number guessing game
There are 2 parts to this assignment - Do both parts for credit
*************************************************************************/

#include <iostream>//included library
#include <cstdlib>
#include <ctime>

using namespace std;

//add libraries for random number functions and time here

//prototype function here
int findNumber(int, int);

int main()
{
   srand(time(0)); //seed the random number
/*
   //PART 1
   //create random number and guessing storage variables
   int num1 = 1 + rand() % 10;
   int guess1 = 0;
   cout << '~' << num1 << '~';

   //Prompting message
   cout << "I am thinking of a number between 1 and 10.  Enter a guess: ";

   //sentinal - while guess is not equal to random number
   while (guess1 != num1){
      //get user input guess
      cin >> guess1;
      //if guess is not equal to random number -> prompt
      if (guess1 != num1){
         cout << "Sorry that is not the number, guess again: ";
      } else { //if guess is equal to random number -> prompt
         cout << "You did it!";
      }
   }
*/
/*
   //PART 2
   //create random number, guessing storage and number of guesses variables
   int num2 = 1 + rand() % 1000;
   int guess2 = 0;
   int guessCount1 = 0;
   cout << '~' << num2 << '~';

   //Prompting message
   cout << "I am thinking of a number between 1 and 1000.  Enter a guess: ";

   //sentinal - while guess is not equal to random number
   while (guess2 != num2){
      //Update guess count
      guessCount1++;
      //get user input guess
      cin >> guess2;
      //if guess is bigger than random number -> prompt
      if (guess2 > num2){
         cout << "Number is too high! Try again: ";
      } else if (guess2 < num2){ //if guess is less than random number -> prompt
         cout << "Number is too low! Try again: ";
      } else {
         if (guessCount1 < 10){
            cout << "Nice job, you are either lucky or know the secret.";
         } else if (guessCount1 > 10){
            cout << "I know you could do better.";
         } else {
            cout << "You did it! The answer was: " << num2;
         }
      }
   }
*/
   //PART 3
   int num3 = 1 + rand() % 1000;
   int guess3 = 0;
   int guessCount2 = 0;
   cout << '~' << num3 << '~';

   //Prompting message
   cout << "I am thinking of a number between 1 and 1000.  Enter a guess: ";

   //sentinal - while guess is not equal to random number
   while (guess3 != num3){
      //Update guess count
      guessCount2++;
      //get user input guess
      cin >> guess3;
      //if guess is bigger than random number -> prompt
      if (findNumber(guess3,num3) == 2){
         cout << "Number is too high! Try again: ";
      } else if (findNumber(guess3,num3) == 3){ //if guess is less than random number -> prompt
         cout << "Number is too low! Try again: ";
      } else {
         if (guessCount2 < 10){
            cout << "Nice job, you are either lucky or know the secret.";
         } else if (guessCount2 > 10){
            cout << "I know you could do better.";
         } else {
            cout << "You did it! The answer was: " << num3;
         }
      }
   }
   return 0;

}
//function for part 3 will be written here
//function will receive the guess and the correct number
//if the guess is lower than the number it returns 2
//if the guess is higher than the number it returns 3
//if they are equal returns 1
int findNumber(int G, int N){
   if (G == N) return 1;
   else if (G > N) return 2;
   else return 3;
   return 0;
}
