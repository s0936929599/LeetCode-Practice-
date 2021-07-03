#include <iostream>

using namespace std;

int main()
{
  void bitwise_swap(int & , int & );
  
  int a=3,b=4;
  
  cout<<"Original a= "<<a<<" b= "<<b<<endl;
  
  bitwise_swap(a,b);
  
  cout<<"After a= "<<a<<" b= "<<b<<endl;
  
  return 0;
}


void bitwise_swap(int & a, int & b)
{
    a=a^b;
    b=a^b;
    a=a^b;
}
