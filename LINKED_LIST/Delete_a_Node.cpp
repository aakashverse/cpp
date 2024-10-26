#include<iostream>
using namespace std;

class Node
{
     public:
     int data;
     Node *next;

    Node(int value)
   {
    data=value;
    next=NULL;
   }
};

Node *CreateLinkedList(int arr[],int index,int size)
{
    if(index==size)
    return NULL;

    Node *temp;
    temp=new Node(arr[index]);
    temp->next=CreateLinkedList(arr,index+1,size);
    return temp;
}

int main()
{
    Node *Head;
    Head=NULL;
    int arr[]={2,4,6,1,7};
    int x=3;

    Head=CreateLinkedList(arr,0,5);

    /*Delete Node at start
    if(Head!=NULL)
    {
        Node *temp=Head;
        Head=Head->next;
        delete temp;
    }*/

   /*Delete last node
   if(Head!=NULL)
   {
    //only one node is present
    if(Head->next==NULL)
    {
        Node *temp=Head;
        delete temp;
        Head=NULL;

    }
    //more than one node is present
    else{
        Node *curr=Head;
        Node *prev=NULL;
        
        //curr->next is not NULL
        while(curr->next!=NULL)
        {
            prev=curr;
            curr=curr->next;
        }
       
        prev->next=curr->next;
         delete curr;
    }
   }*/

  //Deleting particular node including edge cases of first & last node
  if(x==1)
  {
    //checks for first node
    Node *temp=Head;
    Head=Head->next;
    delete temp;
  }

   else
 {
    //checks for all other cases including deletion of last node
    Node *curr=Head;
    Node *prev=NULL;
    x--;
 
   while(x--)
  {
    prev=curr;
    curr=curr->next;
  }
  prev->next=curr->next;
  delete curr;
 }

  
  //Print the value
  Node *temp;
  temp=Head;

  while(temp)
{
  cout<<temp->data<<" ";
  temp=temp->next;
}
}