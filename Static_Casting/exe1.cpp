/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

class Parent
{
};

class Brother : public Parent
{
  
};

class Sister : public Parent
{
    
};

int main()
{
  Parent parent;
  Brother brother;
  
  Brother *pb;
  pb = static_cast<Brother*>(&parent);
  cout << pb << endl;

  Parent *ppb = &brother;
 // Brother *pbb = &ppb;
  
  Brother *pbb = static_cast<Brother*>(ppb);
  cout << pbb << endl;
}
   
