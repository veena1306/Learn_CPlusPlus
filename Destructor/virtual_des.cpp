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
  public:
  Base()
  {
    cout << "Base class constructor" << endl;
  }

  virtual ~Base()
  {
    cout << "Base class destructor" << endl;
  }
    
};

class Derived : public Base
{
  public:
  Derived()
  {
    cout << "Derived constructor called" <<endl;
  }

  ~Derived()
  {
      cout << "Derived destructor called" <<endl;
  }
};

int main()
{
    Base *bp;
    Derived *d = new Derived();
    bp = d;
    
    delete bp;
}
