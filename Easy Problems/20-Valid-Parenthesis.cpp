// https://leetcode.com/problems/valid-parentheses/

// This is a LeetCode classic
// take in the brackets as string
// use a stack
// now if the bracket is an opening bracket,
// push it into the stack
// if the bracket is a closing bracket,
// check if the stack is empty or the top of the stack is not the corresponding opening bracket
// if it is not, return false
// else pop the top of the stack
// if the stack is empty at the end, return true
// else return false

#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> charStack;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                charStack.push(s[i]);
            }
            else if (s[i] == ')')
            {
                if (charStack.empty() || charStack.top() != '(')
                {
                    return false;
                }
                charStack.pop();
            }
            else if (s[i] == '}')
            {
                if (charStack.empty() || charStack.top() != '{')
                {
                    return false;
                }
                charStack.pop();
            }
            else if (s[i] == ']')
            {
                if (charStack.empty() || charStack.top() != '[')
                {
                    return false;
                }
                charStack.pop();
            }
        }
        if (charStack.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution sol;
        if (sol.isValid(s))
        {
            cout << "The string is balanced.\n";
        }
        else
        {
            cout << "The string is not balanced.\n";
        }
    }
}