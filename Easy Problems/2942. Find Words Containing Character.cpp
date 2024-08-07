// https://leetcode.com/problems/find-words-containing-character/

// iterate through the vector of strings
// for every string, iterate through its size
// if find the char x, add the index to the indexes vector
// return the indexes vector

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>indexes;
        for(int i = 0; i < words.size(); i++)
        {
            string s = words[i];
            for(int j = 0; j < s.size(); j++)
            {
                if(s[j] == x)
                {
                    indexes.push_back(i);
                    break;
                }
            }
        }
        return indexes;
    }
};
