/******************************************************************************

Carson Angell
Period 1
12/6/22

Notes
-----

- Struct (Record) is short for structures.
- So far we have:

int a = 7;
char letter = 'y';
float num = 3.56;

- What if need something that has all these things? -> We create an object.
- Objects are backbone of Object Orientated programming.
- Each record is a collection of fields.
- C++ refers to records as structs
- Fields of a struct are called members
- Struct syntax:

struct type_name {
   member_type1 member_name1;
   member_type2 member_name2;
   member_type3 member_name3;
};
Example:
struct Student {
   string name;
   string id;     <-- Above main!
   float gpa;
};

int main(){
   Student Carson;   <-- 'Carson' variable is now instance of structure type 'Student'
   return 0;
}


This program will do the following:

*******************************************************************************/
#include <iostream> // this is input/output library
#include <string>   // string library

using namespace std; // allows less code

struct studentRec
{
   string name; // 3 data members
   string id;
   float gpa;
};

struct personRec
{
   string firstName; // 3 data members
   string lastName;
   int age;
};

// main function
int main()
{ // open curly bracket
   /*
    studentRec theStudent;

    cout << "Please enter the student name :";
    getline(cin,theStudent.name);

    cout << "\nPlease enter the student ID :";
    cin >> theStudent.id;

    cout << "\nPlease enter the student GPA :";
    cin >> theStudent.gpa;

    cout << "The student name is " << theStudent.name;
    cout << "\nThe student ID is " << theStudent.id;
    cout << "\nThe student GPA is " << theStudent.gpa;
   */
   personRec thePerson, P1;
   
   /*
   cout << "Enter first name: ";
   cin >> thePerson.firstName;

   cout << "Enter last name: ";
   cin >> thePerson.lastName;

   cout << "Enter age: ";
   cin >> thePerson.age;

   cout << "\n\nHello " << thePerson.firstName << " " << thePerson.lastName << ". How are you?\n";
   cout << "\nCongratulations on reaching the age of " << thePerson.age << ".\n";
   */

   cout << "Enter another first name: ";
   cin >> P1.firstName;

   cout << "Enter another last name: ";
   cin >> P1.lastName;
   
   cout << "Enter another age: ";
   cin >> P1.age;

   cout << "\n\nHello " << P1.firstName << " " << P1.lastName << ". How are you?\n";
   cout << "\nCongratulations on reaching the age of " << P1.age << ".\n";
   return 0;
} // closed curly bracket
