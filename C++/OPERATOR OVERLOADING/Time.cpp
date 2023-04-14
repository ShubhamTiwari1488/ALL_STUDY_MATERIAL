#include<iostream>
using namespace std;

class Time
{
 private:
  int h,m,s;
  
 public:
  Time()
  {
   h = m = s = 0;
  }
  
  void get()
  {
   cout<<"\nEnter the time : ";
   
   cin>>h>>m>>s;
  }
  
  void show()
  {
   cout<<"\nTime : "<<h<<":"<<m<<":"<<s;
  }
  
  friend Time &operator++(Time &);
  
  Time &operator--();
};

Time &operator++(Time &T)
{
 T.s++;
 
 if(T.s == 60)
 {
  T.s = 0;
  T.m++;
 }
 
 if(T.m==60)
 {
  T.m = 0;
  T.h++;
 }
 
 return T;
}

Time &Time :: operator--()
{
 s--;
 
 if(s<0)
 {
  s+=60;
  m--;
 }
 
 if(m<0)
 {
  m+=60;
  h--;
 }
 
 return *this;
}

int main()
{
 Time T;
 
 T.get();
 
 T.show();
 
 ++T;
 
 cout<<"\nAfter incrementing ";
 T.show();
 
 --T;
 cout<<"\nAfter Decrementing ";
 T.show();
 
}
