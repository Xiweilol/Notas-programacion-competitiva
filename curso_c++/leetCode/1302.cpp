#include <bits/stdc++.h>

using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int maxDep(TreeNode*root, int dep){
        if(root == NULL) return dep-1;

        return max(maxDep(root->left,dep+1),maxDep(root->right,dep+1));
    }

    int suma(TreeNode*root,int dep,int maximadeep){
        if(!root) return 0;

        if(dep == maximadeep){
            return root->val;
        }

        int l = suma(root->left,dep+1,maximadeep);
        int r = suma(root->right,dep+1,maximadeep);

        return l + r;
    }
public:
    int deepestLeavesSum(TreeNode* root) {
        int maxima = maxDep(root,0);

        return suma(root,0,maxima);
    }
};