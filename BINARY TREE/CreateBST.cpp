#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *left,*right;

    Node(int value)
    {
        data=value;
        left=right=NULL;
    }
};

Node* CreateBST(Node *root,int target)
{
    if(!root)
    {
       Node *temp=new Node(target);
       return temp;
    }
   
    if(target>root->data)
    root->right=CreateBST(root->right,target);
    else
    root->left=CreateBST(root->left,target);

    return root;
}

void inorder(Node *root)
{
    if(!root)
    return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

bool search(Node *root,int key)
{
    if(!root)
    return 0;

    if(root->data==key)
    return 1;

    if(key>root->data)
    search(root->right,key);
    else
    search(root->left,key);

}

int main()
{
    int arr[]={6,3,17,5,11,18,2,1,20,14};
    
    Node *root=NULL;
    for(int i=0;i<10;i++)
    root=CreateBST(root,arr[i]);
    inorder(root); 

    cout<<endl<<search(root,20)<<" ";
}