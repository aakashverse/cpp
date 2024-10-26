#include<bits/stdc++.h>
using namespace std;
                       //Various OpERATIONS ON STACK

class Stack
{//using Array
    int *arr;
    int size;
    int top;
    public:

    Stack(int s)
    {
        size=s;
        arr=new int[s];
        top=-1;
    }

    //push
    void push(int value)
    {
        if(top==size)
        {
        cout<<"stack overflow"<<endl;
        return;
        }

        else
        {
            top++;
            arr[top]=value;
            cout<<"pushed "<<value<<" into the stack"<<endl;
        }
    }

    //pop
    void pop()
    {
        if(top==-1)
        {
        cout<<"stack underflow"<<endl;
        return;
        }

        else
        top--;
    }

    //peak
    int peak()
    {
        if(top==-1)
        {
        cout<<"stack is empty"<<endl;
        return -1;
        }

        else
        return arr[top];
    }

    //isEmpty
    bool isEmpty()
    {
        return top==-1;
    }

    //isSize
    int isSize()
    {
        return top+1;
    }
};

// class Node
// {
//   //by LINKED LIST
//     int data;
//     Node *next;
//     public:

//     Node(int val)
//     {
//         data=val;
//         next=NULL;
//     }
   

//  class Stack
//  {
//     Node *top;
//     int size;
    
//     Stack()
//     {
//       top=NULL;
//       size=0;
//     }

//     //push
//     void push(int value)
//     {
//         Node *temp=new Node(value);
//         temp->next=top;
//         top=temp;
//         size++;
//     }

//     //pop
//     void pop()
//     {
//         if(top==NULL)
//         {
//         cout<<"Stack underflow\n";
//         return;
//         }

//         else
//         {
//             Node *temp=top;
//             top=top->next;
//             delete temp;
//         }
//     }

//     //peak
//     int peak()
//     {
//       if(top==NULL)
//       {
//         cout<<"stack is empty";
//         return -1;
//       }
//       else
//       {
//         return top->data;
//       }
//     }

//     //IsEmpty
//     bool IsEmpty()
//     {
//         return top==NULL;
//     }

//     //IsSize
//     int IsSize()
//     {
//         return size;
//     }
//  };
// };


int main()
{
    Stack s(5);
    s.push(5);
    s.push(9);
    s.push(3);
    s.push(1);
    //s.pop(9);
    cout<<s.peak()<<endl;
    cout<<s.isSize()<<endl;
    cout<<s.isEmpty()<<endl;
     
}