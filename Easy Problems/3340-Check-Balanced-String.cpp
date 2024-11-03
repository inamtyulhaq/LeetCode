// https://leetcode.com/problems/check-balanced-string/description/

// iterate through the string
// if the index is even, add the number to evenSum
// if the index is odd, add the number to oddSum
// if evenSum == oddSum, return true
// else return false

class Solution {
public:
    bool isBalanced(string num) {
        bool isBalanced = false;
        int evenSum = 0, oddSum = 0;
        for(int i = 0; i < num.size(); i++)
        {
            if(i%2 == 0)
            {
                evenSum += static_cast<int>(num[i]-'0');
            }
            else
            {
                oddSum += static_cast<int>(num[i]-'0');
            }
        }
        if(evenSum == oddSum)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};