#include<iostream>
#include<vector>

using namespace std;

int main()
{
  vector<vector<int >>arr = {
                 {1,2,4},
                 {5,10,15},
                {7,8,9,10}};
  
 // arr[0][0] += 10;
   //foreach loop
  for(int i = 0; i < arr.size(); i++)
   {
    for(int element : arr[i])
    {
      cout << element << "," <<endl;
    }
  }
}
