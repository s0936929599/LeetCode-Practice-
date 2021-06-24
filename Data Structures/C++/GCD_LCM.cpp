#include <iostream>
using namespace std;

int GCD(int,int);
int LCM(int,int);

int   GCD(int x , int y)
{  
        while (x%y!=0)
        {
           int temp=x%y;
           x=y;
           y=temp;
        }
        return(y);   
}

int   LCM(int x , int y)
{  
   return(x*y/GCD(x,y));
}




int main() 
{  
    
int Gans=GCD(100,175);
int Lans=LCM(100,175);

cout << "最大公因數="<< Gans<< endl;
cout << "最小公倍數="<< Lans<< endl;
  return (0);
}
