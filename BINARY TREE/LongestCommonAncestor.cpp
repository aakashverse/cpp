#include<bits/stdc++.h>
using namespace std;


class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)
        return NULL;

        if(root == p || root == q)
        return root;

        TreeNode* leftCA  = lowestCommonAncestor(root->left,p,q);
        TreeNode* rightCA = lowestCommonAncestor(root->right,p,q);

        if(leftCA != NULL && rightCA != NULL)
        return root;

        if(leftCA != NULL)
        return leftCA;

        return rightCA;

    }