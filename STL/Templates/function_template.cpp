/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
#include <memory>
using namespace std;

template <typename T>

T max_func(T a, T b)
{
   if(a > b)
    return a;
  else
   return b;
}

int main()
{
    cout <<max_func(1,2)<<endl;
    cout << max_func('p','q')<<endl;
    cout <<max_func(1.2,4.5)<<endl;
}


/* -> Templates are generic data types, gerneric function or generic class which can work with different data types using templates.
           -> Templates in cpp works in such a way that it gets expanded at compile time.
		Types :-
		1. Function Templates.
		2. Class Templates.
		
		1. Function Templates :-  1. Function template in c++ is a single function template that works with multiple data types simultaneously.
		    template<typename T>   // The class/typename keyword is used to specify a generic type in a template declaration. */
