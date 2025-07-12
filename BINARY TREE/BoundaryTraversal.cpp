#include<bits/stdc++.h>
using namespace std;

class TreeNode{
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int x){
        data = x;
        TreeNode* left  = nullptr;
        TreeNode* right = nullptr;
    }
};

    void leftSubTree(TreeNode* root,vector<int>&res){
        if(!root || (!root->left && !root->right))
        return;

        res.push_back(root->data);
        leftSubTree(root->left,res);
        leftSubTree(root->right,res);
    }

    void Leaf(TreeNode* root,vector<int>&res){
        if(!root)
        return;

        if(!root->left && !root->right)
        res.push_back(root->data);

        Leaf(root->left,res);
        Leaf(root->right,res);
    }
    
    void rightSubTree(TreeNode* root,vector<int>&res){
        if(!root || (!root->left && !root->right))
        return;

        rightSubTree(root->left,res);
        rightSubTree(root->right,res);
        res.push_back(root->data); // in reverse order
    }


    vector <int> boundary(TreeNode* root){
    	//your code goes here
        vector<int>res;
        res.push_back(root->data);
        // leftsub tree ke saare elements daaldo
        leftSubTree(root->left,res);
        // leaf nodes ko daaldo
        if(root->left || root->right)
        Leaf(root,res);
        // rightsub tree ke saare elements ko daaldo
        rightSubTree(root->right,res);

        return res;
    }

