#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next,*prev;

    //constructor
    Node(int value)
    {
        data=value;
        next=prev=NULL;
    }
};

class Dequeue
{
    Node *front,*rear;
    public:

    Dequeue()
    {
        front=rear=NULL;

    }
    //push front
    void push_front(int x)
    {
        //empty
        if(front==NULL)
        {
            front=rear=new Node(x);
            cout<<"Pushed "<<x<<" in front of dequeue\n";
            return;
        }
        else
        {
           Node *temp=new Node(x);
           temp->next=front;
           front->prev=temp;
           front=temp;
           cout<<"Pushed "<<x<<" in front of dequeue\n";
           return;
        }
    }

       //push back
       void push_back(int x)
       {
          //empty
          if(front==NULL)
          {
            front=rear=new Node(x);
            cout<<"Pushed "<<x<<" in back of dequeue\n";
            return;
          }
          else
          {
            Node *temp=new Node(x);
            rear->next=temp;
            temp->prev=rear;
            rear=temp;
            cout<<"Pushed "<<x<<" in back of dequeue\n";
            return;
         }
       }

        //pop_front
        void pop_front()
        {
            if(front==NULL)
            {
                cout<<"Dequeue Underflow\n";
            }
            else
            {
                Node *temp=front;
                cout<<"Popped "<<temp->data<<" from front of dequeue\n";
                front=front->next;
                delete temp;
                //Greater than 1 node
                if(front)
                front->prev=NULL;
                //1 node
                else
                rear=NULL;
            }
        }

        //pop back
        void pop_back()
        {
            if(front==NULL)
            {
                cout<<"Dequeue Underflow\n";
            }
            else
            {
                Node *temp=rear;
                cout<<"Popped "<<temp->data<<" from back of dequeue\n";
                rear=rear->prev;
                delete temp;
                //Greater than 1 node
                if(front)
                rear->next=NULL;
                //1 node
                else
                front=NULL;

            }
        }
    //start
    int start()
    {
        if(front==NULL)
        return -1;
        else
        return front->data;
    }
    //end
    int end()
    {
        if(front==NULL)
        return -1;
        else
        return rear->data;
    }
};

int main()
{
   Dequeue d;
   d.push_back(5);
   d.push_front(8);
   d.pop_back();
   cout<<d.end()<<endl;
}