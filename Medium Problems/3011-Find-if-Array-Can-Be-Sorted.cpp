// https://leetcode.com/problems/find-if-array-can-be-sorted/description/?envType=daily-question&envId=2024-11-06

// what a problem i must say
// ok, so basically it has three things
// 1. adjacent elements
// 2. swapping
// 3. same number of set bits
// now do this thing 
// take the code of bubble sort
// and add this condition of checking that whether
// two adjacent elements have same number of set bits or not
// that's it
// + do add swapped bool variable
// if this variable is still false at end of any pass,
// it means that the array is sorted
// break and return true
// can also use continue to avoid checking an 'if' condition 
// if the required case of nums[j]>nums[j+1] && number of set bits of nums[j] == 
// number of set bits of nums[j+1]
// that's it the problem

class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < nums.size(); i++)
        {
            bool isSwapped = false;
            for(int j = 0; j < n-1; j++)
            {
                if(nums[j] > nums[j+1] && __builtin_popcount(nums[j]) ==
                __builtin_popcount(nums[j+1]))
                {
                    int temp = nums[j+1];
                    nums[j+1] = nums[j];
                    nums[j] = temp;
                    isSwapped = true;
                    continue;
                }
                if(nums[j] > nums[j+1] && __builtin_popcount(nums[j]) !=
                __builtin_popcount(nums[j+1]))
                {
                    return false;
                }
            }
            if(!isSwapped)
            {
                break;
            }
            n--;
        }
        return true;
    }
};