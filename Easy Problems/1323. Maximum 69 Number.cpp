// https://leetcode.com/problems/maximum-69-number/

// I solved this problem by converting integer to number and comparing it while replacing
// 6 with 9 starting from left most (most significant bit).
// Firstly, convert the number to a string and assign it to two strings.
// Now, start a for loop from index-0, (most significant bit) and loop it till the length of one of the strings.
// Now, if any index of string finds 6, replace it with 9 and break out of the loop.
// Now, convert this string to an integer number and return simply.

class Solution {
public:
    int maximum69Number (int num) {
        string newNum = to_string(num);
        string newNum2 = to_string(num);
        for(int i = 0; i < newNum.length(); i++)
        {
            if(newNum[i] == '6')
            {
                newNum[i] = '9';
            }
            if(newNum>newNum2)
            {
                newNum2 = newNum;
                break;
            }
        }
        int newNum4 = stoi(newNum2);
        return newNum4;
    }
};
