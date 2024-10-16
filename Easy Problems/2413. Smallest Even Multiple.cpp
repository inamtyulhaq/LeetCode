// https://leetcode.com/problems/smallest-even-multiple/

class Solution {
public:
    int smallestEvenMultiple(int n) {
        int x;
        for(int i = 1; i <= 300; i++)
        {
            if(i % n == 0 && i % 2 == 0)
            {
                x = i;
                break;
            }
        }
        return x;
    }
};
