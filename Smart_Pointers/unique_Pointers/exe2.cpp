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

class Temp
{
  private:
  unique_ptr<Test[]>pTest;
  
  public:
  Temp():pTest(new Test[2]){
      
  }
    
};

int main()
{
    cout<<"Hello World" <<endl;;
    Temp temp;
    //unique_ptr<int>pTest(new int);
    //*pTest = 7;
    //cout << *pTest << endl;
  // { 
    //    unique_ptr<Test>pTest(new Test);
      //   pTest->fun();
   //}
   //{
       // unique_ptr<Test[]>pTest(new Test[2]);
     //   pTest[1].fun();
   //}
    cout << "finished" <<  endl;
    return 0;
}
