#pragma once

  struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  };
 
class Solution {
public:
    int sum = 0;
    TreeNode* convertBST(TreeNode* root) {
        if (root == nullptr)
            return nullptr;


        convertBST(root->right);
        sum += root->val;
        root->val = sum;
        
        convertBST(root->left);

        return root;
    }
};