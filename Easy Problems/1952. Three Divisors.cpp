// https://leetcode.com/problems/three-divisors/description/

// 

class Solution {
public:
    bool isThree(int n) {
        bool br = false; int count = 0;
        for(int i = 1; i <= n; i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }
        if(count==3)
        {
            br = true;
        }
        return br;
    }
};
