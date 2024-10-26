#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node*next;
    Node(int value)     //constructor
    {
        data=value;
        next=NULL;
    }
};

 int main()
 {
    //Node A1(4); //Statically created node
  Node*Head;
  Head=new Node(4);   //Dynamically created node

  cout<<Head->data<<endl;
  
  cout<<Head->next<<endl;

 }