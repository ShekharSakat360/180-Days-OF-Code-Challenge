#include <iostream>
using namespace std;

int main()
{
    //Trick Question is Asked in Interview What will be value of sizeof(x++) and What is value of x?

    //Since sizeof(x++) sizeof Operator is evaluated at compile time
    //So whatever expression you pass inside of size of Operator sizeof()
    //The Expression is Evaluated at compile time so sizeof(x++) x++ is evaluateed
    //at compile time and not executed at runtime and hence x++ never happens
    //So if you print the value of this Particular expression
    //sizeof(x++) ? it is 4
    //Because x++ never happens because sizeof() operator evaluatees
    //the expression at compile time but never executes expression at runtime
    //Size Of Operator does its work it return the number of Bytes
    //Hence You get the output 4
    //And if you print the value you will get value of x 10
    //Size of Operator is compile time operator

    //Size Of Operator works for arrays and pointer and non primitive datatypes
    //size of operator is the way to know how many element array has

    int x  = 10;
    cout << sizeof(x++);
    return 0;
}