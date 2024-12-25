// https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/

// firstly, take all the elements in a set and sort the array in descending order
// then iterate through the array and check if the negative of the element is present in the set
// if it is present, then return the element
// if no such element is found, return -1

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        set<int>ss(nums.begin(), nums.end());
        sort(nums.begin(), nums.end(), greater<int>());
        for(int i = 0; i < nums.size(); i++)
        {
            if(ss.find(nums[i]-nums[i]-nums[i]) != ss.end())
            {
                return nums[i];
            }
        }
        return -1;
    }
};