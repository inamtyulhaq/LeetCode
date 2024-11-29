// https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/

// iterate through the array
// for each element, iterate through the array again
// if the sum of the two elements is less than target, increment count
// return count

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count = 0;
        for(int i = 0; i < nums.size() - 1; i++)
        {
            for(int j = i+1; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] < target)
                {
                    count++;
                }
            }
        }
        return count;
    }
};