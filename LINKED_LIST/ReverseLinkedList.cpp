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

    Head=CreateLinkedList(arr,0,5);

    Node *temp=Head;
    temp=Head;
    int i=4;

    while(temp)
    {
        temp->data=arr[i];
        i--;
        temp=temp->next;
    }

     temp=Head;
    while(temp)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
   }
    

}


//      //Print the value
//     Node *temp;
//     temp=Head;

//   while(temp)
// {
  
// }
// }
