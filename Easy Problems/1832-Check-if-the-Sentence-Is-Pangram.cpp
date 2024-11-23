// https://leetcode.com/problems/check-if-the-sentence-is-pangram/description/

// use a set
// insert all alphabets in the set
// iterate through the sentence and erase the character from the set if it is found
// if the set is empty return true else return false

class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char>s;
        for(char c = 'a'; c <= 'z'; c++)
        {
            s.insert(c);
        }
        for(int i = 0; i < sentence.size(); i++)
        {
            if(s.find(sentence[i]) != s.end())
            {
                s.erase(sentence[i]);
            }
        }
        if(s.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};