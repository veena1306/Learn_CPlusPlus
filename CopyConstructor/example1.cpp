/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>

using namespace std;

class point
{
    private :
     int a;
     int b;
    
    public:
     point (int x, int y){
         a = x;
         b = y;
     }
     
     int getA()
     {
       return a;  
     }
     
     int getB()
     {
        return b;   
     }
     
     point(const point &p1) 
     {
       a = p1.a;
       b = p1.b;
     }
     
};

int main()
{
    point P1(10,15);
    point P2 = P1;
    cout<<"Hello World";
    cout << P1.getA()<< P1.getB() << endl;
    cout << P2.getA()<< P2.getB() << endl;
    return 0;
}
