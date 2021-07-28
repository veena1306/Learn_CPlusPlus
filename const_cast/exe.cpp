/* constant cast is used to cast away the constantness of the variables.
/* non- constant members can be changes inside constant memeber function.
/*Inside constant functions, this is the const pointer to the constant object, thus compiler doesn't allow to change the value of variables through this.
/* constant cast can modify these values

//EXAMPLE :- 

/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

class constant
{
    int rollno;
    
    public :
    
        constant():rollno(0){}
        constant(int r):rollno(r){
            
        }
    
    void fun() const {
        
        (const_cast <constant*>(this))->rollno = 5;
    }
    
    int getrollno()
    {
        cout << rollno << endl;
    }
};

int main()
{
  constant c1(3);
  c1.getrollno();
  
  c1.fun();
  c1.getrollno();
}
   
 

