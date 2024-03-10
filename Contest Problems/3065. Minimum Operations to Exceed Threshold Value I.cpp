// Question
// https://leetcode.com/contest/biweekly-contest-125/problems/minimum-operations-to-exceed-threshold-value-i/

// Explanation:
// simply did that
// counted all those elements less than k
// just outputted the count
// these are all those values which have to be removed

// Solution:
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
     for(int i = 0; i < nums.size(); i++)
     {
         if(nums[i] < k)
         {
             count++;
        }
     }
        return count;
    }
};
