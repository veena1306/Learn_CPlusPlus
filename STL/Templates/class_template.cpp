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

template <class T>

class temp
{
    private :
    T a;
    T b;
    
    public :
    
    temp(T x, T y)
    {
        a = x;
        b = y;
    }
    
    T geta()
    {
        return a;
    }
    
    T getb()
    {
      return b;
    }
    
};

int main()
{
    temp<int> p1(1,2)<<endl;
    temp<float> p2(1.2,2.3)<<endl;
    temp<char> p3('p','q')<<endl;
    
    cout <<p1.geta() << p1.getb() <<endl;
    cout <<p2.geta() << p2.getb() <<endl;
    cout <<p3.geta() << p3.getb() <<endl;
}
