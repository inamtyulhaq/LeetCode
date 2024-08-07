// https://leetcode.com/problems/richest-customer-wealth/

// iterate through the rows (outer vector size)
// for every row, iterate through columns (inner vector size)
// now add all values from that row into a variable
// use another variable initially at 0. if the added sum is greater than this variable
// assign that sum to this variable

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        for(int i = 0; i < accounts.size(); i++)
        {
            int wealth = 0;
            for(int j = 0; j < accounts[i].size(); j++)
            {
                wealth += accounts[i][j];
            }
            if(wealth > maxWealth)
            {
                maxWealth = wealth;
            }
        }
        return maxWealth;
    }
};
