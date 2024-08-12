// https://leetcode.com/problems/running-sum-of-1d-array/description/

// take an integer and a new vector
// simply keep on taking sum of value at each index of given vector ti that integer
// and keep on puhsing the integer value to the vector at every iteration
// that's the running sum out there

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>runningSum;
        int temp = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            temp += nums[i];
            runningSum.push_back(temp);
        }
        return runningSum;
    }
};
