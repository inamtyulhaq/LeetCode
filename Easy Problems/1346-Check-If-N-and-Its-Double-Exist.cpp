// https://leetcode.com/problems/check-if-n-and-its-double-exist/

// iterate through the array
// for each element, iterate through the array again
// if the element is double of the current element or the current element is double of the element
// return true
// if no such condition is true, return false

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i = 0; i < arr.size() - 1; i++)
        {
            for(int j = i+1; j < arr.size(); j++)
            {
                if(arr[i] == 2 * arr[j] || arr[j] == 2 * arr[i])
                {
                    return true;
                }
            }
        }
        return false;
    }
};