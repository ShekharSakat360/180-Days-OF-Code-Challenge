#include <iostream>
using namespace std;

int main()
{
    int x ; // x is local to function main()
    //If I do not initialise the value of x I will get any undefined value or
    //garbage value but we are getting 0

    cout << "Demonstration Of Local Variables " << endl;
    cout << x  << endl;
    return 0;
}