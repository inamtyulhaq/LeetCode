// https://leetcode.com/problems/ant-on-the-boundary/

// take a temp variable
// iterate through the array
// add the current element to the temp variable
// if the temp variable is 0, increment the count
// return the count

class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int count = 0, temp = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            temp += nums[i];
            if(temp == 0)
            {
                count++;
            }
        }
        return count;
    }
};