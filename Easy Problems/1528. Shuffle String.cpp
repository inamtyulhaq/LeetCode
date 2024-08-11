// https://leetcode.com/problems/shuffle-string/

// take a new string equal to the given string
// now iterate through the given string,
// for every index of the given string
// put it in indices[i]th index of the new string you just took
// return

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string shuffledString = s;
        for(int i = 0; i < s.size(); i++)
        {
            shuffledString[indices[i]] = s[i];
        }
        return shuffledString;
    }
};
