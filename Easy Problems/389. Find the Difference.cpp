// https://leetcode.com/problems/find-the-difference/

// iterate through both strings, 
// through string t in outer loop and string s in inner loop
// if you find any element in both common, assign that index of s string to ' '
// as same element may be added to form string t
// once not found any match between both strings
// element at that index of the t string is the one being added to string s to form string t
// return element at that index

class Solution {
public:
    char findTheDifference(string s, string t) {
        char c;
        bool isFound;
        for(int i = 0; i < t.size(); i++)
        {
            for(int j = 0; j < s.size(); j++)
            {
                isFound = false;
                if(t[i] == s[j])
                {
                    s[j] = ' ';
                    isFound = true;
                    break;
                }
            }
            if(!isFound)
            {
                c = t[i];
            }
        }
        return c;
    }
};
