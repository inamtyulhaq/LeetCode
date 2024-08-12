// https://leetcode.com/problems/find-the-number-of-good-pairs-i/description/

// iterate through both vectors using a nested loop
// simply for every value in first vector, check for nums1[i] % (nums2[j]*k) == 0
// for every value at index 'j' of second vector
// increment the count if found true (==0)
// return the count

class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int count = 0;
        for(int i = 0; i < nums1.size(); i++)
        {
            for(int j = 0; j < nums2.size(); j++)
            {
                if(nums1[i] % (nums2[j]*k) == 0)
                {
                    count++;
                }
            }
        }
        return count;
    }
};
