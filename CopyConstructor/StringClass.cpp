/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
#include<cstring>
using namespace std;

class String
{
    char *s;
    int size;
   
    public:
    String (const char *str = NULL);
    String(const String&);
   ~String () {
       
       delete [] s;
   }
   
   void print()
   {
       cout << s << endl;
   }
   
   void change(const char *str)
   {
       delete [] s;
       size = strlen(str);
       s = new char[size+1];
       strcpy(s, str);
   }
    
};

 String::String(const char *str)
  {
    size = strlen(str);
    s = new char[size+1];
    strcpy(s,str);
  }
  
   String::String (const String& old_strobject)
   {
      size = old_strobject.size;  
      s = new char[size+1];
      strcpy(s,old_strobject.s);
   }
   
int main()
{
    cout<<"Hello World";
    
    String str1("veena");
    String str2(str1);
    
    str1.print();
    str2.print();
    
    str2.change("chauhan");
    str1.print();
    str2.print();
    return 0;
    
}


//outPut : Veena 
           chauhan
