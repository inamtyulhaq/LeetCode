// https://leetcode.com/problems/largest-combination-with-bitwise-and-greater-than-zero/

// a bit manipulation problem
// we have to see if the ith bit of a number is 1 or not
// iterate through all the bits and count the number of numbers that have that bit set
// for each bit, iterate through all the numbers
// there is this mathematical trick to see if kth bit is set or not
// if (num & (1 << k)) != 0, then the kth bit is set
// basically, see if the AND of num and mask for this bit is not 0
// if it is not 0, then the bit is set
// if it is 0, then the bit is not set
// count the number of numbers that have this bit set
// if this count is greater than the previous count, update the count
// return the count

// for more: https://www.geeksforgeeks.org/check-whether-k-th-bit-set-not/

class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int count = 0;
        for(int i = 0; i < 24; i++)
        {
            int temp = 0;
            for(int &num: candidates)
            {
                if((num & (1 << i)) != 0)
                {
                    temp++;
                }
            }
            if(temp > count)
            {
                count = temp;
            }
        }
        return count;
    }
};