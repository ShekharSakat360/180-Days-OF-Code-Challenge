#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Demonstration of showbase, noshowbase, showpos, noshowpos, uppercase, nouppercase" << endl;
    int a = 26;

    cout << std::showbase; // This will show the base in decimal format base 10
    cout << std::oct; // This will show the base in octal format base 8
    cout << a << " " << endl; // 032

    cout << std::hex; // This will show the base in hexadecimal format base 16
    cout << std::showpos; // This will show the positive sign in front of the number
    cout << a << " " << endl; // +1a

    cout << std::noshowbase; // Reset to no base prefix
    cout << a << " " << endl; // +1a

    cout << std::uppercase; // This will show in uppercase
    cout << a << endl; // +1A

    return 0;
}
