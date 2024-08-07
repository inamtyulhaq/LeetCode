// https://leetcode.com/problems/concatenation-of-array/

// make a new vector of size twice of the given array
// iterate through the given array's size
// for element at every index of given array
// assign it to the new vector
// also assign it to i+(the size of the given array)th index of the new vector
// it's given in the problem statement
 
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        vector<int>result(nums.size()*2);
        for(int i = 0; i < nums.size(); i++)
        {
            result[i] = nums[i];
            result[i+nums.size()] = nums[i];
        } 
        return result;
    }
};
