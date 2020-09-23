 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 };

class Solution968 {
public:
    int minCameraCover(TreeNode* root) {
        int ret = 0;


        if (bf(root, ret) == 0)
        {
            ret++;
        }
        return ret;

    }

    //0：该节点无覆盖
    //    1：本节点有摄像头
     //   2：本节点有覆盖

    int bf(TreeNode* root, int& num) {
        if (root == nullptr)
            return 2;


        int left = bf(root->left, num);
        int right = bf(root->right, num);

        if (left == 2 && right == 2) return 0;

        if (left == 0 || right == 0) {
            num++;
            return 1;
        }

        if (left == 1 || right == 1) return 2;

        return -1;
    }
};