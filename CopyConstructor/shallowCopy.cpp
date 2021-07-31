/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

/* It is the process of creating a copy of an object by copying data of all the member variables as it is. 
Only a default Constructor produces a shallow copy. 
A Default Constructor is a constructor which has no arguments

*/



#include <iostream>
#include <memory>
using namespace std;

class Base
{
  private:
  int a;
  int b;
  int *ptr;

  public :
  
  Base()
  {
    ptr = new int;
  }
  
  void input(int x, int y, int z)
  {
    a = x;
    b = y;
    *ptr = z;
  }
  
  void print()
  {
   cout << "value of a is : " << a <<  endl;
   cout << "value of b is " << b << endl;
   cout << "value of ptr is : " << *ptr << endl;
  }

    
};

int main()
{
    Base b1;
    b1.input(4,8,12);
    b1.print();
    
    Base b2(b1);
    b2.print();
}
