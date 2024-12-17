// https://leetcode.com/problems/check-if-a-string-is-an-acronym-of-words/

// iterate through the string
// add the first letter of each word to a new string
// compare the new string with the given string
// if they are equal, return true
// else return false

class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string ss = "";
        for(int i = 0; i < words.size(); i++)
        {
            ss += words[i][0];
        }
        return ss == s;
    }
};