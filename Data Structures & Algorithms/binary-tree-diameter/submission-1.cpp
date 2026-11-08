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
private:
    int d = 0;

public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        
        d = std::max(d, left + right);

        return 1 + std::max(left, right);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        maxDepth(root);
        return d;
    }
};
