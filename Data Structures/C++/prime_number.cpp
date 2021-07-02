#include <iostream>

using namespace std;

int main()
{
 void prime_number(int);
 
 prime_number(100);
   
   return 0;
}

void prime_number(int n)
{
    
    for (int i=2 ; i<=n ; i++)
    {
       int count=0;
       
       for(int j=1; j<=i; j++)
       
       {
           if(i%j ==0)
           {
               count+=1;
           }
           
       }
       if (count==2)
       {
           cout<<"質數="<<i<<endl;
       }
    }    
    
    
}
