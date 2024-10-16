// https://leetcode.com/problems/find-the-maximum-achievable-number/

class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int result = 0, n = num;
        while(t--)
        {
            num++;
        }
        int n1 = num - n;
        result = num + n1;
        return result;
    }
};
