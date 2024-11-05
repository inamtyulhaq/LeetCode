// https://leetcode.com/problems/rotate-string/?envType=daily-question&envId=2024-11-03

// there are two approaches

// first approach:
// time complexity: O(n^2)
// space complexity: O(1)
// in this approach, basically we are rotating the string and checking if it is equal to goal string or not
// we use rotate function to rotate the string
// if we find the string equal to goal string, we return true
// otherwise, we return false

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length())
        {
            return false;
        }
        bool isGoal = false;
        for(int i = 0; i < s.size(); i++)
        {
            rotate(s.begin(), s.begin()+1, s.end());
            if(s == goal)
            {
                isGoal = true;
                return isGoal;
            }
        }
        return isGoal;
    }
};

// second approach:
// time complexity: O(n)
// space complexity: O(1)
// in this approach, we concatenate the string s with itself and check
// if goal string is present in the concatenated string or not.
// if it is present, we return true
// otherwise, we return false

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length())
        {
            return false;
        }
        if((s+s).find(goal) != string::npos)
        {
            return true;
        }
        return false;
    }
};

