// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/

// simple stack implementation
// loop through the string
// if the stack is not empty and the current character is equal to the top of the stack, then pop the stack
// else push the character to the stack
// finally, reverse the stack and return the string

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>s1;
        stack<char>s2;
        string result;
        for(int i = 0; i < s.size(); i++)
        {
            if(!s1.empty() && s[i] == s1.top())
            {
                s1.pop();
            }
            else
            {
                s1.push(s[i]);
            }
        }
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        while(!s2.empty())
        {
            result += s2.top();
            s2.pop();
        }
        return result;
    }
};