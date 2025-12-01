#include <iostream>
using namespace std;

//Size  of Operator in C++ is evaluated at compile time
//Size of Operator returns number of bytes taken by particular datatype
//or Expression
int main()
{
    int x;
    double d;
    cout << "Size Of Integer   : " << sizeof(x) << "\n";
    cout << "Size Of Character : " <<  sizeof(d) << "\n";
    cout << "Size Of Long Long : " << sizeof(10ll) << "\n";
    //When I suffix an integer with ll it becomes long long
    cout << "Size Of   Float   : " << sizeof(10.5) << "\n";
    return 0;
}