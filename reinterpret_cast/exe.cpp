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
//It is used to convert one pointer of another pointer of any type, no matter either the class is related to each other or not.
//It does not check if the pointer type and data pointed by the pointer is same or not.

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
