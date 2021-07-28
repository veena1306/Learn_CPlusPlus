/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
#include <memory>
using namespace std;

class Test
{
  public:
  Test()
  {
      cout << "created" <<endl;
  }
  
  void fun()
  {
    cout << "Hello" << endl;
  }
  
  ~Test()
  {
    cout << "destroyed" << endl;
  }
    
};


int main()
{
    cout<<"Hello World"<<endl;
    shared_ptr<Test>pTest2 = NULL;
    //1..shared_ptr<Test>pTest(new Test());
    {
    shared_ptr<Test>pTest = make_shared<Test>();
    pTest2 = pTest;
    auto pTest3 = pTest;
    }
    //2.shared_ptr<Test>pTest2 = pTest;
  
    cout << "finished" <<  endl;
    return 0;
}
