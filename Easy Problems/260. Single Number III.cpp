// https://leetcode.com/problems/single-number-iii/description/

// iterate using a nested for-loop in the vector
// now use a bool variable to see that if any value in the vector
// matches with any other value other than its own index
// if it matches, change bool value and break
// if doesn't match, simply push the element to the vector
// and afterwards return the vector
// as per said in problem statement, there can only be two values which appear once
// so no need to set the size of vector in start
// there will always be two values

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>values;
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
                values.push_back(nums[i]);
            }
        }
        return values;
    }
};
