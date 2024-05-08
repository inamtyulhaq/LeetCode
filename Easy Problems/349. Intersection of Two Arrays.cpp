// https://leetcode.com/problems/intersection-of-two-arrays/description/

// Iterate using nested for loop
// For unique numbers in result vector, use a bool
// such that it iterates to find if that number is already in result vector or not
// return the result vector

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for(int i = 0; i < nums1.size(); i++)
        {
            for(int j = 0; j < nums2.size(); j++)
            {
                if(nums1[i] == nums2[j])
                {
                    bool found = false;
                    for(int k = 0; k < result.size(); k++)
                    {
                        if(nums1[i] == result[k])
                        {
                            found = true;
                            break;
                        }
                    }
                    if (!found)
                    {
                        result.push_back(nums1[i]);
                    }
                }
            }
        }
        return result;
    }
};
