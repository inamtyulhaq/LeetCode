// https://leetcode.com/problems/sort-array-by-parity/

// take three vectors
// one for even numbers
// one for odd numbers
// one for result
// iterate through the input vector
// if the number is even, push it to the even vector
// if the number is odd, push it to the odd vector
// iterate through the even vector and push all the elements to the result vector
// iterate through the odd vector and push all the elements to the result vector
// return the result vector

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        vector<int>result;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] % 2 == 0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }
        for(int i = 0; i < even.size(); i++)
        {
            result.push_back(even[i]);
        }
        for(int i = 0; i < odd.size(); i++)
        {
            result.push_back(odd[i]);
        }
        return result;
    }
};