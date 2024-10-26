#include <iostream>
#include <algorithm>
using namespace std;

class Node
{
    public:
    int data,height;
    Node *left,*right;

    Node(int value)
    {
        data=value;
        height=1;
        left=right=NULL;
    }
};

int getheight(Node *root)
{
    if(!root)
    return 0;

    return root->height;
}

int getbalance(Node *root)
{
    return getheight(root->left)-getheight(root->right);
}

//Right Rotation
Node* rightRotation(Node* root)
{
    Node* child=root->left;
    Node* childRight=child->right;

    child->right=root;
    root->left=childRight;

    //Update the height

    root->height=1+max(getheight(root->left),getheight(root->right));
    child->height=1+max(getheight(child->left),getheight(child->right));
    
    return child;
}

//Left Rotation
Node* leftRotation(Node* root)
{
    Node* child=root->right;
    Node* childLeft=child->left;

    child->left=root;
    root->right=childLeft;

    //Update the height

    root->height=1+max(getheight(root->left),getheight(root->right));
    child->height=1+max(getheight(child->left),getheight(child->right));
    
    return child;
}

Node* insert(Node *root,int key)
{
    //does'nt exist
    if(!root)
    return new Node(key);

    //exist h
    if(key<root->data)  //left side
    root->left=insert(root->left,key);
    else if(key>root->data)  //Right side
    root->right=insert(root->right,key);
    else
    return root;  //Duplicate elements are not allowed

    //Update height
    root->height=1+max(getheight(root->left),getheight(root->right));

    //Balancing check
    int balance=getbalance(root);

    //Left left case
    if(balance>1&&key<root->left->data)
        return rightRotation(root);

    //Right Right case
    else if(balance<-1&&key>root->right->data)
        return leftRotation(root);

    //Left Right case
    else if(balance>1&&key>root->left->data)
    {
        root->left=leftRotation(root->left);
        return rightRotation(root);
    }
    
    //Right left case
    else if(balance<-1&&key<root->right->data)
    {
        root->right=rightRotation(root->right);
        return leftRotation(root);
    }

    //No Unbalancing
    else
    {
        return root;
    }
}

void preorder(Node* root)
{
    if(!root)
    return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

void Inorder(Node* root)
{
    if(!root)
    return;

    preorder(root->left);
    cout<<root->data<<" ";
    preorder(root->right);

}

int main()
{
    //Duplicates elements not allowed

    Node* root=NULL;

    root=insert(root,10);
    root=insert(root,20);
    root=insert(root,30);
    root=insert(root,50);
    root=insert(root,70);
    root=insert(root,5);
    root=insert(root,100);
    root=insert(root,95);
    
    cout<<"Preorder: ";
    preorder(root);

    cout<<"\nInorder: ";
    Inorder(root);

    

}
