#include <iostream>
using namespace std;


int x; //Here if i am not initalising any value for global
//Variable I may get undefined value or garbage value
//HEre we are getting 0

//IF it is int ->0
//float ->0.0
//char -0
//boolean - 0
int main()
{
    
    cout << "Demonstration Of Global Variables " << endl;
    cout << x  << endl;
    return 0;
}