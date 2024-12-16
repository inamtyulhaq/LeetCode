// https://leetcode.com/problems/keep-multiplying-found-values-by-two/

// use set
// if original is found in the set, then multiply it by 2
// if original is not found in the set, then return the original value

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        bool isFound = true;
        set<int>s(nums.begin(), nums.end());
        while(isFound)
        {
            if(s.find(original) == s.end())
            {
                isFound = false;
                break;
            }
            else
            {
                original *= 2;
            }
        }
        return original;
    }
};