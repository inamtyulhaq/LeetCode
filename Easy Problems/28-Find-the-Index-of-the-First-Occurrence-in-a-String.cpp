// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

// iterate through the original string
// if the current character matches the first character of the needle
// check if the next characters match the needle
// if they do, return the index
// if they don't, continue iterating
// if the loop ends, return -1

class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i = 0; i < haystack.size(); i++)
        {
            if(haystack[i] == needle[0])
            {
                int temp = i;
                bool isMatch = true;
                for(int j = 0; j < needle.size(); j++)
                {
                    if(haystack[temp] != needle[j])
                    {
                        isMatch = false;
                        break;
                    }
                    temp++;
                }
                if(isMatch)
                {
                    return i;
                }
            }
        };
        return -1;
    }
};