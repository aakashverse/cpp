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

Node* reverse(Node* head){
    Node *prev=NULL,*cur=head,*nex=NULL;
        
    while(cur!=NULL){
        nex=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nex;
    }
    return prev;
}
  
Node* addTwoLists(Node* num1, Node* num2) {
    
    num1 = reverse(num1);
    num2 = reverse(num2);
        
    Node *head=new Node(0),*temp=head;
    int carry=0;
        
    while(num1!=NULL || num2!=NULL || carry!=0){
        int sum=carry;
        if(num1!=NULL){
            sum += num1->data;
            num1 = num1->next;
        }
            
        if(num2!=NULL){
            sum += num2->data;
            num2 = num2->next;
        }
        
        temp->next=new Node(sum%10);
        carry=sum/10;
        temp=temp->next;
    }
        
    Node* result = reverse(head->next);
    //skip leading zeroes
    while(result!=NULL && result->data==0)
    result=result->next;
        
    return result;
}



