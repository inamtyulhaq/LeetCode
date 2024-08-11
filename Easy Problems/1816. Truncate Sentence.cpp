// https://leetcode.com/problems/truncate-sentence/description/ 

// iterate through the string
// if you find any space ascii, increment an integer count
// if found integer count equal to k, break
// else simply append each index of given string to a new string

class Solution {
public:
    string truncateSentence(string s, int k) {
        string s1;
        int count = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 32)
            {
                count++;
            }
            if(count == k)
            {
                break;
            }
            s1+=s[i];
        }
        return s1;
    }
};
