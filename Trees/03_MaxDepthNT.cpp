#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* children;

    Node(int val){
        data=val;
        children=NULL;
    }
};

void traversal(Node* root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        traversal(root->children);
        traversal(root->children->children);
    }
}

// int maxDepth(Node* root)
// {
//     if(root==NULL) return 0;

//     int ans=0;
//     for(int i=0;i<root->children.size();i++)
//     {
//         int tempAns=maxDepth(root->children[i]);
//         ans=max(ans,tempAns);
//     }
//     return ans+1;
// }

int main()
{
    Node* root=new Node(1);
    root->children=new Node(2);
    root->children=new Node(3);
    root->children->children=new Node(4);
    root->children->children=new Node(5);
    // root->right->left=new Node(6);
    // root->right->right=new Node(7);

    traversal(root);
}