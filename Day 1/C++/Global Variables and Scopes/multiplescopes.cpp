#include <iostream>
using namespace std;

int x  =10;
int main()
{
    int x  = 20;
    {
        int x = 30;
    }   
    cout << "Demonstration Of Global Scope" << endl;
    cout << x << endl;
    return 0;

    /*What will be the value of x ?
    Which scope will be accesed first  local or global variables?

    The answer is simple the local scope is accesed first and 
    if you have multiple level of scoping then the innermost 
    scope is accesed first and then the outermost scope will be accesed

    If innerscope local variable is not there than outer scope will be accesed first

    */
}