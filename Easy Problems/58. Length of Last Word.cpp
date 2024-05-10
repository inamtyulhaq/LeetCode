// https://leetcode.com/problems/length-of-last-word/

// A simple yet tricky problem
// Simply length++ if your string character is not space
// for a tricky part, if your character is space and length is greater than 0 (it means you already found a character of a word before)
// and now you have encountered a space after a word
// just break and return the length

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        for (long long i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                length++;
            } else if (s[i] == ' ' && length > 0) {
                break;
            }
        }
        return length;
    }
};
