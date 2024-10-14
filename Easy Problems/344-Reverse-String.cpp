// https://leetcode.com/problems/reverse-string/description/

// create a new vector of same size
// assign elements of given vector to the new vector in reverse order
// at the end assign the new vector to given vector as the original vector will be checked for solution

class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char>s1(s.size());
        for(int i = 0; i < s.size(); i++)
        {
            s1[s.size()-1-i] = s[i];
        }
        s = s1;
    }
};
