#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};

void traversal(Node* root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        traversal(root->left);
        traversal(root->right);
    }
}

int maxDepth(Node* root)
{
    if(root==NULL) return 0;

    int left=1+maxDepth(root->left);
    int right=1+maxDepth(root->right);

    return max(left,right);
}

int main()
{
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    traversal(root);
    cout<<endl;

    cout<<maxDepth(root)<<endl;
}