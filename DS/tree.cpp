#include <iostream>
using namespace std;

struct  Node 
{
    int data ; 
    struct  Node * left;
     struct  Node * right;
};

Node *CreateNode  (int d)
{   

      Node* newNode = new Node();

      if (!newNode)
      {
       return NULL;
      }
     newNode->data=d;
     newNode->left= newNode->right=NULL;
     return newNode;
}

void preorder(Node *n)
{   if (n ==NULL)
       {
         return;
       }
   cout<< n->data<<" ";
   preorder(n->left);
    preorder(n->right);
}

void inorder(Node *n)
{   if (n ==NULL)
       {
         return;
       }
  inorder(n->left);
   cout<< n->data<<" ";
     inorder(n->right);
}

void postorder(Node *n)
{   if (n ==NULL)
       {
         return;
       }
  postorder(n->left);
  postorder(n->right);
   cout<< n->data<<" ";
}




int main() 
{  

  /*    10
   11           9 
7     3    15    8
   */ 
  Node* root = CreateNode(10);                                             
  root->left = CreateNode(11);   
  root->left->left = CreateNode(7);
  root->left->right = CreateNode(3);
  root->right = CreateNode(9);
  root->right->left = CreateNode(15);
  root->right->right = CreateNode(8);

cout << "前序=" ;
preorder(root);
cout << endl;

cout << "中序=" ;
inorder(root);
cout << endl;

cout << "後序=" ;
postorder(root);
cout << endl;

  return (0);
}
