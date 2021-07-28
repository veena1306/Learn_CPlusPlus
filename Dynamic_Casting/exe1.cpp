
//make no sense to cast parent type object to child type object.

Class Parent
{
  public:
  cout << "parent" << endl;
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
  
 Parent *ppb = &brother;
 Brother *pbb = static_cast<Brother*>(pbb);   // here it is casting parent type object to child type object, still it woks with sttaic_cast, which is not valid
  
 // dynamic cast
 Brother *pbb = dynamic_cast<Brother*>(pbb);  
  
if(pbb == NULL)
{
 cout << "Invalid cast" <<endl;
} esle {
  cout << "valid cast:"<<pbb <<endl;    // static cast doesn't do run time checking
}
  
  
  
}



