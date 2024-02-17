class Solution {
public:
    int subtractProductAndSum(int n) {
        int srem = 0, prem = 1, result;
        while(n > 0)
        {
            int rem = n % 10;
            srem = srem + rem;
            prem = prem * rem;
            n = n / 10;
        }
        result = prem - srem;
        return result;
    }
};
