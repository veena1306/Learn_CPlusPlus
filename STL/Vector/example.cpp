Write a fizzbuzz function that returns a vector<string> with the numbers from 1 to n with the following restrictions:
for multiples of 3 store "Fizz" instead of the number
for multiples of 5 store "Buzz" instead of the number
for numbers which are multiples of both 3 and 5 store "FizzBuzz"
You may use the std::to_string(number) method to convert a number into a string.



Example

fizzbuzz(15) == {
"1", "2", "Fizz", "4", "Buzz",
"Fizz", "7", "8", "Fizz", "Buzz",
"11", "Fizz", "13", "14", "FizzBuzz"
}



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
