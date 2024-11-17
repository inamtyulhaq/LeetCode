// https://leetcode.com/problems/special-array-i/description/

// iterate through the array
// if the current element and the next element are both odd or both even, return false
// if the loop completes, return true

class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        for(int i = 0; i < nums.size() - 1; i++)
        {
            if(nums[i] % 2 != 0 && nums[i+1] % 2 != 0 ||
               nums[i] % 2 == 0 && nums[i+1] % 2 == 0)
            {
                return false;
            }
        }
        return true;
    }
};