// https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/description/

// take it this way
// loop twice in the array using nested array
// simple divide each element (of outer loop) from every element (of inner loop)
// see if they match with k, simple count++

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) \
        {
            for (int j = 0; j < nums.size(); j++) 
            {
                if (nums[j] - nums[i] == k) {
                    count++;
                }
            }
        }
        return count;
    }
};
