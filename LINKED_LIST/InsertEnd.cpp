#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
   Node *next;
   Node(int value) //constructor
   {
    data=value;
    next=NULL;
   }
};

int main()
{
     Node *Head,*Tail;
      Head=Tail=NULL;
     
     int arr[]={2,4,6,8,10};
     
     for(int i=0; i<5; i++)
       {
         //if Linked list doesn't exist
         if(Head==NULL)  
          {
            Head=new Node(arr[i]);
            Tail=Head;
          }

         //Linked list exist karti h
         else
          {
            Tail->next=new Node(arr[i]);
            Tail=Tail->next;
          }
        }
         Node *temp;
         temp=Head;

         while(Head)       //Head jab tak exist kre
          {
            cout<<temp->data<<" ";
            temp=temp->next;
          }
        
}