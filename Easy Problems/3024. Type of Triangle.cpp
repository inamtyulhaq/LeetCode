// https://leetcode.com/problems/type-of-triangle/description/

// implement the simple logic of triangle type and return the type of triangle

class Solution {
public:
    string triangleType(vector<int>& nums) {
        string str = "none";
            if(nums[0] == nums[1] && nums[1] == nums[2])
            {
                str = "equilateral";
            }
            else if (nums[0] + nums[1] <= nums[2] || nums[0] + nums[2] <= nums[1] || nums[1] +                 nums[2] <= nums[0])
            {
                str = "none";
            }
            else if(nums[0] == nums[1] || nums[0] == nums[2] || nums[1] == nums[2])
            {
                str = "isosceles";
            }
            else if(nums[0] + nums[1] > nums[2] && nums[0] + nums[2] > nums[1] && nums[1] +                 nums[2] > nums[0])
            {
                str = "scalene";
            }
        return str;
    }
};
