#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node *prev;

    //creatiion of doubly node
    Node(int value)
    {
        data=value;
        prev=NULL;
        next=NULL;
    }
};

int main()
{
    // Node *Head,*Tail;
    // Head=Tail=NULL;
    Node *Head=NULL;
    int arr[5]={1,2,4,5,8};
    
    //Create DLL
    // for(int i=0;i<5;i++)
    // {
    //     if(Head==NULL)
    //     {
    //     Head=new Node(arr[i]);
    //     Tail=Head;
    //     }

    //     else
    //     {
    //     Node *temp=new Node(arr[i]);
    //     Tail->next=temp;
    //     temp->prev=Tail;
    //     Tail=temp;
    //     }
    // }

   
      
      Node *temp=Head;
     //Insert at start
    if(Head==NULL)
    {
        Head=new Node(9);
    }

    else
    {
        Node *temp=new Node(9);
        temp->next=Head;
        Head->prev=temp;
        Head=temp;
    }

   //Insert at any given pos z 
    Node *curr=Head;
    int pos=0;

    while(--pos)
    {
       curr=curr->next;
    }

    //insert at pos start
    if(pos==0)
    {
           //list doesnt exist
           if(Head==NULL)
           {
            Head=new Node(3);
           }
           //list exist karti ho
           else
           {
           Node *temp=new Node(3);
           temp->next=Head;
           Head->prev=temp;
           Head=temp;
           }
    }

    else
    {

       //insert at end
       if(curr->next==NULL)
       {
        Node *temp=new Node(3);
        curr->next=temp;
        temp->prev=curr;
       }

       //insert at middle
      Node *temp=new Node(3);
      //linking of added node to list nodes
      temp->next=curr->next;
      temp->prev=curr;
      curr->next=temp;
      temp->next->prev=temp;
      
    }
   
    Node *trav=Head;
    while(trav)
    {
         cout<<trav->data<<" ";
         trav=trav->next;
    }   
}