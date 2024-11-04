// https://leetcode.com/problems/string-compression-iii/description/?envType=daily-question&envId=2024-11-04

// initialize an empty string comp
// initialize an integer i to 0
// take count = 0 and ch = word[i]
// while word[i] is equal to ch and count is less than 9 and i is less than the length of the word
// keep on incrementing count and i
// append the count and ch to the comp
// return the comp

class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        int i = 0;
        while(i < word.length())
        {
            int count = 0;
            char ch = word[i];
            while(word[i] == ch && count < 9 && i < word.length())
            {
                count++;
                i++;
            }
            comp += to_string(count) + ch;
        }
        return comp;
    }
};