// https://leetcode.com/problems/maximum-number-of-integers-to-choose-from-a-range-i/

// use a set to store the banned integers
// iterate from 1 to n and check if the integer is banned or not
// if it is not banned, add it to the sum and check if the sum is greater than maxSum
// if it is greater, break the loop and return the count
// else increment the count and continue the loop
// return the count

class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        set<int>s(banned.begin(), banned.end());
        vector<int>notBanned;
        int count = 0, tempSum = 0;
        for(int i = 1; i <= n; i++)
        {
            if(s.find(i) != s.end())
            {
                continue;
            }
            if(tempSum + i > maxSum)
            {
                break;
            }
            tempSum += i;
            count++;
        }
        return count;
    }
};