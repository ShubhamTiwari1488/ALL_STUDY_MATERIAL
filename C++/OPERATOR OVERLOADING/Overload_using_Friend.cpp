#include<iostream>
using namespace std;

class Number
{
 private:
  int x;
 
 public:
  Number()
  {
   x = 0;
  }
  
  Number(int n)
  {
   x = n;
  }
  
  void show()
  {
   cout<<"x = "<<x<<endl;
  }
  
  friend Number &operator-(Number &);	//Friend Function declared
  
};


Number &operator-(Number &N)
{
 N.x = -N.x;	//use objectname with data member
 return N;		//return object
}

int main()
{
 Number N1(100), N2;
 
 N2 = -N1;
 
 N2.show();
}
