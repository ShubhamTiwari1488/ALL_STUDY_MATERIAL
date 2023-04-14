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
  
  Number operator-()	//Operator overloading function returns an object
  {
   Number temp;
   temp.x = -x;
   return temp;	//object returned
  }
  
  void show_data()
  {
   cout<<"\n x = "<<x<<endl;
  }
};

int main()
{
 Number N1(-10) , N2;
 
 N2 = -N1;
 
 N2.show_data();
 
 return 0;
}
