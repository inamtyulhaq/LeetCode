// https://leetcode.com/problems/reverse-prefix-of-word/description/

// firstly, we need to find the index of the character ch in the string word
// do this by iterating through the string and checking if the current character is equal to ch
// use a stack to store the characters before the character ch
// if the character ch is found, push it to the stack and break the loop
// now, pop the characters from the stack and append them to the result string
// then, append the remaining characters of the string word to the result string
// if the character ch is not found, return the string word as it is


class Solution {
public:
    string reversePrefix(string word, char ch) 
    {
        string result;
        stack<char>s;
        int i;
        for(i = 0; i < word.size(); i++)
        {
            if(word[i] == ch)
            {
                break;
            }
            s.push(word[i]);
        }
        if(i != word.size())
        {
            s.push(word[i]);
            while(!s.empty())
            {
                result += s.top();
                s.pop();
            }
            for(int j = i+1; j < word.size(); j++)
            {
                result += word[j];
            }
            return result;
        }
        else
        {
            return word;
        }
    }
};