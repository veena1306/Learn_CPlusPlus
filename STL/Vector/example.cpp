#include<iostream>
#include<vector>

using namespace std;

vector <string> fizzbuzz(int n)
{
    vector<string> result;
    
    for(int i = 0; i<=n ; i++){
        if(i%15 == 0)
        {
         result.push_back("FizzBuzz");
        }else if(i%5 == 0){
          result.push_back("BUzz");  
        }else if(i%3 == 0){
          result.push_back("fizz");  
        }else
        {
           result.push_back(to_string(i));   
        }
    }
}
int main()
{
  vector<string>output = fizzbuzz(10);
  
  for(string x : output){
      cout << x << ",";
      cout << endl;
  }
}
