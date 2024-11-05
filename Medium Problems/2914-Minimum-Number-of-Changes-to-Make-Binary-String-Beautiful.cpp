// https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/description/

// you need that every substring of even length has either only 0s or 1s
// now, minimally even number is 2 (that's also the hint given)
// now simply, iterate through the string (it is already even in size)
// see if current character and next character are equal or not
// if not, there needs to be a change done so that
// both characters are same (so that every even substring is beautiful)


class Solution {
public:
    int minChanges(string s) {
        int noOfChanges = 0;
        for(int i = 0; i < s.size(); i+=2)
        {
            if(s[i] != s[i+1])
            {
                noOfChanges++;
            }
        }
        return noOfChanges;
    }
};