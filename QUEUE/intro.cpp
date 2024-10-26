#include<bits/stdc++.h>
using namespace std;

class Queue
{   //Implement queue using circular array--> [Circular Queue]->better utilise the space left in array
    int *arr;
    int front,rear,size;
    
    public:
    //constructor
    Queue(int n)
    {
        arr=new int[n];
        front=rear=-1;
        size=n;
    }
  
    //Queue is Empty or not
    bool IsEmpty()
    {
        return front==-1;
    }

    //Queue is full or not
    int Isfull()
    {
       return (rear+1)%size==front;
    }

    //push
    void push(int x)
    {
        //Empty
        if(IsEmpty())
        {
           cout<<"Pushed "<<x<<" into the Queue\n";
           front=rear=0;
           arr[0]=x;
           return;
        }
        //Full
        else if(Isfull())
        {
            cout<<"Queue overflow\n";
            return;
        }
        //insert
        else
        {
            rear=(rear+1)%size;
            arr[rear]=x;
            cout<<"Pushed "<<x<<" into the Queue\n";
        }
    }
    //pop element, starting
    void pop()
    {
        //Empty
        if(IsEmpty())
        {
            cout<<"Queue UnderFlow\n";
            return;
        }
        //pop kar do
        else
        {
            if(front==rear)
            {
                cout<<"Popped "<<arr[front]<<" from the Queue\n";
                front=rear=-1;
            }
            else
            {
                cout<<"Popped "<<arr[front]<<" from the Queue\n";
               front=(front+1)%size;
            }
        }
    }

    //starting me konsa element rakha h
    int start()
    {
        if(IsEmpty())
       {
          cout<<"Queue is empty\n";
          return -1;
       }
       else
       {
        return arr[front];
       }
    }
};
    
int main()
{
  Queue q(5);
  q.push(5);
  q.push(15);
  q.push(51);
  q.push(125);
  q.pop();
  q.push(511);
  q.push(38);
  q.pop();
  
}

/*class Node
{   //using linked list
    public:
    int data;
    Node *next;
    
    Node(int value)
    {
        data=value;
        next=NULL;   
    }
};

class Queue
{
    Node *front;
    Node *rear;
    
    public:
    Queue()
    {
        front=rear=NULL;
    }

    //IsEmpty
    bool IsEmpty()
    {
        return front==NULL;
    }

    //push
    void push(int x)
    {
        if(IsEmpty())
        {
           cout<<"Pushed "<<x<<" into the queue\n";
           front=new Node(x);
           rear=front;
           return;
        }

        else
        {
           rear->next=new Node(x);
           cout<<"Pushed "<<x<<" into the queue\n";
           rear=rear->next;
        } 
    }

    //pop
    void pop(int x)
    {
        if(IsEmpty())
        {
            cout<<"Queue Underflow\n";
            return;
        }
        else
        {
            cout<<"Popped "<<front->data<<" from the queue\n";
            Node *temp=front;
            front=front->next;
            delete temp;
        }
    }

    //start me kon h
    int start()
    {
        if(IsEmpty())
        {
            cout<<"Queue is Empty\n";
            return -1;
        }
        else
        {
            return front->data;

        }
    }
};*/

int main()
{   //using STL
   // Queue q;
    queue<int>q;
    q.push(5);
    q.push(51);
    q.push(115);
    q.push(504);
    q.pop();
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.back()<<endl;
}