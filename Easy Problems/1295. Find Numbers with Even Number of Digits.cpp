// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/

// iterate through the vector
// for every element, keep on dividing it till it's greater than 0
// keep on incrementing until it keeps on dividing
// if this count at the end divides by 2, then it's even
// increment the original count of numbers having even number of digits

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int temp = nums[i], temp2 = 0;
            while(temp>0)
            {
                temp/=10;
                temp2++;
            }
            if(temp2 % 2 == 0)
            {
                count++;
            }
        }
        return count;
    }
};
