#include<iostream>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;

 Node(int data)
   {
     val=data;
     next=NULL;
   }
};

int InsertAtHead(Node* &head,int val)
{
    Node* new_node=new Node(val);
    new_node->next=head;
    head=new_node;
}

void display(Node* head)
{
  Node* temp=head;
  while(temp!=NULL)
  {
    cout<<temp->val<<"->";
    temp=temp->next;
  }   
  cout<<"NULL"<<endl;
}

int InsertAtend(Node* &head,int val)
{
  Node* new_node=new Node(val);
  Node* temp=head;
  while(temp->next!=NULL)
  {
    temp=temp->next;
  }
  temp->next=new_node;
}

  int main()
{
 Node* head=NULL;
 InsertAtHead(head,9);
 display(head);
 InsertAtHead(head,5);
 display(head);
 InsertAtend(head,7);
 display(head);

 return 0;
}
