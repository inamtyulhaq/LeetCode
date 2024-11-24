// https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/submissions/1461815052/

// iterate through the vector 
// for each element, iterate through the rest of the vector
// if there are any duplicates, add them to the result vector
// return the result vector

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>result;
        for(int i = 0; i < nums.size() - 1; i++)
        {
            for(int j = i+1; j < nums.size(); j++)
            {
                if(nums[i] == nums[j])
                {
                    result.push_back(nums[i]);
                }
            }
        }
        return result;
    }
};