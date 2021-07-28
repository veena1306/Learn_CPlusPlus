/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
#include <memory>
using namespace std;

class rectangle
{
    private :
    int length;
    int breadth;
    
    public:
    rectangle():length(0),breadth(0){}
    rectangle(int length, int breadth):length(length),breadth(breadth)
    {
        
    }
    
    void getDimension()
    {
     cout << length << breadth <<  endl;
    }
    
};


int main()
{
  unique_ptr<rectangle>rect1(new rectangle(10,15));
  rect1->getDimension();
  
  unique_ptr<rectangle>rect2;
  rect2 = move(rect1);
  rect2->getDimension();
 
}
