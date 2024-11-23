// https://leetcode.com/problems/crawler-log-folder/description/

// use a stack
// loop through the logs
// if the stack is not empty and the current log is "../", then pop the stack
// if the current log is not "./", then push the log to the stack
// finally, count the number of elements in the stack and return the count

class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count = 0;
        stack<string>s;
        for(int i = 0; i < logs.size(); i++)
        {
            if(logs[i] == "../")
            {
                if(!s.empty())
                {
                    s.pop();
                }
            }
            else if (logs[i] != "./")
            {
                s.push(logs[i]);
            }
        }
        while(!s.empty())
        {
            count++;
            s.pop();
        }
        return count;
    }
};