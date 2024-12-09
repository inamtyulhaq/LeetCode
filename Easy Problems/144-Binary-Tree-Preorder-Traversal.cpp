// https://leetcode.com/problems/binary-tree-preorder-traversal/

// simply follow the recursion technique
// push the current root value to vector
// go to left, keep on going left, until you find root = nullptr
// now go to right, keep on going right, until you find root = nullptr
// repeat this step for every subtree
// return the vector

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
    void preOrderTraversalBT(TreeNode* root, vector<int>& result)
    {
        if(root == nullptr)
        {
            return;
        }
        result.push_back(root->val);
        preOrderTraversalBT(root->left, result);
        preOrderTraversalBT(root->right, result);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>preorderValues = {};
        preOrderTraversalBT(root, preorderValues);
        return preorderValues;
    }
};