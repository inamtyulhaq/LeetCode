// https://leetcode.com/problems/sum-of-squares-of-special-elements/description/

// loop through the array
// see if an index exactly divides the size of the array
// if YES, then simple add the square of the integer at the index to the sum variables
// return the sum variable

class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                sum += nums[i-1]*nums[i-1];
            }
        }
        return sum;
    }
};
