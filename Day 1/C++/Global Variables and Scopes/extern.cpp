#include <iostream>
using namespace std;
extern int x  ;
int main()
{
    cout << "Demonstration Of External Linkage " << endl;
    cout << x  << endl;
    return 0;
}
//If you are trying to access  a global variable below main
//You need to use the keyword extern for external linkage
//in order to access the global value below main
int x =10 ;