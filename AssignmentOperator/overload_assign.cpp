/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

class Interger
{
    int a;

    public :
    Interger()
    {
        int a = 0;
    }
    
    Interger(int x)
    {
        a = x;
    }

    int geta()
    {
    cout << a << endl;
    }

    const Interger &operator=(const Interger &other_obj)
    {
        a = other_obj.a;
        return *this;
        
    }
    
    
};
int main()
{
    Interger i1(4);
    i1.geta();
    
    Interger i2;
    i2 = i1;
    i2.geta();
    
    Interger i3;
    i3 = i1;
    i3.geta();
    
    i3.operator=(i1);
    i3.geta();
    
}





