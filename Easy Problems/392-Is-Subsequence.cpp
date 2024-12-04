// https://leetcode.com/problems/is-subsequence/

// iterate through the subsequence
// for every character in the subsequence, iterate through the string t
// for every nested loop iteration, increment the index in the string t
// if the character in the subsequence is equal to the character in the string t, increment the count
// if the count is equal to the size of the subsequence, return true
// else return false

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int size = s.size(), count = 0, temp = 0;
        for(int i = 0; i < s.size(); i++)
        {
            for(int j = temp; j < t.size(); j++)
            {
                temp++;
                if(s[i] == t[j])
                {
                    count++;
                    break;
                }
            }
        }
        if(count == size)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m = s.size(), n = t.size(), i = 0, j = 0;
        while(i < m && j < n)
        {
            if(s[i] == t[j])
            {
                i++;
            }
            j++;
        }
        return i == m;
    }
};