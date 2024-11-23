// https://leetcode.com/problems/detect-capital/description/

// firstly, check if the first letter is lower case and the second letter is upper case, return false
// then, check if the letter i is upper case and the letter i+1 is lower case, return false
// if all the above conditions are not satisfied, return true

class Solution {
public:
    bool detectCapitalUse(string word) {
        if ( (word[0] >= 'a' && word[0] <= 'z') && 
             (word[1] >= 'A' && word[1] <= 'Z') )
        {
            return false;
        }
        for(int i = 1; i < word.size() - 1; i++)
        {
            if( (word[i] >= 'A' && word[i] <= 'Z') && 
                (word[i+1] >= 'a' && word[i+1] <= 'z') ||
                (word[i] >= 'a' && word[i] <= 'z') && 
                (word[i+1] >= 'A' && word[i+1] <= 'Z') )
            {
                return false;
            }
        }
        return true;
    }
};