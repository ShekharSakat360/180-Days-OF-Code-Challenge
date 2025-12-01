#include <iostream>
using namespace std;

//Size  of Operator in C++ is evaluated at compile time
//Size of Operator returns number of bytes taken by particular datatype
//or Expression
int main()
{
    cout << "Size Of Integer   : " << sizeof(int) << "\n";
    cout << "Size Of Character : " <<  sizeof(char) << "\n";
    cout << "Size Of Long Long : " << sizeof(long long) << "\n";
    cout << "Size Of   Float   : " << sizeof(float) << "\n";
    return 0;
}