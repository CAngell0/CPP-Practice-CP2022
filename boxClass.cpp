#include <iostream>
using namespace std;

//I have set up the class and member function names
//you will need to complete the functions!!!.

//Hint: there is only one line of code for each function.
//Remember that the data in the class is private so we use the functions to access
//and manipulate the data
class Box {
//public member functions
public:
    //will set the length of the box after receiving it from the main -
    //You need to set all data members default values to 1.0
    Box(){//constructor all values set 1.0 default value
        length = 1;
        height = 1;
        width = 1;
    }
    //setLength() - This function will set the length of the box after receiving it from main
    void setLength(double l) {
        length = l;
    }
    //setWidth()You do this -will set the width of the box after receiving it from main
    void setWidth(double w){
      width = w;
    }
    //setHeight()You do this -will set the height of the box after receiving it from main
    void setHeight(double h){
      height = h;
    }
    //getLength()You do this -will return the value of the private length variable
    double getLength(){
        return length;
    }
    //getWidth()You do this -will return the value of the private width variable
    double getWidth(){
      return width;
    }
    //getHeight()You do this -will return the value of the private height variable
    double getHeight(){
      return height;
    }
    
    //printVolume()You do this -will return the resulting volume volume = l * H * w
    double printVolume(){
      return length * width * height;
    }
    //printArea() will return the area of the box  2(h*w) + 2(h*l) + 2(w*l)
    double printArea(){
      return 2 * (height * width) + 2 * (height * length) + 2 * (width * length);
    }
    //no need to do anything to these
    private:
        double length;
        double width;
        double height;

};

//You will need to complete the code where indicated.
int main()
{
//now create an instance of the Box class
Box box1;

//create 3 local variables of type double to hold and pass
//values that the user enters for length, height, and width.  I did the first you will need to add variable for width and height
double boxLength;
double boxHeight;
double boxWidth;
cout << endl;
//allow the user to input the length, height and width and assign them to the variables you created above
cout << "Welcome to my volume calculator:" << endl;

//prompt the user to enter the length of the box and store it in the local variable for the length
cout << "Please enter the length of the box: " << endl;
cin >> boxLength;

//prompt the user to enter the width of the box and store it in the local variable for the width
cout << "Please enter the height of the box: " << endl;
cin >> boxHeight;

//prompt the user to enter the height of the box and store it in the local variable for the height
cout << "Please enter the width of the box: " << endl;
cin >> boxWidth;

//In this section do the following:
//assign the values you received from the user above to the data in the class using the set member functions
//I did the first one for you assuming my local variable was boxLength and the instance of my box class was called box1
//You do the other 2
//set length using the setLength() function of the class
box1.setLength(boxLength);
//You do this -set width using the setWidth() function of the class
box1.setWidth(boxWidth);
 

//You do this -set height using the setHeight() function of the class
box1.setHeight(boxHeight);

//display the values of the data you have input using the get member functions
//I did the first one for you - You do the other 2
//display the length using the getLength() function of the class
cout << "The length you entered for the box length was :" << box1.getLength() << endl;


//You do this - display the width using the getWidth() function of the class
cout << "The height you entered for the box height was :" << box1.getHeight() << endl;
//You do this - display the height using the getHeight() function of the class
cout << "The width you entered for the box width was :" << box1.getWidth() << endl;
 

//You do this - display the volume of the box using the printVolume() member function
cout << "The volume of he box was: " << box1.printVolume() << endl;
//You do this - display the area of the box using the printArea() member function
cout << "The are of the box was: " << box1.printArea() << endl;
return 0;

}
