// https://leetcode.com/problems/number-of-changing-keys/description/

// iterate through the string
// check if the difference between the current character and the next character is 32 or 0
// if not, increment the count
// return the count

class Solution {
public:
    int countKeyChanges(string s) {
        int count = 0;
        for(int i = 0; i < s.size() - 1; i++)
        {
            if(abs(s[i+1] - s[i]) != 32 && abs(s[i+1] - s[i]) != 0)
            {
                count++;
            }
        }
        return count;
    }
};