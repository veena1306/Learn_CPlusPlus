/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
#include <memory>
using namespace std;

class smartPtr
{
  private:
  int *ptr;
  
  public:
  smartPtr(int *p = NULL)
  {
    ptr = p;
  }
  
 ~smartPtr()
 {
    delete [] ptr;
 }
 
 int& operator*()
 {
    return *ptr;
 }
    
};


int main()
{
  smartPtr ptr(new int());
  *ptr = 10;
  cout << *ptr <<  endl;
}
