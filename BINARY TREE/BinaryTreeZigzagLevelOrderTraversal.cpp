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
   
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(!root) return res;

        stack<TreeNode*>st1; 
        stack<TreeNode*>st2; 
        st1.push(root);

        while(!st1.empty() || !st2.empty()){
            vector<int>temp;
            //left to right
            if(!st1.empty()){
                while(!st1.empty()){
                    TreeNode* node = st1.top();
                    st1.pop(); 
                    temp.push_back(node->val);

                    if(node->left)
                    st2.push(node->left);

                    if(node->right)
                    st2.push(node->right);
                }
            }
                //right to left
            else{
                while(!st2.empty()){
                    TreeNode* node = st2.top();
                    st2.pop();
                    temp.push_back(node->val);

                    if(node->right)
                    st1.push(node->right);

                    if(node->left)
                    st1.push(node->left);
                }

            }    
            res.push_back(temp);
        }

        return res;
    }