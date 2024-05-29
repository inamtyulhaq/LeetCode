// https://leetcode.com/problems/sum-of-unique-elements/description/

// iterate in a nested for loop in the vector
// see, if the given number in the vector appears once in the vector or not using the bool variable
// if appear once, add.

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            bool appearOnce = true;
            for(int j = 0; j < nums.size(); j++)
            {
                if(j!=i && nums[i] == nums[j])
                {
                    appearOnce = false;
                    break;
                }
            }
            if(appearOnce)
            {
                sum+=nums[i];
            }
        }
        return sum;
    }
};
