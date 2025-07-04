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

    int maxSum;
    int solve(TreeNode* root){
        if(!root) return 0;

        int l = solve(root->left);
        int r = solve(root->right);

        int neeche_milgya_answer = l + r + root->val; // (1)

        int koi_ek_acha = max(l,r) + root->val; // (2)

        int only_root_acha = root->val; // (3)

        maxSum = max(maxSum,max({neeche_milgya_answer,koi_ek_acha,only_root_acha})); 
        
        // most important part
        return max(koi_ek_acha,only_root_acha);
        
    }

    int maxPathSum(TreeNode* root) {
        maxSum = INT_MIN;
        solve(root);
        return maxSum;
    }
