#include<iostream>
#include<vector>
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
   
   
   //print_node(copy);
   //cout << "..." << endl;
  // print_node(n);
}

/*void reverse_linked( Node *& n)
{
    Node *  l =  n;
   Node * tmp = new Node ();
   Node * pre = new Node();
  
   print_node(l);
   //cout << "..." << endl;
   print_node(n);
}*/


void reverse_linked_vector( Node *& n)
{
    Node *  l =  n;
    Node *  temp = n;
    vector<int> v ;
  
  
  while (l!=NULL)
  {
   v.insert(v.begin(),l->data);
  l=l->next;
  }
   
  
  for (auto a=v.begin() ; a!= v.end();a++)
  {
    cout << *a << endl;
    temp->data=*a;
    temp=temp->next;
  }
 
  
  
 /* cout << "..." << endl;
  
   print_node(l);
   cout << ".." << endl;
   print_node(n);
  */
}

void insert_position(Node * pre_node , int d)
{
   Node * new_node = new Node();
   
   new_node->data=d;
   
   new_node->next=pre_node->next;
   
   pre_node->next=new_node;
}



int main()
{   
   Node * head = new Node();
    
   Node * second = new Node();
   
   Node * third = new Node();
   

   void pull_front(Node *&, int );
   void pull_back(Node *& , int );
   void insert_position(Node *, int);
   void reverse_linked_vector( Node *& );
   
   head -> data = 1;
   
   second -> data= 2;
   
   third -> data= 3;
   
   head ->next = second;
   
   second ->next = third;
   
   third -> next = NULL;
   

   // pull_front(head,10);
    pull_front(head,20);
    pull_back(head,40);
    
    reverse_linked_vector(head);
    //insert_position(second,15);
    //print_node(head);
  
    return 0;
}
