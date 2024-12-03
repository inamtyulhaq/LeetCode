// https://leetcode.com/problems/adding-spaces-to-a-string/description/

// create a new empty string
// iterate through the given string
// append characters of the given string to the new string
// every time you encounter an index in the spaces vector,
// append space to the new string and then append the character at given index
// return the new string

class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int index = 0;
        string spacedS = "";
        for(int i = 0; i < s.size(); i++)
        {
            if(i == spaces[index])
            {
                if(index != spaces.size() - 1)
                {
                    index++;
                }
                spacedS += " ";
            }
            spacedS  += s[i];
        }
        return spacedS;
    }
};