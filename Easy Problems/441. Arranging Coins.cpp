// https://leetcode.com/problems/arranging-coins/description/

// Simply, make a for loop
// Stairs start from i = 1 and increment i, as staircase increases
// Keep on deducting i from n and keep on incrementing rows
// Return rows
// There is no compulsion, that that last row should be complete

class Solution {
public:
    int arrangeCoins(int n) {
        int rows = 0;
        for(int i = 1; i <= n; i++)
        {
            n = n - i;
            rows++;
        }
        return rows;
    }
};
