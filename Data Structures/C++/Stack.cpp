#include <iostream>

using namespace std;

#define max_size 4

int arr[max_size] ;
int top=-1;

bool stack_empty()
{
    if (top == -1) return true;
    else return false;
}

bool stack_full()
{   
    if (top == max_size-1) return true;
    else return false;
}

void stack_push(int data)
{
   if (stack_full())
   {
       cout << "Array is full can't push data" << endl;
   }
   else
   {
       top+=1;
       arr[top]=data;
       cout << "data[" << top << "]= " << arr[top] << endl;
   }
}

void stack_pop()
{
   if (stack_empty())
   {
       cout << "Array is empty can't pop data" << endl;
   }
   else
   {
       cout << "data[" << top << "]= " << arr[top] << endl;
       top-=1;
   }
}

int main()
{   
    stack_push(1);
    stack_push(3);
    stack_push(5);
    stack_push(7);
    stack_push(9);
    
    stack_pop();
    stack_pop();
    stack_pop();
    stack_pop();
    stack_pop();
    return 0;
/*  
    data[0]= 1
    data[1]= 3
    data[2]= 5
    data[3]= 7
    Array is full can't push data
    data[3]= 7
    data[2]= 5
    data[1]= 3
    data[0]= 1
    Array is empty can't pop data
*/  
}
