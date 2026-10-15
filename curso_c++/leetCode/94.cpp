#include <bits/stdc++.h>

using namespace std;

struct TreeNode{
          int val;
      TreeNode *left;
      TreeNode *right;
};

class Solution {
    vector<int> ans;

    void inorder(TreeNode * root){
        if(root == NULL) return;

        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        ans.clear();
        inorder(root);

        return ans;
    }
};

int main(){

}