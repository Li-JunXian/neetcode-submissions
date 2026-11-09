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
    int height(TreeNode* root, int* diff) {
        if (root == nullptr) {
            return 0;
        }

        int left_height = 1 + height(root->left, diff);
        int right_height = 1 + height(root->right, diff);

        *diff = std::max(*diff, std::abs(left_height - right_height));

        return std::max(left_height, right_height);
    }

public:
    bool isBalanced(TreeNode* root) {
        int min_val = -1;
        int max_val = 1;
        int diff = 1;

        if (root == nullptr) {
            return true;
        }

        height(root, &diff);
        
        return ((diff >= min_val) && (diff <= max_val));
    }
};
