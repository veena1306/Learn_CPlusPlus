/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

class Test
{
  private:
  int id;
  string name;

  public :
  Test():id(0),name("")
  {
      
  }
    
  Test(int id, string name):id(id),name(name)
  {
      
  }
    
  void print()
  {
     cout << id << ":" << name << endl;
  }
  
  const Test &operator=(const Test &other_object)
  {
    id = other_object.id;
    name = other_object.name;
    return *this;
  }
  
   Test (const Test &copy_object)
   {
     id = copy_object.id;
     name = copy_object.name;
   }
    
};

int main()
{
    Test t1(10,"veena");
    t1.print();

    Test t2(20,"me");
    t2 = t1;
    t2.print();
    
    Test t3;
    t3.operator=(t1);
    t3.print();

    Test t4(t1);
    t4.print();
    
}
   





