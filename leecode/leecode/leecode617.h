
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  };

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if (t1 == nullptr && t2 == nullptr)
            return nullptr;
        TreeNode* root = new TreeNode(0);
        dfs(t1, t2, root);
        return root;
    }

    void dfs(TreeNode* t1, TreeNode* t2, TreeNode* tree) {
        if (t1 == nullptr && t2 == nullptr)
            return;

        if (t1 != nullptr)
            tree->val = tree->val + t1->val;
        if (t2 != nullptr)
            tree->val = tree->val + t2->val;

        if ((t1 != nullptr && t1->left != nullptr) ||
            t2 != nullptr && t2->left != nullptr)
            tree->left = new TreeNode(0);

        if ((t1 != nullptr && t1->right != nullptr) ||
            t2 != nullptr && t2->right != nullptr)
            tree->right = new TreeNode(0);

        dfs(t1 != nullptr ? t1->left: nullptr, t2 != nullptr ? t2->left:nullptr, tree->left);
        dfs(t1 != nullptr ? t1->right : nullptr, t2 != nullptr ? t2->right : nullptr, tree->right);


    }
};