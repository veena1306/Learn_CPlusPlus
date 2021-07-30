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

class Complex
{
    private:
    int real;
    int imaginary;

    public:
   // Complex():real(0),imaginary(0)
    //{
        
    //}
    
    Complex(int real,int imaginary) :real(real),imaginary(imaginary)
    {
        
    }
    
    Complex operator+(Complex c)
    {
        real = real+c.real;
        imaginary = imaginary+c.imaginary;
        return *this;
    }
    
    void print()
    {
        cout << real << "+i" << imaginary << endl;
    }
    
};

int main()
{
  Complex c1(1,2);
  Complex c2(3,4);
  Complex c3 = c1+c2;
  //c3 = c1+c2; // c1.operator(c2);
  c3.print();
}
