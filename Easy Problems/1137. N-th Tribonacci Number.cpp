// https://leetcode.com/problems/n-th-tribonacci-number/description/

class Solution {
public:
    int tribonacci(int n) 
    {
        int t0 = 0;
        int t1 = 1;
        int t2 = 1;
        int ans = 0;
        if(n==0)
        {
            ans = t0;
        } 
        else if(n==1)
        {
            ans = t1;
        } 
        else if(n==2)
        {
            ans = t2;
        } 
        else if(n>=3)
        {
            for(int i = 3; i <= n; i++)
            {
                int temp = t0;
                t0 = t1; 
                t1 = t2; 
                t2 = temp + t1 + t0;
            }
            ans = t2;
        }
        return ans;
    }
};