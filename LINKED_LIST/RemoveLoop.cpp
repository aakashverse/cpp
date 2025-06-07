#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void removeLoop(Node* head) {
    if(!head || !head->next) 
    return;
        
    Node *slow=head,*fast=head;
    slow=slow->next;
    
    fast=fast->next->next;
        
    while(fast && fast->next){
        if(slow==fast)
        break;
                
        slow=slow->next;
        fast=fast->next->next;
    }
        
    //if loop exists    
    if(slow==fast){
        slow=head;
        // this check is needed when slow and fast both meet at the head of the LL
        if(slow==fast){
            while(fast->next!=slow){
                fast=fast->next;
            }
        }
            
        else{
            while(slow->next!=fast->next){
                slow=slow->next;
                fast=fast->next;
            }
        }
        // since fast->next is the looping point
        fast->next=NULL;
    }      
}