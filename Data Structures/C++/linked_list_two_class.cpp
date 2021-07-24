#include<iostream>
#include<vector>

using namespace std;

class Node
{
	public:	
		int data;
		Node *next = NULL;

};

class Node_operate
{   public :
     void print_node(Node *n);
	 void push_back(Node *n , int data);	
	 void push_front(Node *&n , int data );

};


void Node_operate :: push_back(Node *n , int data)
{
	Node * new_node = new Node();
	
	Node * tmp = n;
	new_node ->data = data;
	new_node ->next = NULL;
	
	while(tmp->next !=NULL)
	{
		tmp= tmp->next;
	}
	
	tmp->next=new_node;
}

void Node_operate ::  print_node(Node *n)
{
	while(n!=NULL)
	{
		cout << n->data << endl;
		n=n->next;
	}
	
}

void Node_operate :: push_front(Node *&n , int data)
{
	Node * new_node = new Node();
		
	new_node ->data = data;
	new_node ->next = n;
    
    n= new_node ;
}




int main()
{   
    Node_operate node_op ; // an operate linked list class 
    
	Node * head = new Node();
	
	head->data = 1;
	
	node_op.push_back(head , 10);
	node_op.push_front(head , 5);
	node_op.push_front(head , 78);	
    node_op.print_node(head);
	
	return 0 ;
}
