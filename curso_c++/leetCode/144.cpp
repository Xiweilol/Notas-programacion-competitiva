#include <bits/stdc++.h>

using namespace std;
struct TreeNode{
          int val;
      TreeNode *left;
      TreeNode *right;
};
class Solution {
    vector <int> ans;

    void preorder(TreeNode* root){
        if(root){
            ans.push_back(root->val);
            preorder(root->left);
            preorder(root->right);
        }
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        ans.clear();
        preorder(root);

        return ans;
    }
};
int main(){

}