// https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/description/

// iterate through the vector
// store string at every index in a new string
// now iterate through this string
// count the number of spaces in it
// it contains (num of spaces)+1 words
// if (num of spaces)+1 > previous count (initially 0), assign it to count
// return

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int wordsCount = 0;
        for (int i = 0; i < sentences.size(); i++) 
        {
            int temp = 0;
            string sentence = sentences[i];
            for (int i = 0; i < sentence.size(); i++) 
            {
                if (sentence[i] == 32) {
                    temp++;
                }
            }
            if((temp+1) > wordsCount)
            {
                wordsCount = temp+1;
            }
        }
        return wordsCount;
    }
};
