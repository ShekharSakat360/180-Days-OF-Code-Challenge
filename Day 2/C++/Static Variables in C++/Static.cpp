#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Demonstration Of Static Variables" << endl;

    static int x ; //When you make a variable static you will get default value as 0
    //In normal variables when you declare a variable and when  you access it you will get a undefined behaviour
    // or garbage value
    cout << x << endl;

    //Note Static Variables are created once and it stays for lifetime of the program
    //It is used in counting how many times a function has been called 
    
     return 0;
}