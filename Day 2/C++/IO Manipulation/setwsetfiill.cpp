#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Demonstration of Alignment using setw,setfill," << endl;

    int a = 12;
    cout << std ::setw(5);
    cout << std::setfill('*');
    cout << a <<  endl;
    cout << std::setw(5);
    cout << "Hi" << endl;
    cout << std::left;
    cout << std::setw(5) ;
    cout << a << endl;
}