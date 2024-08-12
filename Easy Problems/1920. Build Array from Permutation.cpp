// https://leetcode.com/problems/build-array-from-permutation/description/

// simply do as written in the statement
// every index of new array should be assigned nums[nums[i]]
// inner nums at that 'i' returns a value which is again used as an index
// to assign value at that new index to our array

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector <int>newArray(nums.size());
        for(int i = 0; i < nums.size(); i++)
        {
            newArray[i] = nums[nums[i]];
        }
        return newArray;
    }
};
