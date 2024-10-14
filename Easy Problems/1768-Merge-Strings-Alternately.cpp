// https://leetcode.com/problems/merge-strings-alternately/description/

// use if else conditions
// if length of both words is same, simply append respective indexes of both words to a third string
// firstly append the certain index of the first word and then the certain index of the second word
// if length of any of the word is greater than the other, simply
// append in the new string till the length of word with smaller length
// then make a new for loop, and start from word of smaller length till word of greater length
// here it is, your string is appended

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string newString;
        if(word1.length() == word2.length())
        {
            for (int i = 0; i < word1.length(); i++) 
            {
                newString+=word1[i];
                newString+=word2[i];
            }
        }
        else if(word1.length() > word2.length())
        {
            for (int i = 0; i < word2.length(); i++) 
            {
                newString+=word1[i];
                newString+=word2[i];
            }
            for(int i = word2.length(); i < word1.length(); i++)
            {
                newString+=word1[i];
            }
        }
        else if(word1.length() < word2.length())
        {
            for (int i = 0; i < word1.length(); i++) 
            {
                newString+=word1[i];
                newString+=word2[i];
            }
            for (int i = word1.length(); i < word2.length(); i++) 
            {
                newString+=word2[i];
            }
        }
        return newString;
    }
};
