#include <iostream>//iostream stands for stands standard input output stream  header file 
using namespace std;
//Namespaces are used to divide your large software into 
//multiple logical group once such existing logical group is std
//It contains all standard libraries  funtion and typefB
//cout is part of std when we say using namespace std this means 
//can you use the namespace std for all std:: cout or std:: cin
//the program automatically uses namespace std for all cin and cout



//We have included the iostream header file in order to print
//something to the screen or take input from the user
//Here cout is used to print something to the screen

//int is the status what is to be returned int means return an integer value
//We need to write int before main to written the exit status
int main() //This is where the execution of program begin by main()
{
    cout << "Hello World" << endl; //cout is an object of ostream classf
    //Output stream class and cout is used to print something to screen

    return 0;//return 0 mean  succesfull execution and it returns value to the OS
}//Function block begin with curly braces and ends with curly brace