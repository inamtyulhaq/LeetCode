// https://leetcode.com/problems/contains-duplicate/

// transfer all elements of the vector to the set
// if the size of both the set and the vector is same, return false 
// meaning all elements are unique, as set only has unique elements
// else return true, meaning given vector has elements appearing twice

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> numsSet(nums.begin(), nums.end());
        if(nums.size() == numsSet.size())
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};
