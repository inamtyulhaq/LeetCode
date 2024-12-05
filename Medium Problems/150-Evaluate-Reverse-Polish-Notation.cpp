// https://leetcode.com/problems/evaluate-reverse-polish-notation/

// use a stack
// if the tokens vector has only one element, return that element
// else, iterate through the vector
// if the element is not an operator, push it to the stack
// if the element is an operator, pop the top two elements from the stack
// perform the operation and push the result back to the stack
// return the result at the end of the iteration

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        if(tokens.size() == 1)
        {
            return stoi(tokens[0]);
        }
        stack<string>s;
        int result = 0;
        for(int i = 0; i < tokens.size(); i++)
        {
            if(tokens[i] != "+" && tokens[i] != "-" &&
               tokens[i] != "*" && tokens[i] != "/")
            {
                s.push(tokens[i]);
            }
            else
            {
                int temp1 = stoi(s.top());
                s.pop();
                int temp2 = stoi(s.top());
                s.pop();
                if(tokens[i] == "+")
                {
                    result = temp1 + temp2;
                }
                else if(tokens[i] == "-")
                {
                    result = temp2 - temp1;
                }
                else if(tokens[i] == "*")
                {
                    result = temp1 * temp2;
                }
                else if(tokens[i] == "/")
                {
                    result = temp2 / temp1;
                }
                s.push(to_string(result));
            }
        }
        return result;
    }
};