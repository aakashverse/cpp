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

/*int main()
{
    int x;
    cout<<"Enter root element: ";
    cin>>x;
    int first,second;
    queue<Node*>q;
    Node *root=new Node(x);
    q.push(root);

    //Build the Binary Tree
    while(!q.empty())
    {
        Node *temp=q.front();
        q.pop();
        cout<<"Enter the left child "<<temp->data<<": ";
        cin>>first; //left node ki value
        //left node
        if(first!=-1)
       {
        temp->left=new Node(first);
        q.push(temp->left);
       }
       //right node
        cout<<"Enter the right child "<<temp->data<<": ";
        cin>>second; //right node ki value
        if(second!=-1)
        {
            temp->right=new Node(second);
            q.push(temp->right);
        }
    }   
}*/
   /*BINARY TREE
                     1
                  2      3
               4    5  6   7
                         8       */



//create Binary Tree by level
Node *BinaryTree()
{
    int x;
    cin>>x;
    if(x==-1)
    return NULL;

    Node *temp=new Node(x);
    
    //left child
    cout<<"Enter the left child of "<<x<<" :";
    temp->left=BinaryTree();
    //right child
    cout<<"Enter the Right child of "<<x<<" :";
    temp->right=BinaryTree(); 
    return temp;
}
int main()
{
    cout<<"Enter the root Node: ";
    Node *root;
    root=BinaryTree();

              /*     1
                  2     7
                3   6      8
              4   5     9    10   */
}