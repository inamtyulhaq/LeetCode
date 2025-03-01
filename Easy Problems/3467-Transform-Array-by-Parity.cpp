// https://leetcode.com/contest/biweekly-contest-151/problems/transform-array-by-parity/

// simple iterate through the array
// for every index, see if it is even, simply assign 0 to that index
// else assign 1 to that index
// now sort at the end
// return

class Solution
{
public:
    vector<int> transformArray(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0)
            {
                nums[i] = 0;
            }
            else
            {
                nums[i] = 1;
            }
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};