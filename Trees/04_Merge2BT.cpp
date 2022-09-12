#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node* merge(Node* root1,Node* root2)
{
    if(root1==NULL && root2 ==NULL) return NULL;
    if(root1 ==NULL) return root2;
    if(root2 ==NULL) return root1;

    Node* newNode=new Node(root1->data+root2->data);

    newNode->left=merge(root1->left,root2->left);
    newNode->right=merge(root1->right,root2->right);

    return newNode;
}

Node* mergeTrees(Node* root1,Node* root2)
{
    return merge(root1,root2);
}

void traversal(Node* root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        traversal(root->left);
        traversal(root->right);
    }
}

int main()
{
    Node* root1=new Node(2);
    root1->left=new Node(4);
    root1->right=new Node(7);
    root1->left->left=new Node(8);
    root1->left->right=new Node(11);
    root1->right->right=new Node(13);
    root1->right->right->left=new Node(9);

    Node* root2=new Node(3);
    root2->left=new Node(10);
    root2->right=new Node(1);
    root2->left->left=new Node(9);    
    root2->right->left=new Node(2);
    root2->right->right=new Node(6);
    root2->right->right->right=new Node(7);

    Node* root3=merge(root1,root2);

    traversal(root1);
    cout<<endl;
    traversal(root2);
    cout<<endl;
    traversal(root3);
    cout<<endl;

}