// https://leetcode.com/problems/calculate-money-in-leetcode-bank/description/

class Solution {
public:
    int totalMoney(int n) {
        int money = 0;
        for(int i = 1; i>0; i++)
        {
            if(n>=7)
            {
                money += i+i+1+i+2+i+3+i+4+i+5+i+6;
                n = n - 7;
            }
            else if (n == 6)
            {
                money += i+i+1+i+2+i+3+i+4+i+5;
                n = n - 6;
            }
            else if (n == 5)
            {
                money += i+i+1+i+2+i+3+i+4;
                n = n - 5;
            }
              else if (n == 4)
            {
                money += i+i+1+i+2+i+3;
                n = n - 4;
            }
              else if (n == 3)
            {
                money += i+i+1+i+2;
                n = n - 3;
            }
              else if (n == 2)
            {
                money += i+i+1;
                n = n - 2;
            }
              else if (n == 1)
            {
                money += i;
                n = n - 1;
            }
            else if (n == 0)
            {
                break;
            }
        }
        return money;
    }
};
