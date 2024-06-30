// https://leetcode.com/problems/find-the-integer-added-to-array-i/description/

// there is a trick
// simply find the smallest number in both arrays
// and subtract smallest number of first array from smallest number of second array
// do see sample test cases
// arrays are always incremented by some number, same for all values of an array

class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int min1 = nums1[0], min2 = nums2[0];
        for(int i = 0; i < nums1.size(); i++)
        {
            if (nums1[i] < min1)
            {
                min1 = nums1[i];
            }
        }
        for(int i = 0; i < nums2.size(); i++)
        {
            if (nums2[i] < min2)
            {
                min2 = nums2[i];
            }
        }
        return min2-min1;
    }
};
