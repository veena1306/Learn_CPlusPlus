// cast one type of pointer into completely different type

Class Parent
{

};

class Brother
{
  
};

class Sister
{
  
};

int main()
{
  Parent parent; 
  Brother brother;
  Sister sister;
  
  Parent *ppb = &brother;
  sister *ssb = reinterpret_cast<Sister*>(ppb);
  if(ssb ==  null)
  {
   cout << "invalid cast" << endl; 
  }
  
}
  
  
=====================================================================================================================================================


// CPP program to demonstrate working of 
// reinterpret_cast
#include <iostream>
using namespace std;
  
int main()
{
    int* p = new int(65);
    char* ch = reinterpret_cast<char*>(p);
    cout << *p << endl;
    cout << *ch << endl;
    cout << p << endl;
    cout << ch << endl;
    return 0;
}
