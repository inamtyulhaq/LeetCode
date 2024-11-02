// https://leetcode.com/problems/delete-characters-to-make-fancy-string/?envType=daily-question&envId=2024-11-01

// take a new string
// see if the current character is same as the next two characters
// if yes, skip the current character 
// else add the current character to the new string
// return the new string

class Solution {
public:
    string makeFancyString(string s) {
        string fancyString = "";
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == s[i+1] && s[i+1] == s[i+2])
            {
                continue;
            }
            fancyString += s[i];
        }
        return fancyString;
    }
};