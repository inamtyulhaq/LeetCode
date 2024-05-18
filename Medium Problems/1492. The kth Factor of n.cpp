// https://leetcode.com/problems/the-kth-factor-of-n/description/

// firstly, push back all factors of n from 1 till n
// then in a loop, see if any i+1 matches k, then 
// assign factors[i] to k else k is -1 by default

class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>factors;
        int ans = -1;
        for(int i = 1; i <= n; i++)
        {
            if(n % i == 0)
            {
                factors.push_back(i);
            }
        }
        for(int i = 0; i < factors.size(); i++)
        {
            if(i+1 == k)
            {
                ans = factors[i];
                break;
            }
        }
        return ans;
    }
};
