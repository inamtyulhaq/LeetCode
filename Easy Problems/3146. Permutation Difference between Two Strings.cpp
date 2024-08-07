// https://leetcode.com/problems/permutation-difference-between-two-strings/

// iterate through both strings using nested for loop
// now just see if any character in both strings match
// just take their difference (for absolute difference, use a condition of if-else)
// just keep on adding that difference and return

class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int count = 0;
        for(int i = 0; i < s.size(); i++)
        {
            for(int j = 0; j < t.size(); j++)
            {
                if(s[i] == t[j])
                {
                    if(i>j)
                    {
                        count += i - j;
                    }
                    else
                    {
                        count += j - i;
                    }
                }
            }
        }
        return count;
    }
};
