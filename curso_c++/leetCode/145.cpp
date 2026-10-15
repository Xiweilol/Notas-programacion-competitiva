#include <bits/stdc++.h>

using namespace std;

struct TreeNode{
          int val;
      TreeNode *left;
      TreeNode *right;
};

class Solution {
    vector<int> ans;

    void postorder(TreeNode* root){
        if(root == NULL) return;

        postorder(root->left);
        postorder(root->right);

        ans.push_back(root->val);
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        ans.clear();

        postorder(root);

        return ans;
    }
};