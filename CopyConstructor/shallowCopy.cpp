/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

//If you are using shared_ptr then more than one pointer can point to this one object
//at a time and it’ll maintain a Reference Counter using use_count() method. 


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
