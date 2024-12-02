// https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/

// iterate through the string
// split out each word
// now split that word from the start of that word till the length of searchWord
// now see if they both match
// return i+1, (1-indexed)
// if not any return -1

class Solution 
{
public:
    int isPrefixOfWord(string sentence, string searchWord) 
    {
        int count = 0;
        for(int i = 0; i < sentence.size(); i++)
        {
            string temp = "", temp2 = "";
            while(sentence[i] != ' ' && i != sentence.size())
            {
                temp += sentence[i];
                i++;
            }
            if(temp.size() >= searchWord.size())
            {
                for(int j = 0; j < searchWord.size(); j++)
                {
                    temp2 += temp[j];
                }
            }
            if(temp2 == searchWord)
            {
                return count + 1;
            }
            count++;
        }
        return -1;
    }
};