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

//M-1
// TC=O(n), SC=O(1)   [Most Optimized]
bool detectLoop(Node* head) {
    Node *slow=head;
    Node *fast=head->next;
        
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
            
        if(slow==fast)
        return 1;
    }
    return 0;
} 

//M-2
// TC=O(n), SC=O(n)
bool detectLoop(Node* head) {
    Node *cur=head;
    unordered_map<Node*,bool>mp;
        
    while(cur!=NULL){
        if(mp[cur]==1) //if found in map it means you have traversed this node earlier i.e. a loop is found
        return 1;
            
        mp[cur]=1;
        cur=cur->next;
    }
    return 0;
}

//M-3
//TC=O(n^2), SC=O(n)
bool check(vector<Node*>visited,Node* cur){
    for(int i=0;i<visited.size();i++){
        if(visited[i]==cur)
        return 1;
    }
    return 0;
}
  
bool detectLoop(Node* head) {
    Node *cur=head;
    vector<Node*>visited;
        
    while(cur!=NULL){
        if(check(visited,cur))
        return 1;
            
        visited.push_back(cur);
        cur=cur->next;
    }
    return 0;
}    