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
        next=prev=NULL;
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
        Node *Head=NULL;
        int arr[]={5,8,2,9,3};

        //create doubly linked list
        Head=CreateDLL(arr,0,2,NULL);

        //Delete at Start
        /*if(Head!=NULL)
        {

            //If only 1 node exist
            if(Head->next==NULL)
            {
                delete Head;
                Head=NULL;
            }
            //If more than 1 node exist
            else
            {
              Node *temp=Head;
              Head=Head->next;
              delete temp;
              Head->prev=NULL;
            }
        }*/

        //Delete at end
        /*if(Head!=NULL)
        {
            //If only 1 node is present
            if(Head->next==NULL)
            {
                delete Head;
                Head=NULL;
            }
            //More than 1 Node exist
            else
            {
                Node *curr=Head;
                //last node pe leke jaao
                while(curr->next)
                curr=curr->next;

                curr->prev->next=NULL;
                delete curr;

            }
        }*/

       //Delete at any position
       int pos=1;

       //delete at start
       if(pos==1)
       {
            //If only 1 node exist
            if(Head->next==NULL)
            {
                delete Head;
                Head=NULL;
            }
            //If more than 1 node exist
            else
            {
              Node *temp=Head;
              Head=Head->next;
              delete temp;
              Head->prev=NULL;
            }
       }

            else
            {
                Node *curr=Head;
                while(--pos)
                curr=curr->next;

                //delet at end

                if(curr->next==NULL)
                {
                    curr->prev->next=NULL;
                    delete curr;

                }
                else
                {
                 curr->prev->next=curr->next;
                 curr->next->prev=curr->prev;
                 delete curr;
                }
            }


        Node *trav=Head;
        while(trav)
        {
           cout<<trav->data<<" ";
           trav=trav->next;
        }
    }