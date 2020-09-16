#pragma once

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
 
//·´×ª¶þ²æÊ÷
class Solution226 {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr)
            return;

        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        invertTree(root->left);
        invertTree(root->right);
    }
};