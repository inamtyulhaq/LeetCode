// https://leetcode.com/problems/find-closest-number-to-zero/

// firstly, sort the array
// then iterate through the array
// find the difference between the current element and 0
// if the difference is less than or equal to the closest difference, update the closest difference
// if the current element is greater than the previous closest element, update the closest element
// return the closest element

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int closest = INT_MAX, num = -1000000;
        for(int i = 0; i < nums.size(); i++)
        {
            int diff = abs(nums[i] - 0);
            if(diff <= closest)
            {
                closest = diff;
                if(nums[i] > num)
                {
                    num = nums[i];
                }
            }
        }
        return num;
    }
};