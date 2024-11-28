/******************************************************************************

Carson Angell
Period 1
9/29/22

This program will do the following:

*******************************************************************************/
#include <iostream>// this is input/output library
#include <string>// string data type library

using namespace std;// allows less code

struct employee { //6 member values
   string firstName, lastName, phoneNumber;
   int id, age;
   float hours, totalPay; //Added for pt2
   float payRate;
};

//main function
int main()
{//open curly bracket
   //PART 1
   employee Employee1, Employee2, Employee3;

   //Intro
   cout << "Welcome to my data entry program!\n";

   //Data collection for Employee 1
   cout << "\nPlease enter the ID number for employee 1: ";
   cin >> Employee1.id;
   cout << "Please enter the first name of employee 1: ";
   cin >> Employee1.firstName;
   cout << "Pleae enter the last name of employee 1: ";
   cin >> Employee1.lastName;
   cout << "Please enter the phone number of employee 1: ";
   cin >> Employee1.phoneNumber;
   cout << "Pease enter the age of employee 1: ";
   cin >> Employee1.age;
   cout << "Please enter the pay of employee 1: ";
   cin >> Employee1.payRate;
   cout << "Please enter the hours worked for employee 1: "; //Added for pt2
   cin >> Employee1.hours; //Added for pt2
   //Calculate total pay for the week
   Employee1.totalPay = Employee1.hours * Employee1.payRate; //Added for pt2


   //Data collection for Employee 2
   cout << "\nPlease enter the ID number for employee 2: ";
   cin >> Employee2.id;
   cout << "Please enter the first name of employee 2: ";
   cin >> Employee2.firstName;
   cout << "Pleae enter the last name of employee 2: ";
   cin >> Employee2.lastName;
   cout << "Please enter the phone number of employee 2: ";
   cin >> Employee2.phoneNumber;
   cout << "Please enter the age of employee 2: ";
   cin >> Employee2.age;
   cout << "Please enter the pay of employee 2: ";
   cin >> Employee2.payRate;
   cout << "Please enter the hours worked for employee 2: "; //Added for pt2
   cin >> Employee2.hours; //Added for pt2
   //Calculate total pay for the week
   Employee2.totalPay = Employee2.hours * Employee2.payRate; //Added for pt2

   //Data collection for Employee 3
   cout << "\nPlease enter the ID number for employee 3: ";
   cin >> Employee3.id;
   cout << "Please enter the first name of employee 3: ";
   cin >> Employee3.firstName;
   cout << "Pleae enter the last name of employee 3: ";
   cin >> Employee3.lastName;
   cout << "Please enter the phone number of employee 3: ";
   cin >> Employee3.phoneNumber;
   cout << "Please enter the age of employee 3: ";
   cin >> Employee3.age;
   cout << "Please enter the pay of employee 3: ";
   cin >> Employee3.payRate;
   cout << "Please enter the hours worked for employee 3: "; //Added for pt2
   cin >> Employee3.hours; //Added for pt2
   //Calculate total pay for the week
   Employee3.totalPay = Employee3.hours * Employee3.payRate; //Added for pt2

   //Displaying data
   cout << "\n\nThank you! Here is the data you have entered: \n";

   //Employee 1
   cout << "\nEmployee: " << Employee1.id << endl;
   cout << "Name: " << Employee1.firstName << " " << Employee1.lastName << endl;
   cout << "Age: " << Employee1.age << endl;
   cout << "Phone Number: " << Employee1.phoneNumber << endl;
   cout << "Pay rate: $" << Employee1.payRate << endl;
   cout << "Hours worked: " << Employee1.hours << endl; //Added for pt2
   cout << "Total pay for the week: $" << Employee1.totalPay << endl; //Added for pt2

   //Employee 2
   cout << "\nEmployee: " << Employee2.id << endl;
   cout << "Name: " << Employee2.firstName << " " << Employee2.lastName << endl;
   cout << "Age: " << Employee2.age << endl;
   cout << "Phone Number: " << Employee2.phoneNumber << endl;
   cout << "Pay rate: $" << Employee2.payRate << endl;
   cout << "Hours worked: " << Employee2.hours << endl; //Added for pt2
   cout << "Total pay for the week: $" << Employee2.totalPay << endl; //Added for pt2
   
   //Employee 3
   cout << "\nEmployee: " << Employee3.id << endl;
   cout << "Name: " << Employee3.firstName << " " << Employee3.lastName << endl;
   cout << "Age: " << Employee3.age << endl;
   cout << "Phone Number: " << Employee3.phoneNumber << endl;
   cout << "Pay rate: $" << Employee3.payRate << endl;
   cout << "Hours worked: " << Employee3.hours << endl; //Added for pt2
   cout << "Total pay for the week: $" << Employee3.totalPay << endl; //Added for pt2
   

   return 0;
}//closed curly bracket

