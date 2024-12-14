// https://leetcode.com/problems/same-tree/

// use the classic recursive approach
// if both nodes are pointing to null, return true
// any one of them pointing to null, return false
// now go on recursion, everytime check this for left and right node
// also check if the values of both nodes are same or not
// it will return true once all conditions return true
// else return false

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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q == nullptr)
        {
            return true;
        }
        if(p == nullptr || q == nullptr)
        {
            return false;
        }
        return ((p->val == q->val) && isSameTree(p->left, q->left)
        && isSameTree(p->right, q->right));
    }
};