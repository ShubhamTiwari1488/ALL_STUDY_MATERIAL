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
   cout<<"x = "<<x;
  }
  
  Number operator++()	//Prefix increment operator
  {
   x++;
   
   return Number(x);
  }
  
  Number operator--()
  {
   x--;
   
   return Number(x);
  }
  
  Number operator++(int)
  {
   return Number(x++);
  }
  
  Number operator--(int)
  {
   return Number(x--);
  }
};

int main()
{
 Number N1(10) , N2 , N3(20) , N4,N5(30),N6,N7;
 
 N2 = ++N1;
 
 cout<<"\nPrefix Increments : ";
 
 N2.show();
 
 cout<<"\nPrefix Decrements : ";
 
 N4 = --N3;
 
 N4.show();
 
 cout<<"\nPostfix Increments : ";
 
 N6 = N5++;
 
 N6.show();
 
 cout<<"\nPostfix Decrements : ";
 
 N7 = N5--;
 
 N7.show();
 
 return 0;
}
