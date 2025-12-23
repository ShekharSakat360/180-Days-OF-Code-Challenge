#include<iostream>
using namespace std;
int main()
{
    int x = 10, y = 20 ; 
   // cout << std::boolalpha;
    cout << (x<y) << "\n" 
         << (x>y) << "\n"
         << (x==y) << "\n"
         << (x>=y) << "\n"
         << (x<=y) << "\n"
         << (x!=y) << "\n";
    return 0;
}