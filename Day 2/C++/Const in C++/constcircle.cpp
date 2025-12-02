#include <bits/stdc++.h>
using namespace std;

const double PI  = 3.141590;

int main()
{
    int r,area; //Declaration
    cout << "Area Of Circle " << endl;
    cout << "Enter Radius Of Circle : ";
    cin >> r;
    cout << endl;

    area = PI * r * r;

    cout << "Area Of Circle is : "  << area << endl;
    return 0;
}