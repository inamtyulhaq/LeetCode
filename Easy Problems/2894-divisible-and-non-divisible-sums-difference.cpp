// https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1 = 0, num2 = 0, num;
        for(int i = 1; i <= n; i++)
        {
            if(i % m != 0)
            {
                num1 = num1 + i;
            }
            if(i % m == 0)
            {
                num2 = num2 + i;
            }
        }
        num = num1 - num2;
        return num;
    }
};