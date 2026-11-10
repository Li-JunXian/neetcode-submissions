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
    bool isSameVal(int pVal, int qVal) {
        if (pVal == qVal) {
            return true;
        }

        return false;
    }

public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) {
            return true;
        } else if (p != nullptr && q != nullptr) {
            return isSameVal(p->val, q->val) && 
                   isSameTree(p->left, q->left) && 
                   isSameTree(p->right, q->right);
        }

        return false;
    }
};
