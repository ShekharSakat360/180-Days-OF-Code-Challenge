#include <iostream>
using namespace std;

int main()
{
    int x =10; // x is local to function main()
    //If I try to access the variable outside the main
    //I would not able to access the variable since it is local
    //to the main function and scope of variable is local
    cout << "Demonstration Of Local Variables " << endl;
    cout << x  << endl;
    return 0;
}