#include <iostream>
using namespace std;

void print1(int n)
{
    for(int i=1; i<=2*n-1; i++)
    {
        int stars = i;
        //Now we need to break the symmetry from row 6 onwards 
        if(i>n) stars = 2*n - i;
        for(int j=1; j<=stars; j++)
        {
            cout << "*" ;
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        print1(n);
    }
}