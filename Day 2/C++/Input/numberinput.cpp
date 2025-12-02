#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,sum ; //Here we are telling the compiler to allocate 12 Bytes of memory space for variabke x,y and sum to stopre integer value
    cout << "Demonstration Of Input Statement " << endl;
    cout << "Enter Two Integers : ";
    cin >> x >> y; //Chaining Of Extraction Operator

    sum = x + y;
    cout << "Sum is : " <<  sum << "\n";
    return 0;
}