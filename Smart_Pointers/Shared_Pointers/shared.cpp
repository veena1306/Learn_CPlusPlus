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
  shared_ptr<rectangle>rect1(new rectangle(10,15));
  
  shared_ptr<rectangle>rect2;
  
  rect2 = rect1;
  
  rect2->getDimension();
  rect1->getDimension();
  cout << rect1.use_count();
 
}
