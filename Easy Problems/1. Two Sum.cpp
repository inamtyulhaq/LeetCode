// Question:
// https://leetcode.com/problems/two-sum/description/

// Explanation:
// # Intuition
// The first problem on LeetCode. I tried it many times failing to solve. 
// It's okay. The problem is easy. If you have basic knowledge of vectors in C++ (as I solved it in C++), this problem will be quite easy for you. 
// The problem is that, you are given an array and another integer variable. 
// Now find any two such values of the array such that their sum equals that another integer variable.
// Those two integers will always be there.
// Remember, we have to return the indices, not the values of those two integers. 
// Also, we have to return the vector as its given in the class. See default code template.

// # Approach
// Declare a new vector.
// After that, use a nested for loop, iterate both loops till the size of the given vector.
// First loop will start from i = 0 (first index of the vector),
// and the loop inside will start from the j = i+1 (so that same integer is not repeated twice).
// Ok, now for every i, loop all other values of the vector (using nested for loop - see code).
// If any two such values are found, that their sum is equal to the given integer variable,
// push them to the newly declared vector by you and simply use break statement to terminate the program.

// Solution:
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>indices;
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i+1; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    indices.push_back(i);
                    indices.push_back(j);
                    break;
                }
            }
        }
        return indices;
    }
};
