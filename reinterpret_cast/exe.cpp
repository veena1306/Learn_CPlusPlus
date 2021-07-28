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
  
  
