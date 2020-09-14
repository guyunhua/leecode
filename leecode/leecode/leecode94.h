#pragma once
#include<vector>
#include<stack>

using namespace std;
//Definition for a binary tree node.
struct TreeNode {
   int val;
   TreeNode* left;
   TreeNode* right;
   TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    
};

//94. 二叉树的中序遍历
class Solution94 {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        ret.clear();
        insert(root);
        return ret;
    }

    //迭代法
    vector<int>  inorderTraversaldd(TreeNode* root) {
        vector<int> ret1;
        stack<TreeNode*> stack;
        while (root != nullptr || !stack.empty()) {
            while (root != nullptr)
            {
                stack.push(root);
                root = root->left;
            }

            root = stack.top();
            stack.pop();
            ret1.push_back(root->val);
            root = root->right;
        }
        return ret;
    }

private:
    void insert(TreeNode* root) {
        if (root == nullptr) {
            return;
        }

        insert(root->left);
        ret.push_back(root->val);
        insert(root->right);

    }
    
    vector<int> ret;
};