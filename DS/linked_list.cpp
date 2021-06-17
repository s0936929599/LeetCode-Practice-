#include<iostream>
using namespace std;
 
class Node {

 public:
 
 int data;
 Node *next=NULL;
};


void print_node(Node *n)
{
    while (n!= NULL)
    {
    
     cout << n->data << endl;
      n=n->next;
    }
}


void pull_front(Node *&n , int d)
{
   Node * new_node = new Node();
   new_node->next= n;
   new_node->data= d;
   n= new_node;
}


void pull_back(Node *&n , int d)
{
   Node * new_node = new Node();
   
   Node *copy = n;
   
   new_node->data= d;
   new_node ->next = NULL;
   while (copy->next !=NULL)
   {
     copy=copy->next;
   }
   copy->next = new_node;
}

int main()
{   
   Node * head = new Node();
    
   Node * second = new Node();
   
   Node * third = new Node();
   

   void pull_front(Node *&, int );
   void pull_back(Node *& , int );
   
   head -> data = 1;
   
   second -> data= 2;
   
   third -> data= 3;
   
   head ->next = second;
   
   second ->next = third;
   
   third -> next = NULL;
   

   // pull_front(head,10);
   // pull_front(head,20);
    pull_back(head,40);
    print_node(head);
  
    return 0;
}
