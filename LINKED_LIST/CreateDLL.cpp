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

    //Create DLL by Recursion
    Node *CreateDLL(int arr[],int index,int size,Node *back)
    {
        if(index==size)
        return NULL;

       Node *temp=new Node(arr[index]);
       temp->prev=back;
       temp->next=CreateDLL(arr,index+1,size,temp);
       return temp;
    }

int main()
{
    Node *Head,*Tail;
    Tail=Head=NULL;
    //Node *Head=NULL;
    int arr[]={1,2,3,4,5};
    
    //  //Create Doubly linked list
    //  //create with recursion

    Head=CreateDLL(arr,0,5,NULL);

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
   
    Node *trav=Head;
    while(trav)
    {
         cout<<trav->data<<" ";
         trav=trav->next;
    }

}