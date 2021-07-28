
/* adding two complex numbers */

/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

class Complex{
    private :
    int a;
    int b;
   
    public:
    Complex() : a(0),b(0)
    {
        
    }
    
    Complex(int a, int b) : a(a),b(b)
    {
        
    }
    
    void print()
    {
      cout << "a is :" <<a << "b is :"<< b << endl;  
    }
    
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.a = a+c.a;
        temp.b = b+c.b;
        return temp;
    }

};

int main()
{
  Complex c1(2,3), c2(4,5), c3;
  c3 = c1+c2;
  c3.print();
}
   





