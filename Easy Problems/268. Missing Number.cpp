// https://leetcode.com/problems/missing-number/

//

class Solution {
public:
    long long missingNumber(vector<int>& nums) {
        long long result = 0, l = nums.size();
        for(long long i = 0; i <= l; i++)
        {
            bool a = false;
            for(long long j = 0; j < l; j++)
            {
                if(i == nums[j])
                {
                    a = true;
                }
            }
            if(a == false)
            {
                result = i;
            }
        }
        return result;
    }
};
