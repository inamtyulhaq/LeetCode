// https://leetcode.com/problems/single-number/description/

// simply use bitwise XOR

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int num : nums) {
            result ^= num;
        }
        return result;
    }
};
