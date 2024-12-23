// https://leetcode.com/problems/find-the-peaks/

// see the hint
// the solution is given up here
// the peak is the element which is greater than its neighbours
// so we can iterate through the array and check if the element is greater than its neighbours
// if it is then we can push the index of that element in the result vector
// and return the result vector at the end of the function

class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int>result;
        for(int i = 1; i < mountain.size() - 1; i++)
        {
            if(mountain[i] > mountain[i-1] && mountain[i] > mountain[i+1])
            {
                result.push_back(i);
            }
        }
        return result;
    }
};