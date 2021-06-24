#include <iostream>
#include<queue>
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

Node *  InsertNode(Node* root, int data)
{
    // If the tree is empty, assign new node address to root
    if (root == NULL) {
        root = CreateNode(data);
        return root;
    }
 
    // Else, do level order traversal until we find an empty
    // place, i.e. either left child or right child of some
    // node is pointing to NULL.
    queue<Node*> q;
    q.push(root);
 
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
 
        if (temp->left != NULL)
            q.push(temp->left);
        else {
            temp->left = CreateNode(data);
            return root;
        }
 
        if (temp->right != NULL)
            q.push(temp->right);
        else {
            temp->right = CreateNode(data);
           return root;
        }
    }
}


int main() 
{  

  Node* root = CreateNode(10);                                             
  root->left = CreateNode(11);   
  //root->left->left = CreateNode(7);
  //root->left->right = CreateNode(3);
  root->right = CreateNode(9);
  //root->right->left = CreateNode(15);
  //root->right->right = CreateNode(8);

root=InsertNode(root,7);
root=InsertNode(root,3);
root=InsertNode(root,15);
root=InsertNode(root,8);

cout << "前序=" ;
preorder(root);
cout << endl;

cout << "中序=" ;
inorder(root);
cout << endl;

cout << "後序=" ;
postorder(root);
cout << endl;
    
  /*       10
      11           9 
     7     3    15     8
                                   */ 
    
 /*   
 前序=10 11 7 3 9 15 8 
中序=7 11 3 10 15 9 8 
後序=7 3 11 15 8 9 10 
*/
  return (0);
}
