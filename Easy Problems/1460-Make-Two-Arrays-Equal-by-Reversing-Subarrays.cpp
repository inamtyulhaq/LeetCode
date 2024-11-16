// https://leetcode.com/problems/make-two-arrays-equal-by-reversing-subarrays/submissions/1453919202/

// sort both the vectors
// compare the elements of both the vectors
// if any element is not equal return false
// else return true

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(), target.end());
        sort(arr.begin(), arr.end());
        for(int i = 0; i < target.size(); i++)
        {
            if(target[i] != arr[i])
            {
                return false;
            }
        }
        return true;
    }
};