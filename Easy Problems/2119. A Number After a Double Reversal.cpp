// https://leetcode.com/problems/a-number-after-a-double-reversal/description/

// The problem is simple
// You need to reverse the number twice
// Firstly reverse the given number
// Then, reverse the number you got after reversing the first number
// If both are equal, return bool variable as true, else false.

class Solution {
public:
    bool isSameAfterReversals(int num) 
    {
        int numr = num, num1 = 0, num2 = 0;
        bool br = false;
        while(num != 0)
        {
            int temp = num % 10;
            num1 = (num1*10) + temp;
            num = num / 10;
        }
        cout << num1 << endl;
        while(num1 != 0)
        {
            int temp1 = num1 % 10;
            num2 = (num2*10) + temp1;
            num1 = num1 / 10;
        }
        cout << num2 << endl;
        if(numr == num2)
        {
            br = true;
        }
        return br;
    }
};
