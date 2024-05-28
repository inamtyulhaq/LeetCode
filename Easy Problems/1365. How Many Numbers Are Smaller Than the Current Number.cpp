// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/description/

// iterate from 0 till the size of the vector
// simply iterate again using nested loop (2nd loop inside the 1st one)
// check the condition if both vector values don't match and that nums[i] (the value we are checking)
// is greater than other values, increment the count accordingly for how many values is it greater than
// push that count to the vector
// return the vector

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector <int> smallNums;
        for(int i = 0; i < nums.size(); i++)
        {
            int count = 0;
            for(int j = 0; j < nums.size(); j++)
            {
                if(nums[i] != nums[j] && nums[i] > nums[j])
                {
                    count++;
                }
            }
            smallNums.push_back(count);
        }
        return smallNums;
    }
};
