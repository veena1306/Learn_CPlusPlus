/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>

using namespace std;

void test(void(*pFunc)() )
{
    pFunc();
}

int main()
{
    auto fun = [](){cout<< "hello world" << endl; };
    fun();
    test(fun);
     
    test([](){cout<< "hello again" << endl;});
    
    return 0;
}
