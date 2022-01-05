#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data ; 
    struct node * next ; 
    
}Node;


void print_node (Node * h)
{
    while ( h != NULL)
    {
        printf("data = %d \n", h ->data);
         h = h->next ; 
    }
}

void push_node_back (Node **h , int data)
{
    Node *d = malloc(sizeof(Node));
    d->data = data ;
    d->next =NULL;
    
    Node *temp = *h ;
    
    while (temp->next)
    {
        temp = temp ->next;
    }
    temp -> next = d;
}


Node * push_node_back_return(Node *h , int data)
{
    Node *d = malloc(sizeof(Node));
    d->data = data ;
    d->next =NULL;
    
    Node *temp = h ;
    
    while (temp->next)
    {
        temp = temp ->next;
    }
    temp -> next = d;
    return (h);
}

void push_node_front (Node **h , int data)
{
    Node *d = malloc(sizeof(Node));
    d->data = data ;
    
    Node *temp = *h ;
    
    d->next = temp;
     
    *h =d;
}


int main()
{  
    Node * head = malloc(sizeof(Node));
    Node * second = malloc(sizeof(Node));
    Node * third = malloc(sizeof(Node));
    
    
    head -> data =10;
    head -> next = second;
    second -> data =20;
    second -> next = third;
    third -> data =30;
    third -> next = NULL;
    
    push_node_back(&head, 40);
    head= push_node_back_return(head,500);
    push_node_front(&head,100);
    push_node_front(&head,120);
    
    print_node (head) ;
    
}
