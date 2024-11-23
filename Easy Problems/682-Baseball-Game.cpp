// https://leetcode.com/problems/baseball-game/

// use a stack
// if the operation is "+", pop the top two elements, add them together, push the sum back to the stack
// if the operation is "D", double the top element and push it back to the stack
// if the operation is "C", pop the top element
// if the operation is a number, push it to the stack
// finally, sum all the elements in the stack and return the sum

class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum = 0;
        stack<int>s;
        for(int i = 0; i < operations.size(); i++)
        {
            if (operations[i] == "+")
            {
                int temp1 = s.top();
                s.pop();
                int temp2 = s.top();
                int temp3 = temp1 + temp2;
                s.push(temp1);
                s.push(temp3);
            }
            else if (operations[i] == "D")
            {
                int temp4 = s.top();
                int temp5 = temp4 * 2;
                s.push(temp5);
            }
            else if (operations[i] == "C")
            {
                s.pop();
            }
            else
            {
                s.push(stoi(operations[i]));
            }
        }
        while(!s.empty())
        {
            sum += s.top();
            s.pop();
        }
        return sum;
    }
};