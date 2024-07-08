// https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/

// use if-else conditions
// note:
// there is a better approach:
// simply increment the number of steps if any element in the array doesn't exactly divide by 3
// reason:
// either it will be incremented by 1 or decremented by 1 in any case to make it exactly divisible by 3
// my approach may not provide best time complexity

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int steps = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] % 3 != 0)
            {
                if((nums[i]-1) % 3 == 0)
                {
                    steps++;
                }
                else if((nums[i]+1) % 3 == 0)
                {
                    steps++;
                }
                else if((nums[i]-2) % 3 == 0)
                {
                    steps+=2;
                }
                else if((nums[i]+2) % 3 == 0)
                {
                    steps+=2;
                }
            }
        }
        return steps;
    }
};
