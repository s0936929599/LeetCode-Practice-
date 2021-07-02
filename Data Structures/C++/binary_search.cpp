#include <iostream>

using namespace std;


void binary_search(int *, int  , int ) ;

int main()
{
    int len;
    
    int a[]={1,3,5,7,9,11}; 
     
    len=sizeof(a)/sizeof(a[0]);
    
    binary_search(a,len,5);
 
   
   
   return 0;
}


void binary_search(int *arr , int length , int target) 
{
    int l=0;
    int h=length-1;
    int count=0;
    
    while(l<=h)
    {
      int middle=(l+h)/2;
      
      if(arr[middle]== target)
      {
          cout<<"位置:"<<middle<<endl;
          cout<<"次數:"<<count+1<<endl;
          return;
      }
      else if(arr[middle] >target)
      {
          h=middle-1;
          count+=1;
      }
      else
      {
          l=middle+1;
          count+=1;
      }
    }    
    
}
