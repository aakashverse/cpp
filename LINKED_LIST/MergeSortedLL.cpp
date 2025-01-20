#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int value){
        data=value;
        next=NULL;
    }
};

Node* sortedMerge(Node* head1, Node* head2) {
    Node *temp1=head1,*temp2=head2;
    Node *head=new Node(0) ,*temp=head;
        
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data < temp2->data){
            temp->next = temp1;
            temp = temp1;
            temp1 = temp1->next;
        }
            
        else{          //(temp2->data <= temp1->data)
            temp->next = temp2;
            temp = temp2;
            temp2 = temp2->next;
        }
    }
        
    if(temp1!=NULL)
    temp->next=temp1;
    else
    temp->next=temp2;
        
    temp=head->next;
    delete head;
        
    return temp;
        
}
