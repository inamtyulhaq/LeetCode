// https://leetcode.com/problems/split-strings-by-separator/

// iterate through the words vector
// take each word and iterate through it
// now take a temp string and iterate through the word
// if the character is not equal to the separator then add it to the temp string
// if the character is equal to the separator then add the temp string to the result vector
// if temp string is not empty then add it to the result vector
// return the result vector

class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) 
    {
        vector<string>result;
        for(int i = 0; i < words.size(); i++)
        {
            string s = words[i];
            for(int j = 0; j < s.size(); j++)
            {
                string temp = "";
                while(j < s.size() && s[j] != separator)
                {
                    temp += s[j];
                    j++;
                }
                if(temp.size() != 0)
                {
                    result.push_back(temp);
                }
            }
        }
        return result;
    }
};