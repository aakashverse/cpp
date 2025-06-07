#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    Node* left;
    Node* right;
    int data;

    Node(int val){ // constructor to the tree
        left = NULL;
        right = NULL;
        data  = val;
    }
};

pair<int,int> maxSum(Node* root){
    if(!root) return {0,0};
    
    auto left = maxSum(root->left);
    auto right = maxSum(root->right);
    
    // include current node, can't include child
    int include = root->data+left.second+right.second;
    
    // exclude current node, select max from  child
    int exclude = max(left.first,left.second) + max(right.first,right.second);
    
    return {include,exclude};
    
}


int getMaxSum(Node *root) {
    // code here
    auto res = maxSum(root);
    return max(res.first,res.second);
}

