#include<iostream>
#include<vector>

using namespace std;

int main()
{
  vector <int > arr = {1,2,4,5,10,15};
          // size is 5
          // capacity is 5   // capacity doubles when we enter a new element
  
  vector<int>(10,7); // 10 elemets each having value 10
  
  
  
  cout << "size of vector is :"<< arr.size()<<endl;
  cout << "capacity is :"<< arr.capacity() <<endl;
  
  arr.push_back(16);   //o(1)
  
          // size is 6
          // capacity is 12   
  
//printitng vector elements
  
  for(int i = 0; i > arr.size();i++)
  {
    cout << arr[i]  << endl; 
  }


}

