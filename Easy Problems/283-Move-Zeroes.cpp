// https://leetcode.com/problems/move-zeroes/description/

// iterate through the array, if a zero is found, swap it with the next non-zero element
// continue this process until no more zeros are found
// O(n^2) time complexity, O(1) space complexity

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i = 0; i < nums.size();)
        {
            bool zeroMoved = false;
            for(int j = i; j < nums.size() - 1; j++)
            {
                if(nums[j] == 0 && nums[j+1] != 0)
                {
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                    zeroMoved = true;
                }
            }
            if(!zeroMoved)
            {
                break;
            }
        }
    }
};