// https://leetcode.com/problems/goal-parser-interpretation/description/

// create a new string
// if you find '()', append 'o' to the new string and increment before i++, so that
// ')' is passed over
// if you find '(a', append 'a' to the new string and increment before i++, so that
// 'a' is passed over (it's already in our new string)
// if you find 'l)', append 'l' to the new string and increment before i++, so that
// ')' is passed 
// you got the string, return

class Solution {
public:
    string interpret(string command) {
        string goal;
        for (int i = 0; i < command.size(); i++) {
            if (command[i] == '(' && command[i + 1] == ')') {
                command[i] = 'o';
                goal += command[i];
                i++;
            }
            else if (command[i] == '(' && command[i + 1] == 'a')
            {
                goal += command[i+1];
                i++;
            }
            else if (command[i] == 'l' && command[i + 1] == ')')
            {
                goal += command[i];
                i++;
            }
            else
            {
                goal += command[i];
            }
        }
        return goal;
    }
};
