// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

// iterate through the array
// if the element is equal to the target
// push the index to the result vector
// iterate through the array until the element is not equal to the target
// push the index to the result vector
// return the result vector
// if the target is not found, return -1, -1

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>result;
        if(nums.size() >= 1)
        {
            for(int i = 0; i < nums.size(); i++)
            {
                if(nums[i] == target)
                {
                    result.push_back(i);
                    while(i < nums.size()-1 && nums[i+1] == target)
                    {
                        i++;
                    }
                    result.push_back(i);
                    return result;
                }
            }
        }
        result.push_back(-1);
        result.push_back(-1);
        return result;
    }
};