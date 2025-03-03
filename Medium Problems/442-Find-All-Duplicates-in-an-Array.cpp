// https://leetcode.com/problems/find-all-duplicates-in-an-array/

// sort the array
// check if the current element is equal to the next element
// if it is, add it to the result vector and skip the next element
// return the result vector

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>result = {};
        for(int i = 0; i < nums.size() - 1; i++)
        {
            if(nums[i] == nums[i+1])
            {
                result.push_back(nums[i]);
                i++;
            }
        }
        return result;
    }
};