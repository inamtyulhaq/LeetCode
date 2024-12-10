// https://leetcode.com/problems/binary-tree-inorder-traversal/description/

// use the classic recursive approach
// firstly iterate till the left most node,
// print it, then print root, then print right
// and then return back to the node where you came from
// keep on repeating until you reach the root again
// (basically, a recursive approach)

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
    void inorder(TreeNode* root, vector<int>& result)
    {
        if(root == nullptr)
        {
            return;
        }
        inorder(root->left, result);
        result.push_back(root->val);
        inorder(root->right, result);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>result = {};
        inorder(root, result);
        return result;
    }
};