// https://leetcode.com/problems/single-number-ii/description/

// iterate using a nested for-loop in the vector
// now use a bool variable to see that if any value in the vector
// matches with any other value other than its own index
// if it matches, change bool value and break
// if doesn't match, simply add it to another variable and break

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int singleNum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            bool Repeats = false;
            for(int j = 0; j < nums.size(); j++)
            {
                if(nums[i] == nums[j] && i!=j)
                {
                    Repeats = true;
                    break;
                }
            }
            if(!Repeats)
            {
                singleNum = nums[i];
                break;
            }
        }
        return singleNum;
    }
};
