#include<bits/stdc++.h>
using namespace std;


    class TreeNode{
    public:
        TreeNode* left;
        TreeNode* right;
        int val;

        TreeNode(int x){
            left = NULL;
            right = NULL;
            val = x;
        }
    };
    
    int diameter;
    int dfs(TreeNode* root){
        if(!root) return 0;
 
        int leftDepth  = dfs(root->left);
        int rightDepth = dfs(root->right);

        diameter = max(diameter, leftDepth+rightDepth);

        return 1 + max(leftDepth,rightDepth);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        diameter = 0;
        dfs(root);
        return diameter;
    }