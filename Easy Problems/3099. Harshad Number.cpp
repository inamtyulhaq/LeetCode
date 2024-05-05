// https://leetcode.com/problems/harshad-number/description/

// Assing given number to another variable.
// Simply, keep on dividing it by 10 and keep on adding its digits.
// See, if it's divisible or not.
// Return as per said.

class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0, y = x, harshad = -1;
        for(int i = 0; i <= x; i++)
        {
            int temp = y % 10;
            sum += temp;
            y = y / 10;
        }
        if(x % sum == 0)
        {
            harshad = sum;
        }
        return harshad;
    }
};
