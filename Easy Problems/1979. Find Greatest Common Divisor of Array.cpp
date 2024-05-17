// https://leetcode.com/problems/find-greatest-common-divisor-of-array/

// First, find the greatest number in array
// then the least (see the two for loops used)
// simply iterate from min number till 1 and break
// whenever you find a number by whom both min and max number divides exactly

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max = 0, ans = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > max)
            {
                max = nums[i];
            }
        }
        int min = max;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] < min)
            {
                min = nums[i];
            }
        }
        for(int i = min; i >= 1; i--)
        {
            if(min % i == 0 && max % i ==0)
            {
                ans = i;
                break;
            }
        }
        return ans;
    }
};
