/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

/* It is the process of creating a copy of an object by copying data of all the member variables as it is. 
Only a default Constructor produces a shallow copy. 
A Default Constructor is a constructor which has no arguments

*/



/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
#include<cstring>
using namespace std;

class Test
{
  private:
    int a;
    int b;
    int *ptr;

  public:
  
   Test()
   {
     ptr = new int;
   }
    
  void setInput(int x, int y, int z)
  {
    a = x;
    b = y;
    *ptr = z;
  }
  
  void print()
  {
    cout << "value of a is : " << a << endl;
    cout << "value of b is : " << b << endl;
    cout << "value of *ptr is : " << *ptr << endl;
  }
  
  Test(const Test &old_object)
  {
    a = old_object.a;
    b = old_object.b;
    *ptr = *(old_object.ptr);
  }
    
};   
int main()
{ 
   Test t1;
   t1.setInput(1,2,3);
   t1.print();
   
   Test t2(t1);
   
   t2.print();
}

