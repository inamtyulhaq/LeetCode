// https://leetcode.com/problems/circular-sentence/?envType=daily-question&envId=2024-11-02

// firstly check if the first and last character are the same
// then check if the character before and after the space are the same
// if not return false
// if all the conditions are met return true

class Solution {
public:
    bool isCircularSentence(string sentence) {
        if(sentence[0] != sentence[sentence.size()-1])
        {
            return false;
        }
        else
        {
            for(int i = 0; i < sentence.size(); i++)
            {
                if(sentence[i] == 32 && sentence[i-1] != sentence[i+1])
                {
                    return false;
                }  
            }
        }
        return true;
    }
};