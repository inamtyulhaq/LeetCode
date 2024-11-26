// https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

// firstly, take the size of the array and divide it by 2 to get the size of the repeated element
// then, iterate through the array and check if the element is repeated the number of times as the size of the repeated element
// if it is, return the element
// if not, return -1

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int size = nums.size()/2;
        for(int i = 0; i < nums.size() - 1; i++)
        {
            int temp = 1;
            for(int j = i + 1; j < nums.size(); j++)
            {
                if(nums[i] == nums[j])
                {
                    temp++;
                }
            }
            if(temp == size)
            {
                return nums[i];
            }
        }
        return -1;
    }
};