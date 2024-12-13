// https://leetcode.com/problems/maximum-depth-of-binary-tree/description/

// use the recursive approach
// find the height of left and right subtrees
// and then return the 1+ max of left and right subtrees

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
public:
    int maxDepth(TreeNode* root) {
        if(root == nullptr)
        {
            return 0;
        }
        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);
        return 1 + max(lh, rh);
    }
};