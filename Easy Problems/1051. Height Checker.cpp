// https://leetcode.com/problems/height-checker/

// make another vector containing same elements like heights vector
// now sort that vector
// now just simple compare both using a simple for loop
// increment if they don't match
// return the count

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count = 0;
        int n = heights.size();
        vector<int>expect (n);
        for(int i = 0; i < expect.size(); i++)
        {
            expect[i] = heights[i];
        }
        sort(expect.begin(), expect.end());
        for(int i = 0; i < heights.size(); i++)
        {
            if(heights[i] != expect[i])
            {
                count++;
            }
        }
        return count;
    }
};
