// https://leetcode.com/problems/fibonacci-number/

//

class Solution 
{
public:
    int fib(int n)
    {
        int num0=0;
        int num1=1;
        int num2=1;
        int temp, temp1 = 0;
        if(n==1)
        {
                temp1 =  num1;
        }
        else if (n==2)
        {
                temp1 = num2;
        }
        else if(n>=3)
        {
            for(int i = 0; i<=n; i++)
            {
                temp = num0;
                num0=num1;
                num1=temp+num1;
                if (i == n) {
                  temp1 = temp;
                }
            }
        }
        return temp1;
    }
};
