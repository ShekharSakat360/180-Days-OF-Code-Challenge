#include <bits/stdc++.h>
#include <typeinfo>
using namespace std;

int main()
{
    cout << "Demonstration Of Auto KeyWord " << endl;

    auto a = 10;  //Constant that we used in our program is called literals for eg 10 is literal
    auto b = 15.5;

    /*
    Automatic Determination of Data-Type during Assignment. e.
    With the help of auto keyword we can diretly assign any value to auto variable 
    we don't need to write the datatype of the variable and using auto keyword compiler
    will infer the value of datatype and it will tell what value the particular datatype it is
    holding whether it is int,long or double
    i -> int
    d-> double

    When we pass the variable inside typeid(a) it gives type information
    typeid(a).name() gives the short name for that datatype

    Note if a function returns  auto its return type can be change without worrying about 
    function prototype that is function declaration
    */

    cout << a << "\n";
    cout << b << endl;


    cout << typeid(a).name() << " " << "\n" << typeid(b).name();
    

    
    return 0;
}