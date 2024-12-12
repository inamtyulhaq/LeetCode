// https://leetcode.com/problems/binary-tree-level-order-traversal/

// use a queue
// firstly push root into it
// now everytime, iterate till the queue length
// till the size,
// pop out the front element of queue (FIFO)
// now, if the left and right child of this node exist, then also push them to queue
// now push the data of the node to the vector
// when you will get out of this for loop,
// you would have already traversed the whole one level completely from left to right
// and if some level below exists, all its values would be in the queue now, ready to be iterated again
// remember to push this 1d vector to a 2d vector
// and for every iteration, the 1d vector must be empty at start

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>result;
        if(root == nullptr)
        {
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            vector<int>level = {};
            int size = q.size();
            for(int i = 0; i < size; i++)
            {
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left )
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
                level.push_back(temp->val);
            }
            result.push_back(level);
        }
        return result;
    }
};